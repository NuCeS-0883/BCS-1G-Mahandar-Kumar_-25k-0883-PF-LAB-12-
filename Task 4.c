#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	printf("Enter size of Array: ");
	scanf("%d", &n);
	int *ptr = (int*)calloc(n,sizeof(int));
		if(ptr == NULL){
		printf("Memory Allocaion failed.\n");
		return 1;
	}
	for(i=0; i<n; i++) ptr[i] = i+1;
	printf("Values by Modifying Calloc:\n");
	for(i=0; i<n; i++) printf("ptr[%d] = %d\n",i,ptr[i]);
	printf("\n");
	free(ptr);
	ptr = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++) ptr[i] = i+2;
	printf("Values by reusing Memory via Malloc:\n");
	for(i=0;i<n; i++) printf("ptr[%d] = %d\n",i,ptr[i]);
	free(ptr);
	return 0;
}
