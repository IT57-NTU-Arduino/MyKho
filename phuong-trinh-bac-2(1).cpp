#include<stdio.h>
#include<math.h>
void ptb2(float A,float B,float C)
{
	float x1,x2,denta;
	denta=B*B-4*A*C;
	if(denta==0)
	{
    	x1=-B/(2*A);
		printf("phuong trinh co nghiem 1 la: ",x1 );
	}
	if(denta>0)
	{
			x1=(-B-sqrt(denta))/(2*A);
			printf("\nphuong trinh co nghiem 1 la: %f",x1 );
			x2=(-B+sqrt(denta))/(2*A);
			printf("\nphuong trinh co nghiem 2 la: %f",x2 );
	}
		else
			printf("phuong trinh vo nghiem");	
}
int main()
{
	float A,B,C;
	printf("nhap A la: ");
	scanf("%f",&A);
	printf("nhap B la: ");
	scanf("%f",&B);
	printf("nhap C la: ");
	scanf("%f",&C);
	ptb2(A,B,C);

}
