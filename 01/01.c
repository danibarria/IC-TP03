
#include <stdio.h>
#include <omp.h>

void main(int argc, char const *argv[])
{
    omp_set_num_threads(4);
     
    #pragma omp parallel
    {
        printf("%d\n", omp_get_thread_num());
    }
}