#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\nEnter the age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n You are  Allowed for driving");

	}
	else
	{
		printf("\n You are not  Allowed for driving");
	}
	getch();
}