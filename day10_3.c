#include<stdio.h>

main (){
	int a,b,c,d;
	
	printf("enter A :");
	scanf("%d",&a);
	
	printf("enter B :");
	scanf("%d",&b);
	
	printf("enter C :");
	scanf("%d",&c);

	printf("enter D :");
	scanf("%d",&d);
	
	a<b ?
		b<c ? 
			c<d ? printf("D is Max")
				: printf("C is Max")
					
			
			: 
			b<d ?printf("D is Max")
				:printf("B is Max")
				
		: 
		a<c ?
			c<d ? printf("D is Max")
				: printf("C is Max")
			:
			a<d	?printf("D is Max")
				:printf("A is Max");
			
			
	
	
}
