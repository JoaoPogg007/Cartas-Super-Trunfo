#include <stdio.h>

int main(){
   float idade;
   float altura;
   char nome[50];
   int matricula;
   
printf("Digite seu nome: \n");
scanf("%s", &nome);

   printf("Digite sua idade: \n");
scanf("%f", &idade);

printf("Digite sua altura: \n");
scanf("%f", &altura);

printf("Digite sua matricula: \n");
scanf("%d", &matricula);


printf("Nome: %s - Matricula: %d", nome, matricula);
printf("Altura: %f - Idade: %d", altura, idade);


return 0;
}

