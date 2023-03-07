#include <stdio.h>
int factorial(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return factorial(n - 1) + factorial(n - 2);
	}
}
int main()
{
	int n = 0;
	int result;
	scanf("%d", &n);
	result = factorial(n);
	printf("第%d个斐波那契数为%d。",n,result);
	return 0;
}