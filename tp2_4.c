#include <stdio.h>
#include <time.h>
#include<stdlib.h>

struct 
{
    int Velc_proc_Gz;
    int anio_Fab;
    int cant_Nuc;
    char *tipo_cpu;

} typedef pc;


int main (void)
{
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    pc computadoras;
    int aleatoreo;
    int vuelve_de_tipo;

    srand(time(NULL));

    computadoras.Velc_proc_Gz= rand()% (3-1)+1;
    computadoras.anio_Fab= rand ()% (2023-2015)+2015;
    computadoras.cant_Nuc= rand ()% (8-1)+1;
    computadoras.tipo_cpu= tipos[rand()%6];

    printf("TIPO: %s\n",computadoras.tipo_cpu);
    printf("VELOCIDAD %d GHz\n",computadoras.Velc_proc_Gz);
    printf("ANIO DE FABRICACION: %d\n",computadoras.anio_Fab);
    printf("NUCLEOS: %d\n", computadoras.cant_Nuc);
    
    return 0;
}