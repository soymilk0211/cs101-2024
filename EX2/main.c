/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    FILE *fp;
    int a[] = {0, 1, 2};
    char b[] ="abc";
    float c[] = {1.1, 1.2, 1.3};
    int i;

    
    fp = fopen("a.bin", "w"); 

    
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        fprintf(fp, "%d", a[i]); 
    }
    

    fprintf(fp, "\n");

    fprintf(fp, "%s\n", b);

    for (i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
        fprintf(fp, "%.5f", c[i]);
    }

    fclose(fp);

    return 0;
}
