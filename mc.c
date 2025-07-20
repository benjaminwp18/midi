#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

// #define DEBUG

#include "midi.c"

const char* INSTRUMENT_NAMES[] = {
    "banjo",
    "basedrum",
    "bass",
    "bell",
    "bit",
    "chime",
    "cow_bell",
    "didgeridoo",
    "flute",
    "guitar",
    "harp",
    "iron_xylophone",
    "pling",
    "snare",
    "xylophone",
};

const char* INSTRUMENT_BLOCKS[] = {
    "hay_block",
    "stone",
    "cherry_planks",
    "gold_block",
    "emerald_block",
    "packed_ice",
    "soul_sand",
    "pumpkin",
    "clay",
    "wool",
    "waxed_copper_block",
    "iron_block",
    "glowstone",
    "sand",
    "bone_block"
};

const unsigned int INSTRUMENT_RANGE = 24;

const unsigned int INSTRUMENT_RANGE_STARTS[] = {
    54, // banjo
    0, // basedrum
    30, // bass (f#1)
    78, // bell
    54, // bit
    78, // chime
    66, // cow_bell
    30, // didgeridoo (f#1)
    66, // flute
    42, // guitar
    54, // harp/piano
    54, // iron_xylophone
    54, // pling
    0, // snare
    78, // xylophone
};

const size_t CHANNEL_INSTRUMENTS[] = {10, 10, 10, 10};

const unsigned int DELAY_DIVISOR = 96;  // 48

int xPos = 0;
int zPos = 0;

unsigned int runningDelay = 0;
bool trackHasNotes = false;
unsigned int notesInChord = 0;

void onDelay(unsigned int deltaTime) {
    runningDelay += deltaTime;
}

void onNote(bool on, unsigned int channel, unsigned int note, unsigned int velocity) {
    // Ignore note offs
    if (!on) {
        return;
    }

    trackHasNotes = true;

    // Quantize & flush delay
    if (runningDelay >= DELAY_DIVISOR) {
        while (runningDelay > 4 * DELAY_DIVISOR) {
            printf("setblock ~%d ~ ~%d minecraft:repeater[delay=%u]\n", xPos, zPos, 4);
            zPos += 1;
            runningDelay -= 4 * DELAY_DIVISOR;
        }
        if (runningDelay / DELAY_DIVISOR > 0) {
            printf("setblock ~%d ~ ~%d minecraft:repeater[delay=%u]\n", xPos, zPos, runningDelay / DELAY_DIVISOR);
            zPos += 1;
        }

        runningDelay = 0;
        notesInChord = 0;
    }

    // Move note to octave in range
    size_t instrIndex = CHANNEL_INSTRUMENTS[channel];
    unsigned int rangeStart = INSTRUMENT_RANGE_STARTS[instrIndex];
    unsigned int rangeEnd = INSTRUMENT_RANGE_STARTS[instrIndex] + INSTRUMENT_RANGE;

    if (note < rangeStart) {
        unsigned int distToRange = rangeStart - note;
        if (distToRange % 12 > 0) {
            note += (distToRange / 12 + 1) * 12;
        }
    }

    if (rangeEnd < note) {
        unsigned int distToRange = note - rangeEnd;
        if (distToRange % 12 > 0) {
            note -= (distToRange / 12 + 1) * 12;
        }
    }

    // Write note
    if (rangeStart <= note && note <= rangeEnd) {
        int x = xPos;
        if (notesInChord == 1) {
            x += 1;
        }
        else if (notesInChord == 2) {
            x -= 1;
        }
        else if (notesInChord > 2) {
            return;
        }

        // Cancel previous step forward now that we know it's a chord
        if (notesInChord > 0) {
            zPos -= 1;
        }

        printf(
            "setblock ~%d ~-1 ~%d minecraft:%s\n",
            x,
            zPos,
            INSTRUMENT_BLOCKS[instrIndex]
        );
        printf(
            "setblock ~%d ~ ~%d minecraft:note_block[instrument=%s,note=%u]\n",
            x,
            zPos,
            INSTRUMENT_NAMES[instrIndex],
            note - INSTRUMENT_RANGE_STARTS[instrIndex]
        );
        zPos += 1;
        notesInChord += 1;
    }
}

void onTrackEnd() {
    runningDelay = 0;
    notesInChord = 0;
    if (trackHasNotes) {
        xPos += 3;
    }
    zPos = 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "ERROR: Got %d command line arguments; 1 expected. Please specify MIDI file path.\n", argc - 1);
        return 1;
    }

    FILE *filePtr = fopen(argv[1], "rb");

    if (filePtr == NULL) {
        fprintf(stderr, "ERROR: Failed to open MIDI file. Please specify MIDI file path.\n");
        return 1;
    }

    Callbacks callbacks;
    callbacks.onDelay = onDelay;
    callbacks.onNote = onNote;
    callbacks.onTrackEnd = onTrackEnd;

    readMIDI(filePtr, &callbacks);

    return 0;
}