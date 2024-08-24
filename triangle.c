#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("enter the sides of the triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1==side2&&side2==side3)
	{
		printf("the side will form a equilateral triangle");
	}
	else if(side1==side2||side1==side3||side2==side3)
	{
		printf("the sides will form a isoceles triangle");
	}
	else if(side1!=side2&&side1!=side3&&side2!=side3)
	{
		printf("the sides are not equal and forms a scalene triangle");
	}
	else
	{
		printf("does not form a triangle");
	}
}