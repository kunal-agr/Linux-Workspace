#include<stdio.h>
int main()
{
	//making boxes to store a integer variable
	int a,b;

	printf("Enter first number:");// Printing message for user so he can enter a number
	scanf("%d",&a);				  // this function is used to read the input entered by user and store it in interge box a
	
	printf("\nEnter second number:");
	scanf("%d",&b);
	
	int add = a + b;	// creating another box c to store the addition of two integers
	int sub = a - b;
	int mul = a * b;
	int div = a / b;

	printf("\nTotal is :%d",add);	// here i am just printing the answer, we can print the value of a variable using printf
	printf("\nTotal is :%d",sub);
	printf("\nTotal is :%d",mul);
	printf("\nTotal is :%d",div);
	return 0;
}
