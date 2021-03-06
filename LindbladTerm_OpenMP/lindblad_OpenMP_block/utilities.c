
// external modules 
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

// internal modules
#include "headers.h"


// print matrix
void print_matrix_real(double *A, int N) {
	int unsigned i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; ++j) {
            printf("%.5f ", A[i + j * N]);
        }
        printf("\n");
    }
    printf("\n");
//    printf("done printing\n");
}
