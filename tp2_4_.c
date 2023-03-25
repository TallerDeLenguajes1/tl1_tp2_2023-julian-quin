#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
struct
{
    int Velc_proc_Gz;
    int anio_Fab;
    int cant_Nuc;
    char *tipo_cpu;

} typedef pc;

pc cargarComputadora();
void mostrarComputadoras(pc *arreglo);
void PCvieja(pc *arreglo);
void PCvelocidd(pc *arreglo);
int main(void)
{
    pc computadoras[2];
    for (int i = 0; i < 2; i++)
    {
        printf("------ Computadora (%d) ------\n", i + 1);
        computadoras[i] = cargarComputadora();
    }
    mostrarComputadoras(computadoras);
    PCvieja(computadoras);
    PCvelocidd(computadoras);

    return 0;
}

pc cargarComputadora()
{
    pc variable;
    int eleccion;
    puts("ingrese velocidad de procesamiento");
    fflush(stdin);
    scanf("%d", &variable.Velc_proc_Gz);
    puts("ingrese anio de fabricacion");
    fflush(stdin);
    scanf("%d", &variable.anio_Fab);
    puts("ingrese cantidad de nucleos");
    fflush(stdin);
    scanf("%d", &variable.cant_Nuc);
    puts("Tipo de cpu: 1 Intel, 2 AMD, 3 Celeron, 4 Athlon, 5 Core, 6 Pentium");
    fflush(stdin);
    scanf("%d", &eleccion);
    variable.tipo_cpu = tipos[eleccion];
    return variable;
}

void mostrarComputadoras(pc *arreglo)
{
    printf("\n");
    printf("\n");
    printf(">>>>>>>> LISTA DE COMPUTADORAS >>>>>>>>>\n");
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("------ Computadora (%d) ------\n", i + 1);
        printf("velocidad de procesameinto: %d GHz\n", arreglo->Velc_proc_Gz);
        printf("anio de fabricacion: %d\n", arreglo->anio_Fab);
        printf("cantidad de nucleos: %d \n", arreglo->cant_Nuc);
        printf("tipo de cpu: %s\n", arreglo->tipo_cpu);
        arreglo++;
    }
}
void PCvieja(pc *arreglo)
{
    pc vieja;
    int auxAnio = 100000;
    for (int i = 0; i < 2; i++)
    {
        if (arreglo->anio_Fab < auxAnio)
        {
          auxAnio=arreglo->anio_Fab;
          vieja=*arreglo;
        }
        arreglo ++;
    }
    printf("\n");
    printf("\n");
    printf(">>>>>>>> COMPUTADORA MAS VIEJA >>>>>>>>>\n");
    printf("\n");
    printf("velocidad de procesameinto: %d GHz\n", vieja.Velc_proc_Gz);
    printf("anio de fabricacion: %d\n", vieja.anio_Fab);
    printf("cantidad de nucleos: %d \n", vieja.cant_Nuc);
    printf("tipo de cpu: %s\n", vieja.tipo_cpu);
    
}

void PCvelocidd(pc *arreglo)
{
    pc velocidad;
    int auxVel = 0;
    for (int i = 0; i < 2; i++)
    {
        if (arreglo->Velc_proc_Gz > auxVel)
        {
          auxVel=arreglo->Velc_proc_Gz;
          velocidad=*arreglo;
        }
        arreglo ++;
    }
    printf("\n");
    printf("\n");
    printf(">>>>>>>> COMPUTADORA MAS VELOZ >>>>>>>>>\n");
    printf("\n");
    printf("velocidad de procesameinto: %d GHz\n", velocidad.Velc_proc_Gz);
    printf("anio de fabricacion: %d\n", velocidad.anio_Fab);
    printf("cantidad de nucleos: %d \n", velocidad.cant_Nuc);
    printf("tipo de cpu: %s\n", velocidad.tipo_cpu);

}