#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if (marks>=85&&marks<=100)
	{
		printf("grade A");
	}
	if (marks>=70 && marks<=84)
	{
		printf("grade B");
	}
	if (marks>=55 && marks<=69)
	{
		printf("grade C");
	}
	if (marks>=40 && marks<=54)
	{
		printf("grade D");
	}
	if (marks <= 40)
	{
		printf("FAIL");
	}
}
