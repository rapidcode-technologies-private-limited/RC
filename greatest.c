#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number\n");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b && a>c)
	{
		printf("greatest no. %d\n", a);
	}
	else if(b>a && b>c)
	{
		printf("greatest no. %d\n", b);
	}
	else
	{
		printf("greatest no. %d\n", c);
	}
	return 0;
}

