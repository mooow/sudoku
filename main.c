#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"

int main(int argc, char **argv)
{
    sudoku_t sdk;
    FILE *fp;
    
    if(argc != 2) {
        fputs("Syntax: %s <file>\n", stderr);
        return 1;
    }
    
    if(NULL == (fp = fopen(argv[1], "r"))) {
        perror("Could not open file");
        return 2;
    }
    
    sdk = sudoku_fromfile(fp);
    s
    sudoku_print(sdk, NULL);
    sudoku_solve(sdk);
    sudoku_free(sdk);
    
    return 0;
}
