#include "functions.h"

void printName(char *name) 
{
	srand(time(NULL)); // Seed random number generator

	while (*name) 
	{
		int spaces = rand() % 5; // Random spaces (0-4)
		for (int i = 0; i < spaces; i++) 
		{
			printf(" ");
		}

		// Randomly decide uppercase or lowercase
		char letter = (rand() % 2) ? toupper(*name) : tolower(*name);

		// Randomly decide to add an asterisk
		if (rand() % 3 == 0) 
		{
			printf("*%c*", letter);
		} 
		else 
		{
			printf("%c", letter);
		}
		name++;
	}
	printf("\n");
}