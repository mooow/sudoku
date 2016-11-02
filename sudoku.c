#include <stdlib.h>
#include <stdint.h>
#include "sudoku.h"

struct cell_s {
    uint8_t value, allowed;
};

struct sudoku_s {
    struct cell_s grid[9][9];
};

sudoku_t sudoku_alloc()
{
    void *ptr = malloc(sizeof(struct sudoku_s));
    if(ptr == NULL) {
        perror("sudoku_alloc() : Could not allocate memory");
    }
    return ptr;
}

void sudoku_free(sudoku_t ptr)
{
    free(ptr);
}

sudoku_t sudoku_fromfile(FILE *fp)
{
    sudoku_t ptr = sudoku_alloc();
    
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            fscanf(fp, "%hhu", &ptr->grid[i][j].value);
        }
    }
    
    return ptr;
}

void sudoku_print(sudoku_t ptr, const char *msg)
{
    if(msg) {
        puts(msg);
    }
    
    for(int i = 0; i < 9; i++) {
        putchar(' ');
        for(int j = 0; j < 9; j++) {
            printf("%hhu%s", ptr->grid[i][j].value, j < 8 && j % 3 == 2 ? " | " : " ");
        }
        putchar('\n');
        if( i < 8 && i % 3 == 2 ) {
            puts("-----------------------");
        }
        
    }
    
}

void sudoku_solve(sudoku_t ptr)
{
    ptr = NULL;
    fputs("sudoku_solve(): Functionality not (yet) implemented.", stderr);
}
