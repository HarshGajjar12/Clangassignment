#include<stdio.h>
main(){
	int a,b,sum;
	float ans;
	
	printf("\n enter the value a and b :");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("\n addition= %d",sum);
	sum=a-b;
	printf("\n Subtraction =%d",sum);
	sum=a*b;
	printf("\n multiplication =%d",sum);
	sum=a/b;
	printf("\n division =%f",ans);
	sum=a%b;
	printf("\n module =%d",sum);
}
