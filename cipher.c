#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char* caesarCipher(int shift, char *message){
    char *ePtr = malloc(strlen(message) * sizeof(char)); //dynamically allocate memory to hold our encrypted message
    char *eIter = ePtr;
    while( *message != '\0' ){ //iterate through the entirety of the message we are trying to encrypt
        *eIter = ( ((int)*message - 32 + shift)%93 )+32;
        message++;
        eIter++;
    }
    return ePtr;
}

char* decipherCaesarCipher(int shift, char *encrypted){ //this function does not work yet!!!!
    char *message = malloc(strlen(encrypted) * sizeof(char));
    char *mIter = message;
    while( *encrypted != '\0' ){
        *mIter = ( ((int)*encrypted + 32 - shift)%93 )+32;
        encrypted++;
        mIter++;
    }
    return message;
}