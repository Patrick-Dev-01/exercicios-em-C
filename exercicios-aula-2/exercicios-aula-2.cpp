// exercicios-aula-2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#include <locale.h>
#include <string.h>

// RESOLVIDO

void ex1() {
    int n1, n2, n3;
    int menorValor = 0;

    printf("\nDigite o primeiro valor: ");
    scanf_s("%d", &n1);

    printf("\nDigite o primeiro valor: ");
    scanf_s("%d", &n2);

    printf("\nDigite o primeiro valor: ");
    scanf_s("%d", &n3);

    if (n1 < n2 && n1 < n3) {
        menorValor = n1;
    }

    if (n2 < n1 && n2 < n3) {
        menorValor = n2;
    }

    if (n3 < n1 && n3 < n2) {
        menorValor = n3;
    }

    printf("\n\nMenor valor digitado: %d\n", menorValor);
}

//RESOLVIDO

void ex2() {
    int base, altura;
    float area;

    printf("\nVamos de descobrir a Area de um Triangulo\n");

    printf("\nDigite sua Base: ");
    scanf_s("%d", &base);
    printf("Digite a Altura: ");
    scanf_s("%d", &altura);

    area = base * altura / 2;

    printf("\nArea: %2.f\n", area);
}

void ex3() {
    int numeros[11];
    int i;
    int soma = 0;
    int m = 0;
    float media;

    printf("Digite 10 numeros\n\n");

    for (i = 1; i <= 10; i++) {
        printf("valor: ");
        scanf_s("%d", &numeros[i]);
    }

    for (i = 1; i <= sizeof(numeros); i++) {
        if (numeros[i] > 4) {
            soma = soma + numeros[i];
            m++;
        }
    }

    media = soma / m;
    // printf("%f", media);
    printf("\nSoma: %d\n", soma);
    printf("\nfim do programa\n");
}

void ex4(){

}

//RESOLVIDO

void ex5() {
    int numero, i;

    printf("\nDigite um valor: ");
    scanf_s("%d", &numero);

    printf("Contagem regressiva: \n\n");

    for (i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }
}

// RESOLVIDO

void ex6(){
    int n1, n2, n3;

    printf("Digite o Primeiro Valor: ");
    scanf_s("%d", &n1);

    printf("Digite o Segundo Valor: ");
    scanf_s("%d", &n2);

    printf("Digite o Terceiro Valor: ");
    scanf_s("%d", &n3);

    printf("valor 1: %d \nvalor 2: %d \nvalor 3: %d", n1, n2, n3);

}

// RESOLVIDO

void ex7() {
    int num, i;
    int resultado = 0;

    printf("\nDigite um numero e veja sua tabuada completa: ");
    scanf_s("%d", &num);
    printf("-----------------------------------------------\n");

    for (i = 0; i <= 10; i++) {
        resultado = num * i;

        printf("%d X %d = %d\n", num, i, resultado);
    }
}

// RESOLVIDO

void ex8() {
    int num;
    char mes[20] = "J";

    printf("Digite um numero entre 1 e 12 e veja o nome do mês correspondente: ");
    scanf_s("%d", &num);

    while (num < 1 || num > 12) {
        printf("[Erro]: digite um numero maior que 0 e menor ou igual a 12\n\n");
        printf("Digite um numero entre 1 e 12 e veja o nome do mês correspondente: ");
        scanf_s("%d", &num);
    }

    switch (num) {
        case 1:
            strcpy_s(mes, "Janeiro");
            break;

        case 2:
            strcpy_s(mes, "Fevereiro");
            break;

        case 3:
            strcpy_s(mes, "Março");
            break;

        case 4:
            strcpy_s(mes, "Abril");
            break;

        case 5:
            strcpy_s(mes, "Maio");
            break;

        case 6:
            strcpy_s(mes, "Junho");
            break;

        case 7:
            strcpy_s(mes, "Julho");
            break;

        case 8:
            strcpy_s(mes, "Agosto");
            break;

        case 9:
            strcpy_s(mes, "Setembro");
            break;

        case 10:
            strcpy_s(mes, "Outubro");
            break;

        case 11:
            strcpy_s(mes, "Novembro");
            break;

        case 12:
            strcpy_s(mes, "Dezembro");
            break;
    }

    printf("\nMes: %s\n", mes);
}

// RESOLVIDO

