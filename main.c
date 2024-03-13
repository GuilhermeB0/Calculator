#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>


float soma (float A, float B) {
    float Result;
    Result = A+B;
    return(printf("%.2f + %.2f = %.2f\n",A,B,Result));
}

float sub (float A, float B) {
    float Result;
    Result = A-B;
    return(printf("%.2f - %.2f = %.2f\n",A,B,Result));
}

float mult (float A, float B) {
    float Result;
    Result = A*B;
    return(printf("%.2f x %.2f = %.2f\n",A,B,Result));
}

float divi (float A, float B) {
    float Result;
    Result = A/B;
    return(printf("%.2f / %.2f = %.2f\n",A,B,Result));
}


int main()
{  

    setlocale(LC_ALL,"Portuguese");

    float a,b;
    char ope;

    do 
    {    
        system("cls");
            
        printf("Digite na seguinte ordem Número-->Operador-->Número: ");
        scanf("%f %c %f",&a, &ope, &b);
            
        switch (ope)
        {
            case '+':
                soma(a,b);
                break;
                
            case '-':
                sub(a,b);
                break;

            case 'x':
                mult(a,b);
                break;

            case '/':
                divi(a,b);
                break;
        }

        printf("\nDeseja fazer outra conta? (s/n): ");

    } while (getche()=='s'||'S');

    return 0;
}