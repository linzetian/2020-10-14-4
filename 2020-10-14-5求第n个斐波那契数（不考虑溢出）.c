//求第n个斐波那契数（不考虑溢出）
//1 1 2 3 5 8 13 21 34.。。。前两数之和等于后面的数（斐波那契数）
//斐波那契数公式：n<=2,Fib=1.n>2,Fib=Fib(n-1)+Fib(n-2)
#include<stdio.h>
int Fib(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(x - 1) + Fib(x - 2);
	}
}
int main()
{
	int n = 0;
	printf("请输入一个数：");
	scanf("%d",&n);
	int ret = Fib(n);
	printf("ret=%d\n",ret);
	return 0;
}