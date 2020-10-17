#include<stdio.h>
void main()
{
    int k=7,n;
    double a=1.7,b=2.6,c=5.7;
    double x,y;
    n=a+(b+c)/2;
    x=a+(int) (b+c)/2;
    y=k%3;
    printf("n=%d,x=%f,y=%f\n",n,x,y);
}