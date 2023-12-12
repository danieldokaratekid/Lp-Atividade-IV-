// Exercicio 01
// crie uma struct contato para representar informações informações de contatos,incluindo nome,numero de telefone e email.Solicite que o usuario cadastre 3 contatos.
// Escreva uma função que recebe um arrary de contatos e um nome como parâmetro,e retorna o numero de telefone correspondente a esse nome.
/// Em seguida,implemente um programa que utiliza essa função para buscar e imprimir o numero de telefone de um contato especifico
#include <stdio.h>
#include <stdlib.h>
void cabecalho()
{
    printf("\n\t*******Inserir Dados De Usuario************\n");
}
void monstrartelefone(char telefone[], char nome[], char nomedigitado[])
{
    if(strcmp(nome,nomedigitado)==0)
    {
        printf("numero telefone:%s\n", telefone);
    }
}
struct dados_contato
{
    char nome[200];
    char numerotelefone[200];
    char email[200];
};

int main()
{
    int i;
    char nomedigitado[200];
    struct dados_contato contato[2];
    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do contato:");
        gets(contato[i].nome);
        printf("Digite o e=mail do contato:");
        gets(contato[i].email);
        printf("Digite o telefone do contato:");
        gets(contato[i].numerotelefone);
    }

    printf("Digite o nome do contato desejado:\n");
    gets(nomedigitado);
    printf("Exibindo dados do contato....\n");
    for (i = 0; i < 2; i++)
    {
        monstrartelefone(contato[i].numerotelefone, contato[i].nome, nomedigitado);
    }

    return 0;
}
