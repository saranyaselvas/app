#include<stdio.h>
int s=0;
int reverse(int n);
void main()
{
	int n,a,c,r=0;
	printf("Enter the Number\n");
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		c=a%10;
		r=(r*10)+c;
		a=a/10;
	}
	printf("The Reverse number is %d\n",r);
	reverse(n);
}
int reverse(int n)
{
	int a,c;
	a=n;
	if(a>0)
	{
		c=a%10;
		s=(s*10)+c;
		reverse(a/10);
	}
	else
	{
		printf("The Reverse number using Recursion is %d\n",s);
	}
}
