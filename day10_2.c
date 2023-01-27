#include<stdio.h>

main (){
	int a,b,c;
	
	printf("enter A :");
	scanf("%d",&a);
	
	printf("enter B :");
	scanf("%d",&b);
	
	printf("enter C :");
	scanf("%d",&c);
	
	a<b ?
		b<c ? 
			printf("C is MAX")  
			: printf("B is Max")
		
		: 
		a<c ?
			printf("C is Max")
			: printf("A is Max");
			
	
	
}
