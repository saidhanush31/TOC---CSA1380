#include<stdio.h>
#include<string.h>
#define max 20
int main()
{
	int table[4][2]={{1,3},{1,2},{1,2},{3,3}};
	int final=2,i,l;
	int present=0;
	int next=0;
	int invalid=0;
	char input[max];
	printf("enter a string:");
	scanf("%s",input);
	l=strlen(input);
	for(i=0;i<l;i++)
	{
		if(input[i]=='b')
		next=table[present][0];
		else if(input[i]=='a')
		next=table[present][1];
		else
		invalid=l;
		present=next;
	}
	if(invalid==1)
	{
		
		printf("invalid input!");
	}
	else if(present==final)
	printf("the given string is accepted\n");
	else
	printf("the given string doesnot accepted\n");
	
	}
