#include <stdio.h>
int main()
{
	int i,j,num;
	printf("Enter number of arms: ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			printf("%d ",(i%2));
		}
		printf("\n");
	}
}
