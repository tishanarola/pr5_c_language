#include<stdio.h>
void main(){
	int i;
	int j;
	int n;
	int m;
	int sum=0;
	int add=0;
	int a[3][3];
	printf("enter the elements: \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			
			}
	}
	printf("enter row number: ");
	scanf("%d",&n);
	printf("elements of row n: ");
	for(j=0;j<=2;j++){
		printf("%d",a[n][j]);
		sum=a[n][j];
	}
	printf("\nthe sum is:%d",sum);
	printf("\nenter column number: ");
	scanf("%d",&m);
	printf("\nelements of column n:");
	for(i=0;i<=2;i++){
		printf("%d",a[i][m]);
		add+=a[i][m];
	}
	printf("\nthe sum is: %d",add);
	
}
