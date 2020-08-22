#include<stdio.h>
#include<conio.h>
int lcm(int,int);
int main()
{
	int a,b,result;
	printf("Enter thd first integer:");
	scanf("%d",&a);
	printf("Enter the second integer:");
	scanf("%d",&b);
	result=lcm(a,b);
	printf("The lcm of %d and %d is %d \n",a,b,result);
	return 0;
}
int lcm(int a,int b)
{
	static int common=1;
	if(common % a==0 && common % b==0)
	{
		return common;
	}
	common++;
	lcm(a,b);
	return common;
}
