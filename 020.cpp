#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"htc","u12+","2015/4/23",15000,"kenny","0905385612",
	                     "asus","zef6","2019/6/12",18999,"susan","0905362125",
						 "asus","zef4","2017/4/29",10210,"jamas","0125362125",
						 "asus","zef6","2019/6/12",18999,"brock","0806362125",
						 "asus","zef6","2019/6/12",18999,"john","0600362155"};
	for(i=0;i<5;i++){
		printf("%s�����----------\n",phone[i].use_name);
		printf("������~�P:");
		puts(phone[i].phone_brand);
		printf("���������:");
		puts(phone[i].phone_model);
		printf("������X�t���:");
		puts(phone[i].phone_yearofmanufacture);
		printf("���������:");
		printf("%d\n",phone[i].phone_price);
		printf("�ϥΪ�:");
		puts(phone[i].use_name);
		printf("������X:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
