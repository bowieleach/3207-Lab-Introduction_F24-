#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//generate a random number between 1 and 26 for all letters of the alphabet
char randchar() {
    char letters[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int randInt = rand() % 26;
    char letter = letters[randInt];
    return letter;
}