#include <stdio.h>

int main() {
    char nome [] = "" ;
    char estadoCivil [] ="" ; 
    char solteiro [] = "S";
    char casado [] = "C"; 
    char uniao [] = "U"; 
    char divorciado [] = "D"; 
    int taxa;
    printf("Introduza seu nome  ");
    scanf("%s", &nome);
    printf("Porfavor introduza o seu estado \n");
    scanf("%s", &estadoCivil);
    

    if (estadoCivil == 'solteiro')
    {
        printf("Sua taxa e de 25%%");
    }
    else if (estadoCivil == "casado")
    {
        printf("Sua taxa e de 19%%");
    }
    else if (estadoCivil == "uniao")
    {
        printf("Sua taxa e de 22%%");
    }
    else if (estadoCivil == "divorciado")
    {
        printf("Sua taxa e de 18%%");
    }
   else
    {
        printf("Sua taxa e de 9%%");
    }
    
    
    
    return 0;
    
    
    
}