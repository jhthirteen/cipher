#include "cipher.c"
#include <stdlib.h>

int main(int argc, char **argv){
    
    if( argc < 2 ){
        fprintf(stderr, "Please invoke as %s <shift amount>\n", argv[0]);
        return 1; //indicating command line invocation was not correct
    }
    
    int shiftKey = atoi(argv[1]);

    char *message = malloc(100 * sizeof(char));
    fgets(message, 100, stdin); //handles input -> message to be encrypted

    char *encryptedMessage = malloc(strlen(message) * sizeof(char));
    caesarCipher(shiftKey, message, encryptedMessage);
    printf("%s\n", encryptedMessage);

    char *recreateMessage = malloc(strlen(encryptedMessage) * sizeof(char));
    decipherCaesarCipher(shiftKey, encryptedMessage, recreateMessage);
    printf("%s", recreateMessage);
    

    free(message); //deallocate memory 
    free(encryptedMessage);
    free(recreateMessage);
}