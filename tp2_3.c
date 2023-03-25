#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(void)
{
    double mt[N][M], *puntero;
    puntero = &mt[0][0];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *(puntero) = 1 + rand() % 100;
            printf(" |%.2lf| ", *(puntero));
            puntero++;
        }
        printf("\n");
    }

    return 0;
}
