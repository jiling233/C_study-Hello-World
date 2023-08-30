#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int main()
{
	printf("Hello world!\n");
	printf("下面进行一个加法的运算\n");
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("请输入一个数字:");
	scanf("%d", &a);
	printf("请输入另一个数字:");
	scanf("%d", &b);
	sum = a + b;
	printf("这两个数字的和是：%d", sum);
	return 0;
} 
//这是我的第一次尝试