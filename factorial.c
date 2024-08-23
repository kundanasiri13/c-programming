#include<stdio.h>
int main()
{
	int num,factorial=1,i=1;
	printf("enter number");
	scanf("%d",&num);
	while(i<=num)
	{
		factorial=factorial*i;
		i++;
	}
	printf("the factorial of %d is %d",num,factorial);
}