#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
    printf("Hello There from docker alpine linux.\n");
    printf("argv[1] =  %s\n", argv[1]);
    double square_root = sqrt(atof(argv[1]));
    printf("sqrt(%s) = %f\n", argv[1], square_root);
    return EXIT_SUCCESS;
}
