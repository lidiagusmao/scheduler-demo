#include <stdio.h>

int main() {
  int a[5]; 
  char iteracoes[10000];
  int valor0 = 1, valor1 = 1, valor2 = 1, valor3 = 1, valor4 = 1; 
  int n, i = 0, posicao = 0, flag = 0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=0; i<n; i++) {

	if(i > 0){
		
		valor0 = i%(a[0]);
		valor1 = i%(a[1]);
		valor2 = i%(a[2]);
		valor3 = i%(a[3]);
		valor4 = i%(a[4]);

		if((((valor0!=a[0]-1) && (valor1!=a[1]-1)) && (((valor2!=a[2]-1) && (valor3!=a[3]-1)) && (valor4!=a[4]-1))) && (a[0]+a[1]+a[2]+a[3]+a[4] > 5)){
		iteracoes[posicao] = '-';
		posicao++;		
		}else{
			if(valor0 == a[0]-1 | a[0] == 1){
				iteracoes[posicao] = 0 + 48;
				posicao++;	
			}
			if(valor1 == a[1]-1 | a[1] == 1){
				iteracoes[posicao] = 1 + 48;
				posicao++;	
			}
			if(valor2 == a[2]-1 | a[2] == 1){
				iteracoes[posicao] = 2 + 48;
				posicao++;	
			}
			if(valor3 == a[3]-1 | a[3] == 1){
				iteracoes[posicao] = 3 + 48;
				posicao++;	
			}
			if(valor4 == a[4]-1 | a[4] == 1){
				iteracoes[posicao] = 4 + 48;
				posicao++;	
			}		
		}
	}else{
		valor0 = a[0];
		valor1 = a[1];
		valor2 = a[2];
		valor3 = a[3];
		valor4 = a[4];

		if(a[0] == 1){
			iteracoes[posicao] = 0 + 48;
			posicao++;
			flag = 1;	
		}
		if(a[1] == 1){
			iteracoes[posicao] = 1 + 48;
			posicao++;
			flag = 1;		
		}
		if(a[2] == 1){
			iteracoes[posicao] = 2 + 48;
			posicao++;	
			flag = 1;	
		}
		if(a[3] == 1){
			iteracoes[posicao] = 3 + 48;
			posicao++;	
			flag = 1;	
		}
		if(a[4] == 1){
			iteracoes[posicao] = 4 + 48;
			posicao++;	
			flag = 1;	
		}
		if(flag == 0){
			iteracoes[posicao] = '-';
			posicao++;		
		}
	}
	
	iteracoes[posicao] = '\n';
	posicao++;
  }

	for(i = 0; i < posicao; i++){
		printf("%c", iteracoes[i]);
}
  return 0;
}