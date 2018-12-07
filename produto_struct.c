#include <stdio.h>
#define max_vet 2

typedef struct {
    char nome[40];
    int quant;
    float preco;
    float fat;
}reg_produto;  

reg_produto produto[max_vet];

int main(void) {
    int i, quantAM = 0;
    float somaFat=0, media;
    
    for(i=0;i<max_vet;i++){
        printf("\nDigite o nome do produto %d:\n", i+1);
        fflush(stdin);
        scanf("%s", &produto[i].nome);

        printf("\nDigite a quantidade do produto %d:\n", i+1);
        scanf("%d", &produto[i].quant);

        printf("\nDigite o preço do produto %d:\n", i+1);
        scanf("%f", &produto[i].preco);

        produto[i].fat =  produto[i].preco * produto[i].quant;
        printf("\nFaturamento do produto R$ %.2f\n", produto[i].fat);
      
        somaFat = somaFat + produto[i].fat;

    }

    media = somaFat / max_vet;

    for(i=0;i<max_vet;i++){

      if (produto[i].fat<media){
          quantAM++;
      }
    }  
    printf("________________________________________");
    printf("\n\nFaturamento Total R$: %.2f\n", somaFat);
    printf("Média dos faturamentos R$: %.2f\n", media);
    printf("Quantidade abaixo da media: %d\n", quantAM);
    printf("________________________________________");


  return 0;
}