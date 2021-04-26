#include<stdio.h>
int main()
{
	int i,j,k,samp=1,num;
	printf("Enter row Number: ");
	scanf("%d",&num);
	printf("\n");
	for (i=num; i>=1; i--){
		for (k=samp; k>=0; k--)
			printf(" ");
		for (j=i; j>=1; j--)
			printf("*");
		samp = samp + 1;
		printf("\n");
	}
}
