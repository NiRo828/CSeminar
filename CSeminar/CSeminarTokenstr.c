/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

struct oscarActor
{
	int Index;
	int Year;
	char Age;
	char Movie[1000];
	struct oscarActor* next;
	struct oscarActor* prev;
};

main()
{
	char numbersstr[100] = { 123, 456, 789, 1, 2, 3, 4, 5, 6, 7, 2000 }
}
 
int main()
{
	??
		FILE* f = fopen("oscar_age_female.txt", "r");
	char str[100] = "0", * year = 0, * name, * movie;
	char* token = 0;
	fgets(str, sizeof(str), f);
	fgets(str, sizeof(str), f);
	while (str || year)
	{
		??
			token = strtok(str, " ");
		year = strtok(NULL, ",");
		if (!year)
		{
			??
				break;
		}??
			token = strtok(NULL, "\"");
		name = strtok(NULL, "\"");
		token = strtok(NULL, "\"");

movie = strtok(NULL, "\"");
		token = strtok(str, " ");
		printf("The Oskar Goes to %s at %s Movie %s\n", name, year, movie);
		fgets(str, sizeof(str), f);
	}??
}??
*/