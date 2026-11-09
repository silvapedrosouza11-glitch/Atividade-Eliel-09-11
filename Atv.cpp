#include <stdio.h>

int main() {
    int senha, senhaDigitada;
    int opcao;
    float saldo = 500.00;
    float valor;
    float maiorDeposito = 0;

    // Criando a senha
    printf("Crie uma senha numerica de 4 digitos: ");
    scanf("%d", &senha);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Consultar Saldo e Estatisticas\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor do deposito: ");
            scanf("%f", &valor);

            if (valor <= 0) {
                printf("Valor invalido!\n");
            } else {
                saldo = saldo + valor;

                // Verifica se e o maior deposito ate agora
                if (valor > maiorDeposito) {
                    maiorDeposito = valor;
                }
                printf("Deposito realizado com sucesso!\n");
            }
        }
        else if (opcao == 2) {
            printf("Digite sua senha de 4 digitos: ");
            scanf("%d", &senhaDigitada);

            if (senhaDigitada != senha) {
                printf("Senha Incorreta! Operacao cancelada.\n");
            } else {
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);

                if (valor > saldo) {
                    printf("Saldo Insuficiente!\n");
                } else {
                    saldo = saldo - valor;
                    printf("Saque realizado com sucesso!\n");
                }
            }
        }
        else if (opcao == 3) {
            printf("\nSaldo atual: R$ %.2f\n", saldo);
            printf("Maior deposito realizado: R$ %.2f\n", maiorDeposito);
        }
        else if (opcao == 4) {
            printf("Obrigado por usar nosso banco!\n");
        }
        else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
