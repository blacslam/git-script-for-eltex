#include <stdio.h>
extern int exp3(int);
extern int exp4(int);

int main () {
	int n;
	printf("Input number\n");
	scanf("%d",&n);
	printf("%d raised to the power 3 is %d \n",n,exp3(n));
	printf("%d raised to the power 4 is %d \n",n,exp4(n));
	return 0;
}
