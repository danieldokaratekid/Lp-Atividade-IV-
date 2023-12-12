// Exercicio 3
// Desenvolva uma struct "produto" que contenha informações como nome,preço e quantidade em estoque.
// Em seguida,desenvolve um menu para facilitar a escolha das opções:1-realizar compras,2-consultar estoque,3-sair do programa.
// Escreva funções necessárias para calcular o valor total em estoque do produto e para atualizar a quantidade em estoque com base em uma compra.
// Crie um programa que utiliza essas funções para um produto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
struct dados_produto
{
    char nomeproduto[200];
    float precoproduto;
    int realizarcompras;
    int opcao;
    int consultarestoque;
    int sairdoprograma;
};
int valortotal(int n1, int n2)
{
  int soma;
  soma = n1 + n2;
  return valortotal;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    char nomeproduto[200];
    float precoproduto;
    int realizarcompras;
    int opcao;
    int consultarestoque;
    int sairdoprograma;
    float n1;
    float n2;
    int produtoindicado;

    printf("1-realizar compras\n");
    printf("2-Consultar estoque\n");
    printf("3-Sair do programa\n");
    printf("\nDigite o nome do produto: ");
    scanf("%s", &nomeproduto);
    printf("\nDigite o preco do produto: ");
    scanf("%f", &precoproduto);
    printf("\nDigite a opcao desejada(1 a 3)");
    scanf("%d", &opcao);
    printf("Valor total produto:");
    scanf("%f",&valortotal);
    switch (opcao)
    {
    case 1:
        fflush(stdin);
        printf("realizar compras\n");
        scanf("%d", &realizarcompras);
        printf("ovo-R$10.00\n");
        printf("compra realizada com sucesso!\n");
        break;
    case 2:
        fflush(stdin);
        printf("consultar estoque\n");
        printf("caneta-R$1.50\n");
        printf("tinta para cabelo:R$ 25.00\n");
        scanf("%d", &consultarestoque);
        printf("estoque consultado com sucesso!\n");
    case 3:
        fflush(stdin);
        printf("sair do programa\n");
        scanf("%d", &sairdoprograma);
    default:
        printf("\nOpcao Invalida");
        break;
    }
    fflush(stdin);
    printf("Digite o produto indicado:");
    gets(produtoindicado);
    printf("nome produto: %d \n", nomeproduto);
    printf("preco produto: %f \n", precoproduto);
    printf("valor total:%f\n",valortotal(n1,n2));
    return 0;
}