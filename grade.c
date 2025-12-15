#include<stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	if (score >= 0 && score <= 100){
		if (score >= 68){
		if (score >= 85){
			printf("A\n");
		}
		else if (score >= 75){
			printf("B\n");
		}
		else if (score >=68){
			int temp = 75 - score;
			printf("C to B=%d",temp);
		}
	}
	else{
		if(score >= 55){
			printf("D\n");
		}
		else{
			printf("F\n");
		}
	}
	}
	else{
		printf("error\n");
	}
}
