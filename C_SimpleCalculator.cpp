/*Calculator*/

#include<stdio.h>
main()
{
	int a , b , Sum , Div , Mul , Sub ;
	
	printf("Enter Value Of A:- ");
	scanf("%d",&a);
	
	printf("Enter Value Of B:- ");
	scanf("%d",&b);
	
	Sum=a+b;
	Div=a/b;
	Mul=a*b;
	Sub=a-b;
	
	printf("Sum Of %d And %d = %d ",a,b,Sum);
	
	printf("\n");
	
	printf("Division Of %d And %d = %d ",a,b,Div);
	
	printf("\n");
	
	printf("Multiplication Of %d And % d = %d",a,b,Mul);
	
	printf("\n");
	
	printf("Substraction Of %d And %d = %d ",a,b,Sub);

    printf("\n");

}
