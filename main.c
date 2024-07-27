#include "cipher.c"
#include <stdlib.h>

int main(int argc, char **argv){
    
    if( argc < 2 ){
        fprintf(stderr, "Please invoke as %s <shift amount>\n", argv[0]);
        return 1; //indicating command line invocation was not correct
    }
    
    int shiftKey = atoi(argv[1]);
    char *message = malloc(100 * sizeof(char));
    fgets(message, 100, stdin);
    char *out = caesarCipher(shiftKey, message);
    char *recreate = decipherCaesarCipher(shiftKey, out);
    printf("%s", recreate);
    free(message); //deallocate memory 
    free(out); //deallocate memory -> out allocates within the function
}