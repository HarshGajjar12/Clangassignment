#include<stdio.h>

//The largest number //

main(){
	int num1,num2,num3;
	printf("\n enter the num ");
	scanf("\n %d %d %d",&num1,&num2,&num3);
	
	if(num1>=num2 && num1>=num3){
		printf("\n Largest num",num1);
	}else if(num2>=num1 && num2>=num3){
		printf("\n Largest num",num2);
	}else{
		printf("\n Largest num",num3);
	}
	//The Smallest number //
	if(num1<=num2 && num1<=num3){
		printf("\n Smallest num",num1);
	}else if(num2<=num1 && num2<=num3){
		printf("\n Smallest num",num2);
	}else{
		printf("\n Smallest num",num3);
	}
}
