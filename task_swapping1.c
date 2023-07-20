//programe to swap two values without taking third variable
#include<stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("before swapping a is: %d and b is: %d ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping a is: %d and b is: %d",a,b);
	return 0;
}
