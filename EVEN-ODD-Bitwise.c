#include<stdio.h>
int main()
{
	int n;
	printf("enter the number n");
	scanf("%d", &n);
	if((n&1)==0)
{ printf("Entered number is even");
}
else{
	printf("Entered number is odd");
}
return 0;
}
