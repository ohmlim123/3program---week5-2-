#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	for (int i = 1;i <= N;i++)
	{
		

		for (int a = N - 1;a >= i;a--)
		{
			printf(" ");
		}
		for (int b = 1;b <= i;b++)
		{
			printf("*");
		}
		for (int c = N - 1;c >= i;c--)
		{
			printf("*");
		}
		for (int d = 1;d <= i-1;d++)
		{
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}