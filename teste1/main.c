#include <stdio.h>
#include <stdlib.h>
int main(void){
while(1){
   int x;
   int y;
   float op;
   int resultado;

  printf("\n\n\t Digite a operacao: \n\t 1 - SOMA\n\t 2 - SUBTRACAO\n\t 3 - MULTIPLICACAO\n\t 4 - DIVISAO \n");
  scanf("%f", &op);
  printf("Digite o primeiro numero: \n");
  scanf("%d", &x);
  printf("Digite o segundo numero: \n");
  scanf("%d", &y);

 if(op==1){
        resultado=x+y;
  printf("o resultado e: %d", resultado);
}else if(op==2){
     resultado=x-y;
   printf("o resultado e: %d", resultado );

  }
else if(op==3){
         resultado=x*y;
    printf("o resultado e: %d", resultado);
}
else if(op==4){
     resultado=x/y;
    printf("o resultado e: %d", resultado);

} else {
printf("\nDIGITE UMA OPCAO VALIDA! \n");
}

  }

}
