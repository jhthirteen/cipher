#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void caesarCipher(int shift, char *message, char *encryptedPtr){
    char *encryptedIter = encryptedPtr;
    while( *message != '\0' ){ //iterate through the entirety of the message we are trying to encrypt
        *encryptedIter = ( ((int)*message - 32 + shift)%95 )+32;
        message++;
        encryptedIter++;
    }
}

void decipherCaesarCipher(int shift, char *encrypted, char *messagePtr){ //this function does not work yet!!!!
    char *messageIter = messagePtr;
    while( *encrypted != '\0' ){
        *messageIter = ( ((int)*encrypted - 32 + (95 - shift%95))%95 )+32;
        encrypted++;
        messageIter++;
    }
}