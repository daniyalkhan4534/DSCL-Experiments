#include<stdio.h>

int countOnes(int n) {
	int count = 0;
	while (n!=0){
		count= n&1;
		n>>=1;
	}
	return count;
}

int main(){
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	printf("The number of ones in %d is %d\n"n,countOnes(n));
	return 0;
}
