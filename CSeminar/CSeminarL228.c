//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning(disable : 4996)
//#define _CRT_SECURE_NO_WARNINGS
//
////function specification
////function body
//int alloc5numbers(int num1, int num2, int num3, int num4, int num5)
//int printNum(int*numberList)
//
//int main_228()
//{
//	int* adress alloc5numbers(2, 3, 4, 5, 6);
//	int sum = printNum(adress);
//	free(adress);
//}
//
//int printNum(int* numberList)
//{
//	int sum = 0;
//	int* ptr = numberList;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += *ptr;
//		ptr++;
//	}
//	return sum;
//}
//
//	int alloc5numbers(int num1, int num2, int num3, int num4, int num5)
//	{
//		int* ret;	//what i return
//		int* original;  //initial place
//		ret = malloc(5 * sizeof(int));
//		original = ret;
//
//		if (ret == NULL)
//		{
//			//no memory
//			//error message
//		}
//		else
//		{
//			*ret = num1;
//			ret++;
//			*ret = num2;
//			ret++;
//			*ret = num3;
//			ret++;
//			*ret = num4;
//			ret++;
//			*ret = num5;
//			ret++;
//		}
//		return original;
//	}
//
//
//	int pointer()
//	{
//		int* FrPointer = malloc(4 * sizeof(int));
//		for (int i = 0; i < sizeof(int); i++)
//		{
//			*FrPointer = i + 1;
//			printf("%d\n%d\n", FrPointer, *FrPointer);
//			FrPointer++;
//		}
//		return 0;
//	}
//
//
//
//
//	/*int a = 90;
//	int c = 88;
//	int* b;
//
//	b = &a;
//	printf("%x\n", b);
//	printf("%d\n", *b);
//
//	a = 100;
//	printf("%x\n", b);
//	printf("%d\n", *b);
//
//	b = &c;
//
//	b = malloc(10*sizeof(int));
//	*b = 100;
//	int* original = b;
//	b++;
//	*b = 200;
//
//	char* charPtr;
//	charPtr = b;
//	charPtr++;
//	*charPtr = 'A';
//
//
//	free(original);
//	*/
//	