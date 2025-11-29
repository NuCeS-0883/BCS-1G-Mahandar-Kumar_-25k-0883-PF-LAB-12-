#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int* ptr= (int*)malloc(n*sizeof(int));
	if(ptr == NULL){
		printf("Memory Allocaion failed.\n");
		return 1;
	}
	for(i=0; i<n; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &ptr[i]);
	}
	for(i=0; i<n; i++) printf("ptr[%d] = %d\n", i, ptr[i]);
	free(ptr);
	return 0;
}
