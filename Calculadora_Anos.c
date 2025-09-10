#include <stdio.h>
int main()
{
    int anoatual, anonascimento, idade;
    printf("Qual é o ano atual: ");
    scanf("%d", &anoatual);
    printf("Qual é o ano de nascimento do utilizador: ");
    scanf("%d", &anonascimento);
    if (anonascimento > anoatual)
    {
        printf("O ano de nascimento não pode ser maior que o ano atual.");
    }
    else
    {
        idade = anoatual - anonascimento;
        printf("A idade do utilizador é: %d", idade);
    }
}
