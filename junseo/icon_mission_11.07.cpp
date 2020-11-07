#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}

	return 0;
}

int solve2()
{
	char i;
	float j;

	scanf("%c", &i);
	scanf("%f", &j);

	printf("%p\n", &i);
	printf("%p\n", &j);

	return 0;
}

int solve3()
{
	int num1 = 10, num2 = 20;
	int* num1Ptr;
	int* num2Ptr;

	num1Ptr = &num1;
	num2Ptr = &num2;

	*num1Ptr = num1 - 1;
	*num2Ptr = num2 - 1;

	printf("%d %d\n", *num1Ptr , *num2Ptr );

	num2Ptr = &num1;
	num1Ptr = &num2;

	printf("%d %d", *num1Ptr, *num2Ptr );

	return 0;
}

