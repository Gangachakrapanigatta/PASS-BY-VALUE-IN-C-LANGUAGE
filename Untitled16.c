// pass by value
#include<stdio.h>
main()
{
	
	int a=4,b=8;
	printf("a=%dand b=%d",a,b);
	swap1(&a,&b);
	printf("\nafter swap in main  a=%dand b=%d",a,b);	
}

void swap1(int *x,int *y)
{
	
	int  z;
	z=*x;
	*x=*y;
	*y=z;
	printf("\na=%d and b=%d",*x,*y);
	
}


