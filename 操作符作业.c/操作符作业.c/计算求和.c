#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
	//例如：2 + 22 + 222 + 2222 + 22222

	int Sn = 0;
	int a = 0;
	int tmp = 0;
	int sum = 0;
	int n = 5;
	scanf("%d", &a);
	for (int i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d", sum);
	return 0;
}