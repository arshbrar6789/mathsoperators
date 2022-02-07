#include<stdio.h>

int main()
{
	int a, b = 10;
	printf("please enter the value of integer");
	scanf_s("%d", &a); // some how scanf is not working,but i can use scanf_s
	printf("Sum of %d + %d is:%d", a, b, a + b);
	return(0);


}