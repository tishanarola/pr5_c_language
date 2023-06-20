#include<stdio.h>
void main(){
	int i;
	int j;
	int a[3][3];
	int large;
	printf("enter the elements: \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			large=a[i][j];
		}
		
	}
	printf("the largest elements of array: \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(large>a[i][j]){
				
			}
		}
	}
	printf("%d",large);
}
