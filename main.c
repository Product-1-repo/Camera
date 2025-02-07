#include <stdio.h>
#include "functions.h"

int main(void) 
{
	char name[50];
	printf("Enter your name: ");
	scanf("%s", name);

	printName(name);

	sleep(1);
	printf("End!\n");
	
	return 0;
}
// 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
