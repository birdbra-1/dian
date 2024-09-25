#include<stdio.h>

int main(){
	char sub[2];
	int tub,price,num,tub2,num2,h=0;
	printf("Please enter the name of item,the channel,the price and the quantity\n");
	scanf("%s",&sub);
	scanf("%d %d %d",&tub,&price,&num);
	while(h<num){
		printf("Please enter the name of item,the channel and the quantity\n");
		scanf("%s",&sub);scanf("%d %d",&tub2,&num2);
		while(tub2!=tub){
			printf("Wrong tub,please re-enter\n");
			scanf("%s",&sub);scanf("%d %d",&tub2,&num2);
		}
		while(num2+h>num){
			printf("Out of stock,please re-enter\n");
			scanf("%s",&sub);scanf("%d %d",&tub2,&num2);
		}
		int sum=0;
		h+=num2;
		printf("Please insert coins\n");
	    while(sum<=price*num2){
		   int i=0;
		   scanf("%d",&i);
		   sum+=i;
	    }
	printf("Successful purchase\n");
	printf("%d",sum-price*num2);printf(" yuan for change");
	printf("\n");
	}
	return 0;
}