#include<stdio.h>
#include<stdlib.h>

char* letters = "abcdefghijklmnopqrstuvwxyz";
 
void Encrypt(char text[], char key[])
{

	for (int i = 0; i < strlen(text); ++i)
	{
		int TextLetter = toupper(text[i]) - 'A';
		int KeyLetter = toupper(key[i % strlen(key)]) - 'A';
		char* encryptedMessage = letters[(KeyLetter - TextLetter + strlen(letters)) % strlen(letters)];
 		printf("%c", encryptedMessage);
	}
}

 void Decrypt(char text[], char key[])
{
	
	for (int i = 0; i < strlen(text); ++i)
	{
		int TextLetter = toupper(text[i]) - 'A';
		int KeyLetter = toupper(key[i % strlen(key)]) - 'A';
		char* decryptedMessage = letters[(KeyLetter - TextLetter + strlen(letters)) % strlen(letters)];
		printf("%c", decryptedMessage );
	}
}
 int main()
{
	int option;
	char key[100];
	char text[100];
	while (1)
	{
		printf("\nChoose your option: \n");
		printf("1.Encrypt \n");
		printf("2.Decrypt \n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("Type decrypted message: ");
			scanf(" %[^'\n']s", text, sizeof(text));
			printf("Type key: ");
			scanf(" %[^'\n']s", key, sizeof(key));
			Encrypt(text, key);
			break;
		case 2:
			printf("Type decrypted message: ");
			scanf(" %[^'\n']s", text, sizeof(text));
			printf("Type key: ");
			scanf(" %[^'\n']s", key, sizeof(key));
			Decrypt(text, key);
			break;
		default:
			printf("Choose one of this options: ");
			break;
		}
	}
	return 0;
} 