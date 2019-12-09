#include <stdio.h>

int main() {
    char nome [256];
    char estadoCivil [256]; 
    float taxa;
    printf("Introduza seu nome  ");
    scanf("%s", &nome);
    printf("Porfavor introduza o seu estado \n");
    scanf("%s", estadoCivil);
    

    if (estadoCivil[0] == 's' || estadoCivil[0] == 'S')
    {
        taxa=0.25;    
    }
    else if (estadoCivil[0] == 'c' || estadoCivil[0]== 'C')
    {
        taxa = 0.19;
    }
    else if (estadoCivil[0] == 'u' || estadoCivil[0]=='U')
    {
        taxa = 0.22;
    }
    else if (estadoCivil[0] == 'd' || estadoCivil[0]=='D')
    {
        taxa =0.18;
    }
   else
    {
    taxa=0.09;
   }
    
    printf("%s a sua taxa e de : %0.0f%%",nome,taxa*100);    
}
