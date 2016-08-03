#include "stdafx.h"

const int N=100;

int main()
{
	int mass[N];

	for (int i=0; i<N; i++)
	{
		mass[i]=i+1;
		if (mass[i]%15==0)
			printf("FizzBuzz");
		else
			if (mass[i]%3==0)
				printf("Fizz");
			else
				if (mass[i]%5==0)
					printf("Buzz");
				else
					printf("%d",mass[i]);
		printf(" ");
	}

	printf("\n");

	return 0;
}