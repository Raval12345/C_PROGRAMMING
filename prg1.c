#include<stdio.h>
main()
{
	int Rollno, total;
	int s1, s2, s3, s4, s5;
	float per;
	
	
	printf("\n\n\t Input Roll No : ");
	scanf("%d",&Rollno);
	printf("\n\n\t Input S1 : ");
	scanf("%d",&s1);
	printf("\n\n\t Input S2 : ");
	scanf("%d",&s2);
	printf("\n\n\t Input S3 : ");
	scanf("%d",&s3);
	printf("\n\n\t Input S4 : ");
	scanf("%d",&s4);
	printf("\n\n\t Input S5 : ");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n\t .................................");
	printf("\n\n\t Roll no : %d",Rollno);
	printf("\n\n\t You got the percentage : %.2f",per);
	
	if(s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
	{
		if(per>=70)
			printf("\n\n\t Result : A+");
		
		else if(per>=60)
			printf("\n\n\t Result  : A");
	
		else if(per>=50)
			printf("\n\n\t Result  : B+");
		
		else if(per>=40)
			printf("\n\n\t Result  : B");
	}
		
	else 
		printf("\n\n\t Result  : Fail");
		
	
	 
}
