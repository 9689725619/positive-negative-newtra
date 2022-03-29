#include<stdio.h>
int main()
{
	int n;
	
	printf("\n Enter any num:");
	scanf("%d",&n);
	if(n>0)
	printf("\n %d positive",n);
	if(n<0)
	printf("\n %d negative",n);
	if(n==0)
	printf("\n %d is zero",n);
	
	return 0;
}
