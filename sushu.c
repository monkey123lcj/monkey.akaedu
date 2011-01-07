III
#include <stdio.h>
#include <math.h>
 void main(void)
{
	int i,j;
	float k;
	int m=0;
	for(i=101;i<200;i++)
	{
	k=sqrt(i);
	for(j=2;j<k;j++)
	{
		 if(i%j==0)
		m=1;
		else
		m=0;
	}
	if(m==1)
	printf("the num is %5d",i);
	}


}

