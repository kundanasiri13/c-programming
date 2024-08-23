#include<stdio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	if((num%2)==0)
	{
		printf("the number entered is even");
	}
	else
	printf("the number is odd");
}