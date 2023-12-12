// Exercício 5:

// Crie uma struct "Funcionario" com membros para nome, cargo e salário. Escreva uma função que recebe um array de funcionários e um cargo como parâmetro,
// e retorna a média salarial dos funcionários com esse cargo. Em seguida,
//  implemente um programa que utiliza essa função para calcular e imprimir a média salarial dos programadores em uma empresa.
#include <stdio.h>
struct dados_funcionario
{
  float mediasalarial;
};
float mediasalarial(int s1, int s2)
{
  int soma;
  float mediasalario;
  soma = s1 + s2;
  mediasalario = (float)soma / 2;
  return mediasalario;
  fflush(stdin);
};
int main()
{
  struct dados_funcionario funcionario;
  char nome[200];
  char cargo[200];
  float mediasalario;
  int s1;
  int s2;
  printf("Digite o nome do funcionario:");
  scanf("%s", &nome);
  printf("Digite o cargo do funcionario:");
  scanf("%s", &cargo);
  printf("Digite o primeiro salario do funcionario:");
  scanf("%d", &s1);
  printf("Digite o segundo salario do funcionario:");
  scanf("%d", &s2);
  printf("nome:%s\n", nome);
  printf("cargo:%s\n", cargo);
  printf("s1:%d\n", s1);
  printf("s2:%d\n", s2);
  printf("mediasalario:%.1f\n", mediasalario);
  mediasalario = mediasalarial(s1, s2);
  return 0;
}
