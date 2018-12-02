
#include <stdio.h>

int main()
{
    int nr = 0;
    char inputString[50];
    char* letters = "abcdefghijklmnopqrstuvwxyz";
    
    printf("Type string: ");
    scanf("%s", inputString);

    
    for(int i = 0; i<strlen(letters); i++)
    {
        for(int j = 0; j<strlen(inputString); j++)
        {
            if(letters[i] == tolower(inputString[j]))
               nr++; 
        }
        if(nr>0)
        {
            printf("Number of appearances for letter %c is:%d",letters[i], nr);
            nr =0;
        }
    }
    
   
    
    return 0;
}
