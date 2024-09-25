#include<stdio.h>
#include<string.h>
int main(){
	char sub[100][10];
	char *p="END",*q="back";
	int Num[5],Price[5];
	int tub[100],wrong=0,price[100],num[100],tub2[100],num2[100],h=0,j=1,o=0,n=0;int op=1;
	for(int i=1;i<=5;i++){
		Num[i]=0;
	}
	printf("Enter 'END' to end your operation,or enter 'back' to undo the action(up to three times)\n");
	printf("Please enter the name of item,the channel,the price and the quantity\n");
	while(h==0){
		wrong=0;
		scanf("%s",&sub[j]);
		if(strcmp(sub[j],p)==0){
			break;
		}
		if(strcmp(sub[j],q)==0){
			if(wrong==3){
				printf("Undo operation has been completed three times\n");
				break;
			}
		   	Num[tub[j-1]]-=num[j-1];
		   	j--;
		   	wrong++;
		    continue;
		}else{
			wrong=0;
		}
	    scanf("%d %d %d",&tub[j],&price[j],&num[j]);
        Num[tub[j]]+=num[j];
        Price[tub[j]]=price[j];
	    j++;
	}
	while(op!=0){
		int k=1;
		o=0;
		while(h==0){
			printf("Please enter the name of item,the channel and the quantity\n");
		    scanf("%s",&sub[k]);
		    if(strcmp(sub[k],p)==0){
			    break;
		    }
		    if(strcmp(sub[k],q)==0){
			    if(wrong==3){
				    printf("Undo operation has been completed three times\n");
				    break;
			    }
		   	    Num[tub2[k-1]]+=num2[k-1];
	            o-=num2[k-1]*Price[tub2[k-1]];
			    k--;
		   	    wrong++;
		        continue;
		    }else{
			    wrong=0;
		    }
	        scanf("%d %d",&tub2[k],&num2[k]);
	        while(num2[k]>Num[tub2[k]]){
			    printf("Out of stock,please re-enter\n");
			    scanf("%s",&sub[k]);scanf("%d %d",&tub2[k],&num2[k]);
		    }
		    Num[tub2[k]]-=num2[k];
	        o+=num2[k]*Price[tub2[k]];
	        k++;op=0;
	        for(int i=1;i<=5;i++){
	    	    op+=Num[i];
		    }
		    if(op==0)break;
	    }
	    printf("Please insert coins\n");
	    int tt=0,q;
	    while(tt<o){
		    scanf("%d",&q);
		    tt+=q;
	    }
	    printf("Successful purchase\n");
	    printf("%d",tt-o);printf(" yuan for change");
	    printf("\n");
	}
	return 0;
}