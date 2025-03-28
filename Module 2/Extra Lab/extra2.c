#include<stdio.h>
main(){
	int num;
	
	printf("\n enter the value ");
	scanf("\n %d",&num);
	if(num%2==0){
		printf("\n Num is even");
	}else{
		printf("\n Num is odd");
	}
	
	//whether the number is positive, negative , or zero.//
	
	if(num>0){
		printf("\n Num is Positive");
	}else if(num<0){
		printf("\n Num is negative");
	}else{
		printf("\n Num is zero");
	}
	
	//whether the number is a multiple of both 3 ands 5.//
	
	if(num%3==0 && num%5==0){
		printf("\n Num  is multiple of both 3 and 5 ");
	}else{
		printf("\n Num is not multiple of both 3 and 5");
	}
}
