#include<stdio.h>
#include<string.h>

int main(){
	
	char exp[100],str[100],temp;
	printf("Enter Expresson :");
	scanf("%s",&exp);
	int i, top=-1;
	int n=strlen(exp);
	for(i=0;i<n;i++)
	{
		
		if((exp[i]==')' || exp[i]=='}' || exp[i]==']') && top==-1)
		{
			break;
			
		}
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
		{
			top= top+1;
			str[top]=exp[i];
		}
		else{
			temp =str[top];
			top--;
			if((temp=='(' && exp[i]==')') || (temp=='{' && exp[i]=='}') || (temp=='[' && exp[i]==']'))
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	if(i==n && top==-1)
	{
		printf("Balanced parentheses !!");
	}
	else
	{
		printf("not Balanced parentheses !!");
	}
	
}
