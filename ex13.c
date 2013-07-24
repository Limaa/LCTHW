#include <stdio.h>

int main(int argc, char *argv[])
{
int j = 1;
for(j = 1; j < argc; j++)
{
	int i = 0;
	char letter = argv[j][i];
	for(i = 0; argv [j][i] != '\0'; i++, letter = argv[j][i])
	{
		switch(letter)
		{
			case 'a':
			case 'a'-32:
				printf("%d: 'A'\n", i);
				break;

			case 'e':
			case 'e'-32:
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			case 'i'-32:
				printf("%d: 'I'\n", i);
				break;

			case 'o':
			case 'o'-32:
				printf("%d: 'O'\n", i);
				break;

			case 'u':
			case 'u'-32:
				printf("%d: 'U'\n", i);
				break;

			case 'y':
			case 'y'-32:
				if(i > 2)
				{
					//it's only sometimes Y
					printf("%d: 'Y'\n", i);
				}
				break;

			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
}

	return 0;
}
