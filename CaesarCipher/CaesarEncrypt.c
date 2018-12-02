#include <stdio.h>
#include <stdlib.h>

int main()
{
    char encryptedMessage[100], letter;
    int i, key;

    printf("Enter message: ");
    gets(encryptedMessage);
    printf("Enter key: ");
    scanf("%d", &key);

    for(i=0; encryptedMessage[i] != '\0'; i++){
       // if(message[i] != '\0')
        //{
        letter = encryptedMessage[i];
        if(letter >= 'A' && letter <= 'Z'){

           letter = letter + key;

            if(letter > 'Z')
           {
               letter = letter - 'Z' + 'A' - 1;
           }

           encryptedMessage[i] = letter;
        }

    //    }
    }
    printf ("Encrypted message is: %s", &encryptedMessage);
    return 0;
}
