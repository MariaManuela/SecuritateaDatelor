#include <stdio.h>
#include <stdlib.h>

int main()
{
    char decryptedMessage[100], letter;
    int i, key;

    printf("Enter message: ");
    gets(decryptedMessage);
    printf("Enter key: ");
    scanf("%d", &key);

    for(i=0; decryptedMessage[i] != '\0'; i++){
       // if(message[i] != '\0')
        //{
        letter = decryptedMessage[i];
        if(letter >= 'A' && letter <= 'Z'){

           letter = letter - key;

            if(letter < 'A')
           {
               letter = letter + 'Z' - 'A' + 1;
           }

           decryptedMessage[i] = letter;
        }

    //    }
    }
    printf ("Decrypted message is: %s", &decryptedMessage);
    return 0;
}
