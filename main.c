#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

// https://www.freqsound.com/SIRA/MIDI%20Specification.pdf
// https://metavee.github.io/midi2csv/

bool readWithErrors(unsigned char *buffer, size_t count, FILE *stream) {
    size_t numRead = fread(buffer, sizeof(char), count, stream);
    if (numRead < count) {
        if (feof(stream) > 0) {
            fprintf(stderr, "ERROR: Unexpected end of file\n");
        }
        else {
            fprintf(stderr, "ERROR: Problem reading from file\n");
        }
    }

    return numRead < count;
}

bool readOrExit(unsigned char *buffer, size_t count, FILE *stream) {
    if (readWithErrors(buffer, count, stream)) {
        exit(EXIT_FAILURE);
    }
}

void printHexString(unsigned char *buffer, size_t length) {
    for (int i = 0; i < length; i++) {
        printf("%02hhx%s", buffer[i], i == length - 1 ? "\0" : " \0");
    }
}

void printPaddedHexString(unsigned char *buffer, size_t length) {
    printHexString(buffer, length);

    if (4 > length) {
        for (int i = 0; i < 4 - length; i++) {
            printf("   ");
        }
    }
}

unsigned int bigEndianToUInt(unsigned char *bytes, int length) {
    unsigned int result = 0;
    for (int i = 0; i < length; i++) {
        result <<= 8;
        result |= bytes[i];  // Need *unsigned* chars to avoid complement issues here
    }
    return result;
}

int readVariableLength(unsigned char destination[4], FILE *stream) {
    // Variable length quantities are capped at 4 bytes
    for (int i = 0; i < 4; i++) {
        if (readWithErrors(destination + i, 1, stream)) {
            return -1;
        }

        if ((destination[i] & 0b10000000) == 0) {
            // MSB is unset for the final byte of a VLQ
            return i + 1;
        }
    }
}

unsigned int variableLengthToUInt(unsigned char bytes[4]) {
    unsigned int result = 0;
    for (int i = 0; i < 4; i++) {
        result <<= 7;
        result |= bytes[i] & 0b01111111;

        if ((bytes[i] & 0b10000000) == 0) {
            // MSB is unset for the final byte of a VLQ
            break;
        }
    }
    return result;
}

static const char MTHD[] = {'M', 'T', 'h', 'd'};
static const char MTRK[] = {'M', 'T', 'r', 'k'};
static const char FORMATS[][13] = {
    "single track",
    "multi track",
    "patterns"
};

const char* metaEventToString(unsigned char metaEvent) {
    switch (metaEvent) {
        case 0x00:
            return "sequence number";
        case 0x01:
            return "text event";
        case 0x02:
            return "copyright notice";
        case 0x03:
            return "sequence/track name";
        case 0x04:
            return "instrument name";
        case 0x05:
            return "lyric";
        case 0x06:
            return "marker";
        case 0x07:
            return "cue point";
        case 0x20:
            return "channel prefix";
        case 0x2F:
            return "end of track";
        case 0x51:
            return "set tempo";
        case 0x54:
            return "SMPTE offset";
        case 0x58:
            return "time signature";
        case 0x59:
            return "key signature";
        case 0x7F:
            return "sequencer-specific event";
        default:
            return "unknown event";
    }
}

