/*
struct [nome] {campos} [variaveis];
*/

#include<stdio.h>
struct  aluno{
	int ra;
	float nota;
};
typedef struct aluno dado_aluno;
int main(){
	int n,i;
	
	dado_aluno turma[100];
	printf("Digite a quantidade: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Digite o RA: ");
		scanf("%d",&turma[i].ra);
		printf("Digite a nota: ");
		scanf("%f",&turma[i].nota);
	}
	float m=0;
	for(i=0;i<n;i++){
		m+=turma[i].nota;
		if(turma[i].nota>m)
			printf("%d",turma[i].ra);
	}
	
	
	return 0;
}

