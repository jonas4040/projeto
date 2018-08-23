#include<stdio.h>
int fatorial(int);
int main(){
	int num,f;
	printf("Digite o numero para calcular o fatorial: ");
	scanf("%d",&num);
	f=fatorial(num);
	printf("\n %d! = %d ",num,f);
	return 0;
}

int fatorial(int n){
	if(n==0)
		return 1;
	else{
		int i,f=1;
		for(i=n;i>0;i--){
			f*=i;
			//printf("\n %d",f);
		}
		return f;
	}
}


