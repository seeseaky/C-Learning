#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i == 9)
		{
			count++;
		}
		else if (i % 10 == 9)
		{
			count++;
		}
		else if (i / 10 == 9)
		{
			count++;
		}

	}
	printf("%d", count);

	return 0;
}