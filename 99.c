#include<stdio.h>
int main()
{
	int x, y;
	int result;
	printf("\n");
	for (x = 1; x < 10; x++)
	{
		for (y = 1; y <= x; y++)
		{
			result = x * y;
			printf("%d * %d=%-5d", x, y, result);
		}
		printf("\n");
	}
	
}