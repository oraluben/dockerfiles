#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("t1.txt", "w");
    // fprintf(f, "\t \tMD5 (");
    fprintf(f, "MD5 (");
    fclose(f);

    f = fopen("t2.txt", "w");
    fprintf(f, "\b\b\b\b\b\b\b\t");
    fclose(f);

    f = fopen("t3.txt", "w");
    fprintf(f, "\n");
    fclose(f);

    f = fopen("t4.txt", "w");
    fprintf(f, "a");
    fclose(f);

    return 0;
}
