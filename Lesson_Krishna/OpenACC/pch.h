/* pch.h
 * PreCompiled Header for this lesson
 * Contains the constants, headers, and function prototypes used in other files
 */
#include <stdio.h>
#include <time.h> 

#ifndef PCH_H_MATRIX_ADD
#define PCH_H_MATRIX_ADD

#define DEFAULT_DIM 1024;
#define BLOCK_SIZE 32 // The CUDA max is 1024 threads per block
#define MATRIX_ADD_A_VAL 3.0F
#define MATRIX_ADD_B_VAL 2.0F
#define MATRIX_ADD_TOL 1.0E-6F

// Host routine
void cpu_matrix_add(const float *A, const float *B, float *C, const int dx,\
  const int dy);

// Functions in common.cpp 
void InitializeMatrixSame(float *array, const int ny, const int nx, const float val);
void InitializeMatrixRand(float *array, const int ny, const int nx);
void MatrixVerification(float *hostC, float *gpuC, const int ny, const int nx, const float fTolerance);
void PrintMatrix(float *matrix, int ny, int nx);

// OpenACC routine
void openacc_matrix_add(const float *A, const float *B, float *C, const int dx, \
const int dy); 

#endif // PCH_H_MATRIX_ADD
