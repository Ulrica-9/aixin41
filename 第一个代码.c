#include<stdio.h>
#define PI 3.1415
#include<math.h>
int main()
{
	double a,b,c,disc,x1,x2,p,q,z;
	scanf ("a=%lf,b=%lf,c=%lf",&a,&b,&c);
	disc=b*b-4.0*a*c;
	if(disc<0)
		printf("此方程无解请重新输入计算");
	else
		p=-b/(2.0*a);
	q=sqrt(disc)/(2.0*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%.2lf\n;x2=%.2lf",x1,x2);

	return 0;
}









//#define PI 3.145
//#include <stdio.h>
//int main()
//{
	//int m,n,c;
//	unsigned u;
//	m=-2;
//	n=1;
	//u=2;
//	c=m*n*u*PI;
	//printf ("%d",c);
	//return 0;
//}














//#include<stdio.h>

//int main()
//{
//	printf("****************************************\nVery good!\n****************************************\n");
	//	return 0;



//}







//int ma
	



//int a,b,sum;
//	a=0;
	//b=0;
    //sum=0;
//	scanf("%d%d",&a,&b);
	//sum=a+b;
	//printf("sum is %d\n",sum);

	//int age=12;
 
	  //char name=(char)'fD';
	//printf("%c\n",name);

	//printf  ("hehe\n");
//

