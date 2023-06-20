#include<stdio.h>
void main(){
	int n;
	int i;
	int a[i];
	printf("enter the array size:");
	scanf("%d",&n);
	
	printf("enter the elements of A: \n");
	for(i=0;i<n;i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("negative elements from array:");
	for(i=0;i<n;i++)
	if(a[i]<0){
		printf("a[%d]=%d\n",i,a[i]);
	}
	}

