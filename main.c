//Franco Oderiz
#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
 char tablerito[9]= "";
 int ocupado[9],x[9],O[9],y;
int main()
{
int z,respuesta;



printf(Imprimir_Tablero());







}
void EmpateTateti()
{
     if(x[1]==x[2] || x[1]==x[0] || x[5]==x[2])
    {
        for(y=0;y<3;y++)
        {
            if(ocupado[y]==0)
            {
                tablerito[y]='O';
                return 1;
            }
        }
    }
     if(x[4]==x[5] || x[3]==x[4] || x[5]==x[3])
    {
        for(y=0;y<3;y++)
        {
            if(ocupado[y+3]==0)
            {
                tablerito[y+3]='O';
                return 1;
            }
        }
    }
     if(x[8]==x[7] || x[6]==x[7] || x[6]==x[8])
    {
        for(y=0;y<3;y++)
        {
            if(ocupado[y+6]==0)
            {
                tablerito[y+6]='O';
                return 1;
            }
        }
    }
     if(x[6]==x[3] || x[0]==x[3] || x[0]==x[6])
    {
        for(y=0;y<3;y=y+3)
        {
            if(ocupado[y]==0)
            {
                tablerito[y]='O';
                return 1;
            }
        }
    }
     if(x[4]==x[7] || x[1]==x[4] || x[1]==x[7])
    {
        for(y=0;y<3;y=y+3)
        {
            if(ocupado[y]==0)
            {
                tablerito[y]='O';
                return 1;
            }
        }
    }
     if(x[5]==x[8] || x[2]==x[5] || x[2]==x[8])
    {
        for(y=0;y<3;y=y+3)
        {
            if(ocupado[y]==0)
            {
                tablerito[y]='O';
                return 1;
            }
        }
    }
}

int GanadorTateti()
{
    if(O[1]==O[0] || O[1]==O[2] || O[0]==O[2])
    {
        for(y=0;y<3;y++)
        {
            if(ocupado[y]==0)
            {
                tablerito[y]='O';
                return 1;
            }
        }
    }
  if(O[3]==O[4] || O[4]==O[5] || O[5]==O[3])
    {
        for(y=0;y<3;y++)
        {
            if(ocupado[y+3]==0)
            {
                tablerito[y+3]='O';
                return 1;
            }
        }
    }
     if(O[6]==O[7] || O[8]==O[7] || O[6]==O[8])
    {
        for(y=0;y<3;y++)
        {
            if(ocupado[y+6]==0)
            {
                tablerito[y+6]='O';
                return 1;
            }
        }
    }
     if(O[6]==O[3] || O[0]==O[6] || O[0]==O[3])
    {
        for(y=0;y<9;y=y+3)
        {
            if(ocupado[y+3]==0)
            {
                tablerito[y+3]='O';
                return 1;
            }
        }
    }
     if(O[1]==O[4] || O[1]==O[7] || O[4]==O[7])
    {
        for(y=0;y<9;y=y+3)
        {
            if(ocupado[y+3]==0)
            {
                tablerito[y+3]='O';
                return 1;
            }
        }
    }
     if(O[2]==O[5] || O[2]==O[8] || O[5]==O[8])
    {
        for(y=0;y<9;y=y+3)
        {
            if(ocupado[y+3]==0)
            {
                tablerito[y]='O';
                return 1;
            }
        }
    }
     if(O[4]==O[8] || O[0]==O[8] || O[0]==O[4])
    {
        for(y=0;y<9;y=y+4)
        {
            if(ocupado[y]==0)
            {
                tablerito[y]='O';
                return 1;
            }
        }
    }
     if(O[4]==O[6] || O[2]==O[4] || O[2]==O[6])
    {
        for(y=0;y<9;y=y+2)
        {
            if(ocupado[y+3]==0)
            {
                tablerito[y+3]='O';
                return 1;
            }
        }
    }












}

int Imprimir_Tablero()
{
    int z,respuesta;
for(z=0;z<9;z++)
{
    x[z]=z+1;O[z]=z+1;
    ocupado[z]=0;
}
 z=0;
 while(z<5)
 {
     if(z%2==0)
     {
         //tablero
         system("cls");
     printf(" %c | %c | %c\n-----------\n",tablerito[0],tablerito[1],tablerito[2]);
     printf(" %c | %c | %c\n-----------\n",tablerito[3],tablerito[4],tablerito[5]);
     printf(" %c | %c | %c\n",tablerito[6],tablerito[7],tablerito[8]);
 gotoxy(1,7);
     printf("Ingrese un N° entre 1 y 9 para marcar la x en el casillero deseado");
     printf("Casillero= ");scanf("%d",&respuesta);
     if(ocupado[respuesta-1]==0 && respuesta>0 && respuesta<10)
     {
         tablerito[respuesta-1]='X';ocupado[respuesta-1]=1;
         x[respuesta-1]=13;z++;
     }
     }
 else
 {
  system("cls");
   printf(" %c | %c | %c\n-----------\n",tablerito[0],tablerito[1],tablerito[2]);
   printf(" %c | %c | %c\n-----------\n",tablerito[3],tablerito[4],tablerito[5]);
   printf(" %c | %c | %c\n",tablerito[6],tablerito[7],tablerito[8]);
 gotoxy(1,7);
     printf("Ingrese un N° entre 1 y 9 para marcar la O en el casillero deseado");
     printf("Casillero= ");scanf("%d",&respuesta);
     if(ocupado[respuesta-1]==0 && respuesta>0 && respuesta<10)
     {
         tablerito[respuesta-1]='O';ocupado[respuesta-1]=1;
         O[respuesta-1]=14;z++;
     }
 }
 GanadorTateti();
 if (GanadorTateti()==1)
{
}
else
{
    EmpateTateti();
}
//empate
        system("cls");

   printf(" %c | %c | %c\n-----------\n",tablerito[0],tablerito[1],tablerito[2]);
   printf(" %c | %c | %c\n-----------\n",tablerito[3],tablerito[4],tablerito[5]);
   printf(" %c | %c | %c\n",tablerito[6],tablerito[7],tablerito[8]);
 }
    return 0;
}
{}



















