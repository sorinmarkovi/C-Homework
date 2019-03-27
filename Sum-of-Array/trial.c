#include <stdio.h>
#include <stdlib.h>
int main(){
    	int num,counter,*ptr,sum=0;
    	printf("Enter number of elements: \n");
    	scanf("%d",&num);
    	ptr=(int*)malloc((num)*sizeof(int));  //memory allocated using malloc
        num+=1;
	if(ptr==NULL){
        	printf("Error! memory not allocated.");
        	exit(0);
    	}
 
   	 printf("Summing the array now...\n");
    	for(counter=0;counter<num;++counter){
        	sum+=(counter);
    	}	
 
    	printf("Sum=%d\n",sum);
    	free(ptr);
        system("pause");
    	return 0;
}