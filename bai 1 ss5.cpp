#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c;
	double dealta,x1,x2;
	printf ("nhap 3 so a b c:");
	scanf ("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if (delta<0){
		printf("phuong trinh vo nghiem")
	}else if(delta=0){
		x1=x2-b/(2*a);
		printf("nghiem cua phuong trinh la: %lf ",x1);
	}else{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
	}
}
