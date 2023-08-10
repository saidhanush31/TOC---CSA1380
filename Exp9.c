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
	printf("Enter a string:");
	scanf("%s",input);
	l=strlen(input);
	for(i=0;i<l;i++)
	{
		if(input[i]=='0')
		next=table[present][0];
		else if(input[i]=='1')
		next=table[present][1];
		else
		invalid=l;
		present=next;
	}
	if(invalid==l)
	{
		printf("Invalid input!");
	}
	else if(present==final)
	printf("The given string is accepted for given condition.\n");
	else
	printf("The given is not accepted for given condition.\n");
}
