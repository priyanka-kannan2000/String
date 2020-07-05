#include<stdio.h>
#include<string.h>
main()
{
	char s[100],i,j;
	scanf("%[^\n]s",s);
	for(i=strlen(s)-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			s[i]='\0';
			printf("%s ",&(s[i])+1);
		}
	}
	printf("%s",s);
}
