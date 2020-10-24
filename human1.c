#include<stdio.h>
#include<math.h>
void main1()
{
	unsigned a,b,c,d;
	float ave;
	printf("Enter values for a and B, separated by commas: \n");
	scanf("%u,%u",&a,&b);
	c=a/b;
	d=a%b;
	ave=(a+b)/2.0;
	printf("Quotient of two numbers: %u,remainder: %u,average value: %.2f\n",c,d,ave);
}