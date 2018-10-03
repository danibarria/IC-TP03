#include <stdio.h>
#include <omp.h>

#define LARGO 1000

int main(int argc, char const *argv[])
{
    int valores[LARGO];
    int acum = 0;

        for (int i = 0; i < LARGO; ++i)
        {
            valores[i] = i;
            acum = acum + i;
        
            printf("%d \n", acum);
        }

    return 0;
}