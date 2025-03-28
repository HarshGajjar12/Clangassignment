#include<stdio.h>
main(){
	int num,sum=0,reverse=0,rem;
	
	printf("\n Enter the num :");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;
		sum+=rem;
		reverse=reverse*10+rem;
		num/=10;
	}
	printf("\n Sum of digits :%d",sum);
	printf("\n Reverse Num :%d",reverse);
}
