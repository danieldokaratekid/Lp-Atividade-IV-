// Exercício 4:
// Modele uma struct "ContaBancaria" que represente uma conta bancária com número da conta, nome do titular, saldo e tipo de conta (poupança ou corrente).
// Implemente funções para depositar e sacar dinheiro da conta, bem como para imprimir o saldo atual. Crie um programa que utilize essas funções para simular operações bancárias.
// Crie um menu para as operações disponíveis.
void depositar(void)
{
    return depositar;
}
void sacar(void)
{
    return sacar;
}
void imprimir(saldo)
{
    return imprimir;
}
int main()
{
    struct conta_bancaria
    {
        float numeroconta;
        char nomedotitular[200];
        float saldo;
    };
    struct conta_bancaria bancaria;
    int numeroconta;
    char nomedotitular[200];
    int opcao;
    float saldo;
    int depositar;
    int saque;
    {
    }
    printf("1---------Conta-Corrente:-----------\n");
    printf("2---------Conta-Poupanca:----------------\n");
    printf("Digite o numero de sua conta:\n");
    scanf("%d", &numeroconta);
    printf("Digite o nome do titular:\n");
    scanf("%s", &nomedotitular);
    printf("Digite seu saldo:\n");
    scanf("%f", &saldo);
    printf("Digite a opcao de conta(1,2 e 3):");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
    
        printf("--------Imprimir saldo atual---------:\n");
        scanf("%f",&saldo);
        printf("Saldo impresso com sucesso!");
        break;
        
    case 2:
        printf("-------Depositar dinheiro----------:\n");
        scanf("%d", &depositar);
        printf("Deposito Aberto com sucesso!");
        break;
    case 3:
        printf("------------Sacar o dinheiro------------:\n");
        scanf("%d", &saldo);
        printf("Dinhero sacado com sucesso!\n");
    default:
        printf("\nOpcao invalida!\n");
        break;
    }
    return 0;
}
