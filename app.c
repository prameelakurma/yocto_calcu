#include<stdio.h>
#include<stdlib.h>
#include"headers.h"
void main(int argc ,char *argv[])
{
	int a,b;
	printf("enter values of a and b\n");
	scanf("%d %d",&a,&b);

        

	add(a,b);
	sub(a,b);
	mul(a,b);
	divi(a,b);
	mod(a,b);
}

