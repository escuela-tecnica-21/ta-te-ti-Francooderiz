//Franco Oderiz
#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

 int ocupado[9],x[9],O[9],y,ficha_elegida,ficha_ocupada,eleccion,lugar_ocupado[9],tablerito[9],Ganador_x,Ganador_O,Terminar_juego=1;

int main()
{
int z,respuesta;

while(Terminar_juego==1)
{
Imprimir_tablerito();
Elegir_tipo_ficha();
Ganador_tateti();
Imprimir_Ganador_X();
Imprimir_Ganador_O();
Empate_tateti();
}
}


int Elegir_tipo_ficha()
{
    printf("Posiciones:\n Si desea jugar X ingrese 1\n Si desea jugar O ingrese 2\n");
    scanf("%d",& ficha_elegida);

  if(ficha_elegida==1)
       {
         Jugada_tablerito();

         if(lugar_ocupado[eleccion-1]==0)
         {
           tablerito[(eleccion-1)] = 'X';
           lugar_ocupado[eleccion-1]=1;
         }

       }

       if(ficha_elegida==2)
       {
         Jugada_tablerito();
         if(lugar_ocupado[eleccion-1]==0)
         {
           tablerito[(eleccion-1)] = 'O';
           lugar_ocupado[eleccion-1]=2;
         }
       }
}
int Jugada_tablerito()
{
    eleccion=0;
    while(eleccion<1 || eleccion>9)
    {
       printf("Elija una posicion del 1 al 9 para jugar la ficha\n");
       scanf("%d",&eleccion);
       if(eleccion<1 || eleccion>9)
       {
           printf("Elija un lugar valido para poner la ficha\n");
       }
    }

 return eleccion-1;
}
void Imprimir_tablerito()
{
     //tablerito
         system("cls");
     printf(" %c | %c | %c\n-----------\n",tablerito[0],tablerito[1],tablerito[2]);
     printf(" %c | %c | %c\n-----------\n",tablerito[3],tablerito[4],tablerito[5]);
     printf(" %c | %c | %c\n\n",tablerito[6],tablerito[7],tablerito[8]);

}
int Ganador_tateti()
{
    //A partir de la siguiente linea es para el ganador en el caso de X
    if(lugar_ocupado[0]==1 && lugar_ocupado[1]==1 && lugar_ocupado[2]==1 )
    {
      Ganador_x=1;
    }
    if(lugar_ocupado[3]==1 && lugar_ocupado[4]==1 && lugar_ocupado[5]==1 )
    {
      Ganador_x=1;
    }
    if(lugar_ocupado[6]==1 && lugar_ocupado[7]==1 && lugar_ocupado[8]==1 )
    {
      Ganador_x=1;
    }
    if(lugar_ocupado[0]==1 && lugar_ocupado[3]==1 && lugar_ocupado[6]==1 )
    {
      Ganador_x=1;
    }
    if(lugar_ocupado[1]==1 && lugar_ocupado[4]==1 && lugar_ocupado[7]==1 )
    {
      Ganador_x=1;
    }
    if(lugar_ocupado[2]==1 && lugar_ocupado[5]==1 && lugar_ocupado[8]==1 )
    {
      Ganador_x=1;
    }
    if(lugar_ocupado[0]==1 && lugar_ocupado[4]==1 && lugar_ocupado[8]==1 )
    {
      Ganador_x=1;
    }
    if(lugar_ocupado[2]==1 && lugar_ocupado[4]==1 && lugar_ocupado[6]==1 )
    {
      Ganador_x=1;
    }

//A partir de la siguiente linea es para el ganador en el caso de O
if(lugar_ocupado[0]==2 && lugar_ocupado[1]==2 && lugar_ocupado[2]==2 )
    {
      Ganador_O=1;
    }
    if(lugar_ocupado[3]==2 && lugar_ocupado[4]==2 && lugar_ocupado[5]==2 )
    {
      Ganador_O=1;
    }
    if(lugar_ocupado[6]==2 && lugar_ocupado[7]==2 && lugar_ocupado[8]==2 )
    {
     Ganador_O=1;
    }
    if(lugar_ocupado[0]==2 && lugar_ocupado[3]==2 && lugar_ocupado[6]==2 )
    {
      Ganador_O=1;
    }
    if(lugar_ocupado[1]==2 && lugar_ocupado[4]==2 && lugar_ocupado[7]==2 )
    {
      Ganador_O=1;
    }
    if(lugar_ocupado[2]==2 && lugar_ocupado[5]==2 && lugar_ocupado[8]==2 )
    {
      Ganador_O=1;
    }
    if(lugar_ocupado[0]==2 && lugar_ocupado[4]==2 && lugar_ocupado[8]==2 )
    {
      Ganador_O=1;
    }
    if(lugar_ocupado[2]==2 && lugar_ocupado[4]==2 && lugar_ocupado[6]==2 )
    {
      Ganador_O=1;
    }

}
void Imprimir_Ganador_X()
{
    if (Ganador_x==1)
{
      system("cls");
     printf(" %c | %c | %c\n-----------\n",tablerito[0],tablerito[1],tablerito[2]);
     printf(" %c | %c | %c\n-----------\n",tablerito[3],tablerito[4],tablerito[5]);
     printf(" %c | %c | %c\n\n",tablerito[6],tablerito[7],tablerito[8]);
    printf("El ganador del partido es la X\n");
    Terminar_juego=0;
}

}
void Imprimir_Ganador_O()
{
    if(Ganador_O==1)
    {
          system("cls");
     printf(" %c | %c | %c\n-----------\n",tablerito[0],tablerito[1],tablerito[2]);
     printf(" %c | %c | %c\n-----------\n",tablerito[3],tablerito[4],tablerito[5]);
     printf(" %c | %c | %c\n\n",tablerito[6],tablerito[7],tablerito[8]);
    printf("El ganador del partido es el O\n");
    Terminar_juego=0;
    }
}
void Empate_tateti()
{
    if(tablerito[0]!=0 && tablerito[1]!=0 && tablerito[2]!=0 && tablerito[3]!=0 && tablerito[4]!=0 && tablerito[5]!=0 && tablerito[6]!=0 && tablerito[7]!=0 && tablerito[8]!=0 )
    {
        system("cls");
    printf(" %C | %C | %C\n", tablerito[0], tablerito[1], tablerito[2]);
    printf("---|---|---\n");
    printf(" %C | %C | %C\n", tablerito[3], tablerito[4], tablerito[5]);
    printf("---|---|---\n");
    printf(" %C | %C | %C\n\n", tablerito[6], tablerito[7], tablerito[8]);
    printf("Hubo un empate en el partido\n");
    Terminar_juego=0;
    }
}







