#include <stdio.h>


int main() {

    char nome[20];
    int salarioBruto;
    double taxa;
    printf("Nome ");
    scanf("%s", &nome);
    printf("Salario Bruto ");
    scanf("%d", &salarioBruto);

    if (salarioBruto < 1000)
    {
         taxa = salarioBruto * 0.05; 
    }
    else if (salarioBruto >=1000 && salarioBruto <= 5000)
    {
        taxa = salarioBruto * 0.11;
    }
    else
    {
        taxa = salarioBruto * 0.35;
    }
    printf(" Seu salario Bruto e %d\n Sua taxa e %lf\n ", salarioBruto, taxa );
    printf("Seu salario liquido e %lf", salarioBruto - taxa );
    
    return 0;
    


}