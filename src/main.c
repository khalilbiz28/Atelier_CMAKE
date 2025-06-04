#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    if (argc == 4) {
        char* op = argv[1];
        double a = atof(argv[2]);
        double b = atof(argv[3]);
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(a, b);
        } else if (strcmp(op, "sub") == 0) {
            r = _sub(a, b);
        } else if (strcmp(op, "mul") == 0) {
            r = _mul(a, b);
        } else if (strcmp(op, "div") == 0) {
            r = _div(a, b);
        } else {
            printf("Erreur de parametres\n");
            return 1;
        }
        printf("%lf\n", r);
    }
    else if (argc == 3) {
        char* op = argv[1];
        double a = atof(argv[2]);
        double r = 0;

        if (strcmp(op, "car") == 0) {
            r = _car(a);
            printf("%lf\n", r);
        } else {
            printf("Erreur de parametres\n");
            return 1;
        }
    }
    else {
        printf("Erreur de parametres\n");
        return 1;
    }

    return 0;
}
