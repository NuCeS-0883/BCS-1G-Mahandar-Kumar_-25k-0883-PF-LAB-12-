#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str1[50];
	char str2[50];
	int i=0,j=0;
	printf("Enter first string: ");
	fgets(str1,50,stdin);
	printf("Enter second string: ");
	fgets(str2,50,stdin);
	str1[strcspn(str1,"\n")]='\0';
	str2[strcspn(str2,"\n")]='\0';
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len = len1+len2+1;
	char* ptr = (char*)malloc(len*sizeof(char));
	while(str1[i] != '\0') {
	ptr[i] = str1[i];
	i++;
}
ptr[i]= ' ';
i++;
	while(str2[j] != '\0'){
		ptr[i] = str2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	printf("Concatenated String: %s", ptr);
	free(ptr);
	return 0;
}
