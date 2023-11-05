/*Find The Area Of Circle*/

#include<stdio.h>
main()
{
	float r ;
	float Pi=3.14, Area ;  /* Float Use For Decimal Value */
	
	printf("Enter Radius Of Circle :- ");
	scanf("%f",&r);       /* %f use Store Float Value */
	
	Area=Pi*(r*r);
	
	printf("Area Of Circle Is :- %f ",Area);
	
	
}
