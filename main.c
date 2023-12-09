#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkForRightInput(char *input) {
    assert(input != NULL);
    // TODO: add padding to this
    assert(strlen(input) == 4);
    for (int i = 0; input[i] != '\0'; i++) {
        assert(isdigit(input[i]));
    }
    return 0;
}

char byteToHex(unsigned char input) {
    assert(input >= 0 && input <= 15);
    if (input < 10) {
        return input + '0';
    } else {
        return input - 10 + 'A';
    }
}

void readByte(unsigned char input) {
    unsigned char highNibble = input >> 4;
    unsigned char lowNibble = input & 0x0F;
    
    printf("Hex: %c%c\n", byteToHex(highNibble), byteToHex(lowNibble));

    printf("Hight: %d\n", highNibble);
    printf("Low: %d\n", lowNibble);
}

int main(int argc, char *argv[]) {
    // char *input = argv[1];
    char *input = "1111";
    if (checkForRightInput(input) != 0) {
        printf("Wrong input\n");
        return EXIT_FAILURE;
    }

    unsigned char inputInt = (unsigned char) strtol(input, NULL, 0);


    readByte(inputInt);


    return EXIT_SUCCESS;
}
