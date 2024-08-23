#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num<0)
	{
		printf("the number is negative");
	}
	else if(num==0)
	{
		printf("the number entered is 0");
	}
	else
	{
		printf("the number entered is positive");
	}
}