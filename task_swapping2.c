//programe to swap two values with third variable
#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	printf("befor swapping\na is: %d\nb is: %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swappng\na is:%d\nb is:%d",a,b);
	return 0;
}
