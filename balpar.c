#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],i,j,c=0,c1=0;
	scanf("%s",a);
	int bal=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='(')
		bal=bal+1;
		else if(a[i]==')')
		{
			bal=bal-1;
			if(bal<0)
			{
				printf("unbalanced");
				return 0;
			}
		}
		
	}
	if(bal==0)
		printf("Balanced");
	else
		printf("Unbalanced");
	return 0;
}
