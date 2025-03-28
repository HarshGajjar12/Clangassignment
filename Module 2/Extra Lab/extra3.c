#include<stdio.h>
main(){
	
	int mark;
	
	printf("\n enter mark ");
	scanf("%d",&mark);
	
	if(mark>90){
		printf("\n Grade A");
	}
	else if(mark>75 && mark<=90){
		printf("\n Grade B");
	}else if(mark>50 && mark<=75){
		printf("\n Grade C");
	}else{
		printf("\n Grade D");
	}
	
	int graderange;
	if(mark>90){
		graderange=1;
	}else if(mark>75 && mark<=90){
		graderange=2;
	}else if(mark>50 && mark<=75){
		graderange=3;
	}else{
		graderange=4;
	}
	switch(graderange){
		case 1:
			printf("\n Grade A");
			break;
		case 2:
			printf("\n Grade B");
			break;
		case 3:
			printf("\n Grade C");
			break;
		case 4:
			printf("\n Grade D");
			break;
			
		default :
			printf("\n Enter invalid mark");
	}
}
