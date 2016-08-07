#include <stdio.h>
#include <string.h>

struct simpleHash{
	char strings[5][5];
	float prices[5];
} hash = {.strings = {"1001", "1324", "6548", "0987", "7623"}, .prices = {5.43 , 6.45 , 2.37 , 5.32 , 6.45}}; 

int main(){
	float total;
	int quantidade;
	char codigo[5];
	while(1){
		printf("Escolha codigo do produto\n");
		scanf("%s", codigo);
		printf("Entre com a quantidade deste produto\n");
		scanf("%d", &quantidade);
		for (int i = 0; i <= 4; i++){
			if(strcmp(codigo, hash.strings[i]) == 0){
				printf("Hash table worked, codigo = %s and preco = %f, and quantidade = %d\n", hash.strings[i], hash.prices[i], quantidade);
				total  = total + hash.prices[i]*quantidade;
			}
		}
		printf("Total: %.2f\n", total);
	}	
	return 0;
}
