#include<stdio.h>
int main()
{
	int base,power,result,i=1;
	printf("enter the number and the power to be found");
	scanf("%d%d",&base,&power);
	result=base;
	while(i<power)
	{
		result=result*base;
		i++;	
	}
	printf("the power is %d",result);
}