int main(int argc, char *argv[]) {
    int i = 0;

    if (argc != 2) {
        fprintf(stderr, "ERROR: Got %d command line arguments; 1 expected. Please specify MIDI file path.\n", argc - 1);
        return 1;
    }

    FILE *filePtr = fopen(argv[1], "r");

    if (filePtr == NULL) {
        fprintf(stderr, "ERROR: Failed to open MIDI file. Please specify MIDI file path.\n");
        return 1;
    }

    unsigned char fourBytes[4];

    readOrExit(fourBytes, 4, filePtr);

    printPaddedHexString(fourBytes, 4);
    printf("\tChunk type: \"%.4s\"\n", fourBytes);

    if (strncmp(fourBytes, MTHD, 4) == 0) {
        printf("\n# Reading header chunk\n");
    }
    else {
        printf("ERROR: First chunk was not header\n");
        return 1;
    }

    readOrExit(fourBytes, 4, filePtr);

    unsigned int chunkLength = bigEndianToUInt(fourBytes, 4);

    printPaddedHexString(fourBytes, 4);

    printf("\tChunk length: %u\n", chunkLength);

    if (chunkLength != 6) {
        printf("WARNING: Header chunk had invalid length (%u != 6)\n", chunkLength);
        printf("         I will pretend header length was 6\n");
    }

    unsigned char twoBytes[2];

    readOrExit(twoBytes, 2, filePtr);

    printPaddedHexString(twoBytes, 2);

    unsigned int format = bigEndianToUInt(twoBytes, 2);

    if (format > 3) {
        printf("\nWARNING: Illegal format (%u not in {1,2,3})\n", format);
    }

    printf("\tFormat: %u (%s)\n", format, FORMATS[format]);

    readOrExit(twoBytes, 2, filePtr);

    printPaddedHexString(twoBytes, 2);

    unsigned int numTracks = bigEndianToUInt(twoBytes, 2);

    printf("\tNum tracks: %u\n", numTracks);

    if (numTracks < 1) {
        printf("\nWARNING: track count of 0 specified\n");
    }
    else if (format == 0 && numTracks != 1) {
        printf("\nWARNING: track count was not 1 for a single-track format\n");
    }

    readOrExit(twoBytes, 2, filePtr);

    printPaddedHexString(twoBytes, 2);

    bool useSMPTE = false;
    unsigned int ticksPerQuarter;

    if (twoBytes[0] & 0b10000000) {
        printf("\tDelta format: SMPTE (WARNING: not supported)\n");
        // TODO: support SMPTE readout
    }
    else {
        // MSB is 0 for ticks/quarter, so it doesn't affect the value
        ticksPerQuarter = bigEndianToUInt(twoBytes, 2);

        printf("\tDelta format: %u ticks/quarter note\n", ticksPerQuarter);
    }

    unsigned int chunkIndex = 0;
    unsigned int deltaTime = 0;
    unsigned int eventLength = 0;
    unsigned int channel = 0;
    unsigned char noBottomNybble;
    unsigned char noTopNybble;
    bool isNoteOn = false;
    int bytesRead = 0;

    for (int i = 0; i < numTracks; i++) {
        readOrExit(fourBytes, 4, filePtr);

        printf("\n\n");
        printPaddedHexString(fourBytes, 4);
        printf("\tChunk type: \"%.4s\"\n", fourBytes);

        if (strncmp(fourBytes, MTRK, 4) == 0) {
            printf("\n# Reading track chunk\n");
        }
        else {
            printf("\nERROR: Subsequent chunk was not a track\n");
            return 1;
        }

        readOrExit(fourBytes, 4, filePtr);

        chunkLength = bigEndianToUInt(fourBytes, 4);

        printPaddedHexString(fourBytes, 4);

        printf("\tChunk length: %u\n", chunkLength);

        chunkIndex = 0;

        while (chunkIndex < chunkLength) {
            bytesRead = readVariableLength(fourBytes, filePtr);
            if (bytesRead == -1) {
                return 1;
            }

            printPaddedHexString(fourBytes, bytesRead);

            deltaTime = variableLengthToUInt(fourBytes);

            printf("\tDelta time: %u\n", deltaTime);

            readOrExit(twoBytes, 1, filePtr);

            noBottomNybble = twoBytes[0] & (unsigned char) 0xF0;
            noTopNybble = twoBytes[0] & (unsigned char) 0x0F;

            if (twoBytes[0] == 0xFF) {
                // Meta-Event
                readOrExit(twoBytes + 1, 1, filePtr);

                printPaddedHexString(twoBytes, 2);

                printf("\tMeta event (%s)\n", metaEventToString(twoBytes[1]));

                bytesRead = readVariableLength(fourBytes, filePtr);
                if (bytesRead == -1) {
                    return 1;
                }

                printPaddedHexString(fourBytes, bytesRead);

                eventLength = variableLengthToUInt(fourBytes);

                printf("\tMeta event contents length: %u\n", eventLength);

                unsigned char metaEventContents[eventLength];

                readOrExit(metaEventContents, eventLength, filePtr);

                printPaddedHexString(metaEventContents, eventLength);

                // TODO: format this correctly for other common event types
                if (twoBytes[1] == 0x51) {
                    // Set tempo
                    printf("\t(Tempo: %u us/quarter)\n", bigEndianToUInt(metaEventContents, eventLength));
                }
                else {
                    printf("\t(Contents as text: \"%.*s\")\n", eventLength, metaEventContents);
                }

                if (twoBytes[1] == 0x2F) {
                    printf("End of track\n");
                    break;
                }
            }
            else if (twoBytes[0] == 0xF7 || twoBytes[0] == 0xF0) {
                // System exclusive event
                printPaddedHexString(twoBytes, 1);
                printf("\tsysex event\n");

                bytesRead = readVariableLength(fourBytes, filePtr);
                if (bytesRead == -1) {
                    return 1;
                }

                printPaddedHexString(fourBytes, bytesRead);

                eventLength = variableLengthToUInt(fourBytes);

                printf("\tSysex event contents length: %u\n", eventLength);

                unsigned char eventContents[eventLength];

                readOrExit(eventContents, eventLength, filePtr);

                printPaddedHexString(eventContents, eventLength);
                printf("\n");
            }
            else if (noBottomNybble == 0x80 || noBottomNybble == 0x90) {
                // Note off or note on
                channel = bigEndianToUInt(&noTopNybble, 1);
                isNoteOn = (twoBytes[0] & 0xF0 == 0x90);

                printHexString(twoBytes, 1);
                printf(" ");
                readOrExit(twoBytes, 2, filePtr);
                printHexString(twoBytes, 2);

                printf(
                    "\tNote %s: C%u N%u V%u\n",
                    isNoteOn ? "on" : "off",
                    channel,
                    bigEndianToUInt(twoBytes, 1),
                    bigEndianToUInt(twoBytes + 1, 1)
                );
            }
            else if (noBottomNybble == 0xA0 || noBottomNybble == 0xB0 || noBottomNybble == 0xE0) {
                // Two-data-byte messages
                // Polyphonic key pressure, control change/channel mode, pitch bend change
                channel = bigEndianToUInt(&noTopNybble, 1);
                printHexString(twoBytes, 1);
                printf(" ");
                readOrExit(twoBytes, 2, filePtr);
                printHexString(twoBytes, 2);
                // TODO
                printf("\tMIDI message with 2 data bytes (unimplemented)\n");
            }
            else if (noBottomNybble == 0xC0 || noBottomNybble == 0xD0) {
                // One-data-byte messages
                // Program change, channel pressure (after touch)
                channel = bigEndianToUInt(&noTopNybble, 1);
                readOrExit(twoBytes + 1, 1, filePtr);
                printPaddedHexString(twoBytes, 2);
                // TODO
                printf("\tMIDI message with 1 data byte (unimplemented)\n");
            }
            else {
                printf("ERROR: unsupported event");
                return 1;
            }
        }
    }

    return 0;
}