#include<stdio.h>
int main()
{
	int x, y, z;
	scanf_s("%d,%d,%d", &x, &y, &z);
	if (x < y)
	{
		int max = x;
		x = y;
		y = max;
	}
	if (x < z)
	{
		int max = x;
		x = z;
		z = max;
	}
	if (y < z)
	{
		int max = y;
		y = z;
		z = max;
	}
	printf("%d,%d,%d",x,y,z);
	return 0;
}