/* 
You can view my notes on other languages (C# / Python) below
https://wwww.bit.ly/JeeCsharp or https://wwww.bit.ly/JeePython
*/ 

#include <stdio.h> //imports library stdio

int globalvar = 100;

main()
{
	char localvar = 'A';
	char StringVar[] = "Hello again, this is a test of string";

	printf("Hello friend, welcome to this C program test");
	printf("The globalVar is: %d \n", globalvar);
	printf("The localvar is: %c \n", localvar);
	printf("The stringVar is: %s \n", StringVar);

	char UserChar;
	printf("\n\nWhat is your favorite letter, my friend: ");
	scanf("%c", &UserChar);
	printf("Very good, interesting that you chose: %c \n", UserChar);

	char UserString[30];
	printf("Now give me more characters my friend: \n");
	scanf(" %s", UserString);
	printf("I see my friend, you typed: %s \n", UserString);
}