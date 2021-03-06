#pragma once
#include <malloc.h>
#include <string.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

struct Matrix {
	double ** data;
	int rows;
	int cols;
};

void pack_mat(Matrix * item, double ** data, int rows, int cols);
void repack_mat(Matrix * item, int rows, int cols);

Matrix * copy_mat(Matrix * from);
Matrix * malloc_mat(int rows, int cols);
void free_mat(Matrix *& item);
void mat_set(Matrix * item, double value, int rows, int cols);

Matrix * eyes(int dim);
void mat_resize(Matrix * m, int n_rows, int n_cols, Matrix *& tot);
void mat_sum(Matrix * M1, Matrix * M2);
void mat_sum(Matrix * M1, Matrix * M2, Matrix *& out);
void mat_minus(Matrix * M1, Matrix * M2, Matrix *& out);
void mat_multiply(Matrix * M1, Matrix * M2, Matrix *& out);
void mat_addition(Matrix * M1, Matrix * M2, Matrix *& out);
void mat_multiply(Matrix * M1, double num, Matrix *& out);
void mat_clear(Matrix * M1, double value = 0);
void mat_trans(Matrix * M1, Matrix *& tot);
void mat_inv(Matrix * M1, Matrix *& out);
Matrix * mat_read(const char * filename);
void mat_save(Matrix * m, const char * filename);
void mat_output(Matrix * m,const char * title = "Untitled");
void sub_mat(Matrix * m, int start_row, int end_row, int start_col, int end_col, Matrix *& out);
void mat_merge_horizontal(Matrix * M1, Matrix * M2, Matrix *& out);
void LMS(Matrix * Z, Matrix * H, Matrix * D, Matrix *& X, Matrix *& S, Matrix *& V);