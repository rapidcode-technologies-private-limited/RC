#include<stdio.h>
int main()
{
	int n1,n2,lcm,gcd;
	printf("enter the numbers\n");
	scanf("%d%d", &n1,&n2);
	
	gcd=n1;
	lcm=(n1*n2)/gcd;

	printf("GCD %d and %d=%d\n", n1,n2,gcd);
	printf("LCM %d and %d=%d\n", n1,n2,lcm);
	return 0;
}
