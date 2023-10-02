#include <stdio.h>
#define ex1

#ifdef ex2
/*2)	Leia um número inteiro representado pela variável N até que N seja igual a zero.
 * Exiba uma mensagem informando se o número é par ou ímpar.*/
int main() {
    int num;

    do {
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Programa encerrado.\n");
        } else if (num % 2 == 0) {
            printf("%d é um número par.\n", num);
        } else {
            printf("%d é um número ímpar.\n", num);
        }

    } while (num != 0);

    return 0;
}

#endif

#ifdef ex1
/*1)	Calcule e mostre a média dos K primeiros pares e múltiplos de cinco.
OBS: K representa a quantidade de números pares solicitados via teclado pelo   usuário. Os números pares deverão ser gerados pelo programador. Utilize o laço while para a entrada da quantidade K e um laço for para o cálculo da média.
		2, 4, 6, 8, 10, ...
*/

int main() {
    int num;
    long long fatorial = 1;

    do {
        printf("Digite um número inteiro maior ou igual a zero: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("O número deve ser maior ou igual a zero. Tente novamente.\n");
        }
    } while (num < 0);

    if (num == 0 || num == 1) {
        fatorial = 1;
    } else {
        for (int i = 2; i <= num; i++) {
            fatorial *= i;
        }
    }

    printf("%d! = %lld\n", num, fatorial);

    return 0;
}

#endif
