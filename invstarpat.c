#include<stdio.h>
main()
{
	int n,i,j,k,c=1;
	scanf("%d",&n);
	for(i=n;i>0;i-=2)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
		
		for(k=1;k<=c;k++)
		{
			printf(" ");
		}
		c++;
	

	}
}
