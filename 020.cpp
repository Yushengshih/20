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
		printf("%s的資料----------\n",phone[i].use_name);
		printf("手機的品牌:");
		puts(phone[i].phone_brand);
		printf("手機的型號:");
		puts(phone[i].phone_model);
		printf("手機的出廠日期:");
		puts(phone[i].phone_yearofmanufacture);
		printf("手機的價格:");
		printf("%d\n",phone[i].phone_price);
		printf("使用者:");
		puts(phone[i].use_name);
		printf("手機號碼:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
