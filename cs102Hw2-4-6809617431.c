#include <stdio.h>
int main() {
	
	int Binteger,Linteger ;
	
	printf("Please enter the beginning integer :");
	scanf("%d",&Binteger);
	
	printf("Please enter the last integer :");
	scanf("%d",&Linteger);
	
	printf("All the numbers that can be divided by 13 are : \n");
	
	
	int i ;
	
	for ( i =Binteger ; i <= Linteger; i++) {
		if (i %13==0) {
		printf("%d \n",i);
	    }
		
	}

	printf("Bye!!");
	
	
	return 0;
	
	
}
