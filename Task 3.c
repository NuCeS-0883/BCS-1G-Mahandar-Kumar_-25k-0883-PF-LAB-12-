#include<stdio.h>
#include<stdlib.h>
struct Student{
	char Name[50];
	float marks;
};
int main(){
	int n,i;
	printf("Enter number of Students: ");
	scanf("%d", &n);
	struct Student Data;
	struct Student *ptr = (struct Student*)malloc(n*sizeof(struct Student));
	if(ptr == NULL){
		printf("Memory Allocaion failed.\n");
		return 1;
	}
	getchar();
	for(i=0; i<n; i++){
		printf("Enter Name of Student %d: ",i+1);
		fgets(ptr[i].Name,50,stdin);
		ptr[i].Name[strcspn(ptr[i].Name, "\n")] = '\0';
		printf("Enter marks of Student %d: ",i+1);
		scanf("%f", &ptr[i].marks);
		
	getchar();
	}
	printf("Studnets with  marks > 75 : \n");
	for(i=0; i<n; i++){
		if(ptr[i].marks > 75)
				 printf("Name %s\tMarks %.2f\n",ptr[i].Name,ptr[i].marks);
	}
	free(ptr);
	return 0;
}
