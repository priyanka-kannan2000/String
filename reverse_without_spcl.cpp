#include<stdio.h>
#include<string.h>
main()
{
	char str[100],str1[100],str2[100];
	int i,j=0,k=0,len;
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			str1[j]=str[i];
			j++;
		}
	}
	for(i=j-1;i>=0;i--)
	{
		str2[k]=str1[i];
		k++;
	}
	i=0;
	int len1=0;
	while(str2[i]!='\0')
	{
		i++;
		len1++;
	}
	k=0;
	for(i=0;i<len;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			str[i]=str2[k];
			k++;
		}
		else
		{
			str[i]=str[i];
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}
	
		
}
