#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

int main(){
	char input_number[100];
	int numbers[100];
	char *delim = ",";
	int split_index = 0;
	int n=1;
	int number_length=0;
	printf("�Ш̧ǿ�J�Ʀr("","")�����j\n");
	scanf("%s",input_number);
	char *split = strtok(input_number,delim);
	
	
	while(split!= NULL){
		numbers[split_index] = atoi(split);
	    split = strtok (NULL, delim);
	    split_index++; 
	}
	number_length = split_index;
	printf("%d�ӼƦr\n",number_length);
	
	while(true){
		if(pow(n,2) >= number_length){
			printf("�п�J�ӼƬ�n^2+1�����ļƧ�\n");
			exit(1);
			break;
		}
		else if(pow(n,2)+1 == number_length){
			printf("n��: %d, n+1��: %d\n",n,n+1);
			break;
		}else{
			n++;
		}
	}
	
	int compare_num = numbers[0];
	int num_number = n+1;
	int inc_index = 0;
	int dec_index = 0;
	printf("���W:\n");
	for(int i=0;i<number_length;i++){
		if(inc_index>=num_number){
			break;
		}
		if(numbers[i]>=compare_num){
			compare_num = numbers[i];
			printf("%d ", numbers[i]);
			inc_index++;
		}
	}
	
	printf("\n����:\n");
	for(int i=0;i<number_length;i++){
		if(dec_index>=num_number){
			break;
		}
		if(numbers[i]<=compare_num){
			compare_num = numbers[i];
			printf("%d ", numbers[i]);
			dec_index++;
		}
	}
	
	

	
	


}
