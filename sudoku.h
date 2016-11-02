#ifndef SUDOKU_HDR
#define SUDOKU_HDR 1

#include <stdio.h>
typedef struct sudoku_s* sudoku_t;

sudoku_t sudoku_alloc(void);
void sudoku_free(sudoku_t);
sudoku_t sudoku_fromfile(FILE *);
void sudoku_print(sudoku_t, const char *);
void sudoku_solve(sudoku_t);

#endif
