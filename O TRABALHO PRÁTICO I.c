#include <stdio.h>
#include <math.h>

void soma() {
    double a, b;
    printf("digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a + b);
}

void subtracao() {
    double a, b;
    printf("digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("resultado: %.2lf\n", a - b);
}

void multiplicacao() {
    double a, b;
    printf("digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("resultado: %.2lf\n", a * b);
}

void divisao() {
    double a, b;
    printf("digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("resultado: %.2lf\n", a / b);
    } else {
        printf("erro: divisao por zero!\n");
    }
}

void exponenciacao() {
    double base, expoente;
    printf("digite a base e o expoente: ");
    scanf("%lf %lf", &base, &expoente);
    printf("resultado: %.2lf\n", pow(base, expoente));
}

void raiz_quadrada() {
    double a;
    printf("digite um numero: ");
    scanf("%lf", &a);
    if (a >= 0) {
        printf("resultado: %.2lf\n", sqrt(a));
    } else {
        printf("erro: raiz quadrada de numero negativo!\n");
    }
}

void modulo() {
    double a, b;
    printf("digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("resultado: %.2lf\n", fmod(a, b));
    } else {
        printf("erro: modulo por zero!\n");
    }
}

void bhaskara() {
    double a, b, c, delta, x1, x2;
    printf("digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("erro: 'a' nao pode ser zero na equaçao quadratica.\n");
        return;
    }
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("não há raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("raiz unica: x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("raizes: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }
}

int main() {
    int opcao;

    do {
        printf("\n--- calculadora interativa ---\n");
        printf("1. soma\n");
        printf("2. subtraçao\n");
        printf("3. multiplicaçao\n");
        printf("4. divisao\n");
        printf("5. exponenciaçao\n");
        printf("6. raiz Quadrada\n");
        printf("7. modulo\n");
        printf("8. bhaskara\n");
        printf("0. sair\n");
        printf("escolha uma opçao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: soma(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: exponenciacao(); break;
            case 6: raiz_quadrada(); break;
            case 7: modulo(); break;
            case 8: bhaskara(); break;
            case 0: printf("saindo...\n"); break;
            default: printf("opção invalida! Tente novamente.\n"); break;
        }
    } while (opcao != 0);

    return 0;
}
