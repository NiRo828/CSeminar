#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*int main_con_1()
{
	int numzero;
	scanf_s("%d",&numzero);
	if (numzero == 0)
	{
		printf("!!!");
	}
	else
	{
		printf("PPP");
	}
		

	return;

}
*/
int main_3_1()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	sum = num1+num2;
	scanf("%d", &num1);
	if (sum > 100)
	{
		printf("WIN");
	}
	else
	{
		printf("%d",sum);
	}
	return;
}