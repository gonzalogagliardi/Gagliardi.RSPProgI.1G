#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


// 1. Crear una función llamada calcularIVA que reciba como primer parámetro el precio bruto de un producto y como segundo parámetro la dirección de memoria de una variable donde debe escribir el valor del impuesto(el IVA es 21%).
// La función retorna 1 si salió todo bien o 0 si hubo algún error. Realizar la llamada desde main. *

int calcularIVA(float precioBruto, float* precioIva);

//2
int subiBaja(char cadenaCarac[]);

int main()
{

    float precioBruto = 500;
    float precioIva;
    char cadena[20] = "Programacion";


    if(calcularIVA(precioBruto, &precioIva))
    {
        printf(" El impuesto es de: $%.2f\n", precioIva);
    }
    else{
        printf("Hubo un error al calcular IVA");
    }

    if(subiBaja(cadena))
    {
        printf("Todo Ok\n");
    }
    else
    {

        printf("Hubo un problema.");
    }

    return 0;
}


int calcularIVA(float precioBruto, float* precioIva)
{
    int todoOk = 0;

                if(precioBruto > 0)
                {
                    *precioIva = precioBruto * 0.21;
                    todoOk = 1;
                }

    return todoOk;
}


int subiBaja(char cadenaCarac[])
{
    int todoOk = 0 ;

            if(cadenaCarac != NULL)
            {
                int i=0;

                while(cadenaCarac[i])
                {
                    if(cadenaCarac[i] >= 'A' && cadenaCarac[i] <= 'Z')
                    {
                        cadenaCarac[i]= tolower(cadenaCarac[i]);
                    }
                    else if(cadenaCarac[i] >= 'a' && cadenaCarac[i] <= 'z')
                    {
                        cadenaCarac[i] = toupper(cadenaCarac[i]);
                    }
                }

                todoOk= 1;
            }
    return todoOk;
}
