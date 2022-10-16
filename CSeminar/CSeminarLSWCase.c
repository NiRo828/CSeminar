#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)



void multiply()
{
	int result = 0;	

}



int SWcasemain()
{
	int a = 10;
	int b = 12;


	char userResponse;
	printf("Hi Dear User \n What would you like to do?\n + to add numbers  - Substract numbers x - Multiply numbers E-to exit\n");
	userResponse = getch();
	while (userResponse != 'E')
	{



		switch (userResponse)
		{
		case '+':
			printf("%d+%d=%d\n", a, b, a + b);
			break;

		case '-':
			printf("%d-%d=%d\n", a, b, a - b);
			break;

		case 'x':
			printf("%dx%d=%d\n", a, b, a * b);
			break;

		case 'E': printf("Thank you for using our Great service. See you next time. Drink only water\n");
			break;

		default:
			printf("Wrong selection. Try be more sharp\n");
			break;
		}
		printf("Hi Dear User \n What would you like to do?\n + to add numbers  - Substract numbers x - Multiply numbers E-to exit\n");
		userResponse = getch();
	}
}
	/*
		//#define use_if		
#ifdef use_if

		if (userresponse == '+')
		{
			push(100, 200);
		}
		else if (userresponse == '-')
		{
			printlist();
		}
		else if (userresponse == 'r')
		{
			pop();
		}
		else if (userresponse == 'e')
		{
			printf("thank you for use our great service. see you next time. drink only water\n");
		}
		else
		{
			printf("wrong selection. try be more sharp\n");
		}
#else
	*/