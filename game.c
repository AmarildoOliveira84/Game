#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
} Calcular;

void jogar();
void mostrarInfo(Calcular calc);

int pontos = 0;

int main()
{
    srand(time(NULL));
    jogar();
    return 0;
}
void jogar()
{
    //vamos implementar
}
void mostrarInfo(Calcular calc)
{
    char op[25];

    if (calc.operacao == 0)
    {
        sprintf(op, "Somar");
    }
    else if (calc.operacao == 1)
    {

        sprintf(op, "Diminuir");
    }
    else if (calc.operacao == 2)
    {
        sprintf(op, "Multiplicar");
    }
    else
    {

        sprintf(op, "Operacao desconhecida");
    }
    printf("Valor1: %d \nValor2: %d \nDificuldade: \nOperacao: %s", calc.valor1, calc.valor2, calc.dificuldade, op);
}

int somar(int resposta, Calcular calc)
{
    int resultado = calc.valor1 + calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
        certo = 0;
    }
    printf("%d + %d = %d", , calc.valor1, calc.valor2, calc.resultado);
    return certo;
}

int diminuir(int resposta, Calcular calc)
{
    int resultado = calc.valor1 - calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta Correta!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
        certo = 0;
    }
    printf("%d - %d = %d", calc.valor1, calc.valor2, calc.resultado);
    return certo;
}
int multiplicar(int resposta, Calcular calc)
{
    int resultado = calc.valor1 * calc.valor2;
    calc.resultado = resultado;
    int certo = 0;

    if (resposta == calc.resultado)
    {
        printf("Resposta certa!\n");
        certo = 1;
    }
    else
    {
        printf("Resposta errada!\n");
        certo = 0;
    }
}