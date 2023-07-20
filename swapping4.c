#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	printf("before swapping\n a is :%d\n b is :%d\n c is :%d",a,b,c);
//	a=b-c;
//	b=a+c;
//	c=a+b;
a=a+b+c;//a=60
b=a-b-c;//b=10
c=a-b-c;//c=20
a=a-b-c;//a=30
	printf("\nafter swapping\n a is :%d\n b is :%d\n c is :%d",a,b,c);
}
