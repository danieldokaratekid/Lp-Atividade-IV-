// exercicio 2:
// crie uma função chamada "calcularmedia"que recebe como paramêtro uma struct aluno com informações como nome,data de nascimento,duas notas e media e retorna a media das notas.
// Em seguida,crie um programa que declare um array de 5 alunos e utilize a função"calcularmedia" para imprimir a media de cada aluno.
// Também cria uma função para veridicar se um aluno está aprovado ou reprovado sendo necessario media maior ou igual a 7 para aprovação
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
void cabecalho()
{
  printf("\n\t*********Dados***********\n");
}
float calcularmedia(int n1, int n2)
{
  int soma;
  float media;
  soma = n1 + n2;
  media = (float)soma / 2;
  return media;
}
void aprovacao(float aprovado,float reprovado){
float media;
if(media>=7){ 
  printf("Aluno está aprovado!:%s\n",aprovado);
} else{
printf("O Aluno está reprovado!:%s\n",reprovado);
}
}

int main()
{
  setlocale(LC_ALL, "portuguese");
  char nome[200][2];
  char datanascimento[200][2];
  int i;
  float n1;
  float n2;
  cabecalho();
  for ( i = 0; i < 2; i++)
  {
  printf("Digite seu nome\n");
  scanf("%s", &nome[i]);
  printf("\nDigite sua data de nascimento:");
  scanf("%s", &datanascimento[i]);
  printf("Digite a primeira nota:\n");
  scanf("%f", &n1);
  printf("Digite a segunda nota\n");
  scanf("%f", &n2);
  }

  for ( i = 0; i < 2; i++)
  {
  fflush(stdin);
  printf("nome:%s\n", nome[i]);
  printf("datanascimento:%s\n", datanascimento[i]);
  printf("n1:%1.f\n", n1);
  printf("n2:%1.f\n", n2);
  printf("media:%1.f\n", calcularmedia(n1, n2));
  }
  return 0;
}