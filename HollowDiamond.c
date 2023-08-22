#include<stdio.h>
void main()
{
	int n,i,j,s;	
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{	                			
			printf("*");
		}
		for(s=1;s<=(i*2-2);s++)
		{                                 
	        	printf(" ");
		}
		for(j=i;j<=n;j++)
		{
	        	printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{                          
   	        	printf("*");
		}
		for(s=1;s<=(2*(n-i));s++)
		{ printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		       printf("*");
		}
		printf("\n");
	}
}