void ex9() {
    int idade, i;
    int criancas = 0, adolescentes = 0, jovens = 0, adultos = 0;

    printf("\nVamos filtrar as faixas etarias com 15 idades diferentes\n\n");

    for (i = 0; i <= 15; i++) {
        printf("Idade: ");
        scanf_s("%d", &idade);

        if (idade < 12) {
            criancas++;
        }

        if (idade >= 12 && idade < 18) {
            adolescentes++;
        }

        if (idade >= 18 && idade <= 30) {
            jovens++;
        }

        if(idade > 30) {
            adultos++;
        }
    }

    printf("-------------------\n");
    printf("Faixas Etarias\n");
    printf("-------------------\n");
    printf("Menores que 12 anos: %d\n", criancas);
    printf("Entre 12 e 17 anos: %d\n", adolescentes);
    printf("Entre 18 e 30 anos: %d\n", jovens);
    printf("Acima de 30 anos: %d\n", adultos);
}

// RESOLVIDO

void ex10() {
    float np1, np2, pim, media;

    printf("Vamos Calcular sua media semestral com as nota da np1, np2 e o PIM\n\n");
    
    printf("Digite a nota da np1: ");
    scanf_s("%f", &np1);

    printf("Digite a nota da np2: ");
    scanf_s("%f", &np2);

    printf("Digite a nota da PIM: ");
    scanf_s("%f", &pim);

    media = (np1 * 4 + np2 * 4 + pim * 2) / 10;

    printf("\nSua media semestral: %2.f\n", media);
}

void ex11() {
    int num, divisivel = 1, divisor;
    float resultado = 0;

    printf("\nDigite um numero e descubra se ele e um numero primo: ");
    scanf_s("%d", &num);


    for (divisor = 2; divisor <= 9; divisor++) {
        resultado = num % divisor;

        if (resultado == 0) {
            divisivel++;
        }
    }

    if (divisivel > 2) {
        printf("\nO %d nao e um numero primo", num);
    }

    else{
        printf("\n%d e um numero primo\n", num);
    }
}

void ex12() {
    int idade, escolha;
    float valor = 0, valorFinal = 0, desconto = 0;
    char produto[20] = "";

    printf("Bem-vindo a lojas nenhuma, escolha um de nossos produtos de acordo com o seu numero correspondente");
    printf("---------------------------------------------------------------------------------------------------");
    printf("1 - PC Gamer: R$ 3000");
    printf("2 - PS4: R$ 4000");
    printf("3 - IPHONE: R$ 1500");
    scanf_s("%d", &escolha);
    printf("---------------------------------------------------------------------------------------------------");

    printf("Digite sua idade: ");
    scanf_s("%d", &idade);

    if (escolha == 1) {
        strcpy_s(produto, "PC Gamer");
        valor = 3000;
    }

    if (escolha == 2) {
        strcpy_s(produto, "PS4");
        valor = 4000;
    }

    if (escolha == 3) {
        strcpy_s(produto, "IPHONE");
        valor = 1500;
    }

    if (idade > 65) {
        desconto = valor * 15 / 100;
        valorFinal = valor - desconto;

        printf("Voce escolheu um %s e obteve um desconto de 15% por ter idade acima de 65 anos\nTotal a Pagar: R$%2.f", produto, valorFinal);
    }

    printf("Voce escolheu o %s\nTotal a pagar: R$%2.f", produto, valor);

    
}

// RESOLVIDO 

void ex13() {
    int final_placa;
    char dia[15] = "";

    printf("\nDigite o numero final da placa do seu carro e iremos verificar qual dia da semana e o rodizio: ");
    scanf_s("%d", &final_placa);

    if (final_placa == 1 || final_placa == 2) {
        strcpy_s(dia, "Segunda-Feira");
    }

    if (final_placa == 3 || final_placa == 4) {
        strcpy_s(dia, "Terca-Feira");
    }

    if (final_placa == 5 || final_placa == 6) {
        strcpy_s(dia, "Quarta-Feira");
    }

    if (final_placa == 7 || final_placa == 8) {
        strcpy_s(dia, "Quinta-Feira");
    }

    if (final_placa == 9 || final_placa == 0) {
        strcpy_s(dia, "Sexta-Feira");
    }

    printf("\nSeu Rodizio e na %s", dia);
}

void ex14() {
    int arrayNumerico[41], i, c;

    for (i = 1; i <= 40; i++) {
        arrayNumerico[i] = i;
    }

    for (i = 1; i <= sizeof(arrayNumerico); i++) {
       arrayNumerico[i]
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ex14();

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
