#include<stdio.h>
int main(){
	char str[10]="narsh"; 
	int count=0;

    for(int i = 0;  str[i]!='\0'    ;i++){

	  count = count +1;
	}
	printf("%d",count);


}