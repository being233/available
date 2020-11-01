#include<stdio.h>
void main()
{
	int x,y;
	printf("Input x:");
	scanf("%d",&x);
	if(x<0)
		y=-1;
	else
		if(x==0) y=0;
		else y=1;
	printf("x=%d,y=%d\n",x,y);
}
