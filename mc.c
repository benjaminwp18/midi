#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#include "midi.c"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "ERROR: Got %d command line arguments; 1 expected. Please specify MIDI file path.\n", argc - 1);
        return 1;
    }

    FILE *filePtr = fopen(argv[1], "r");

    if (filePtr == NULL) {
        fprintf(stderr, "ERROR: Failed to open MIDI file. Please specify MIDI file path.\n");
        return 1;
    }

    process(filePtr);

    return 0;
}