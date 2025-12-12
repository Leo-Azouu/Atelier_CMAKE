int main(int argc, char *argv[]) {

    double r = 0;

    /* cas add / sub / mul / div */
    if (argc == 4) {
        char* op = argv[1];
        char* a = argv[2];
        char* b = argv[3];

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            printf("%f", r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
            printf("%f", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
            printf("%f", r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
            printf("%f", r);
        }
        else {
            printf("Erreur de parametres");
        }
    }

    /* cas car */
    else if (argc == 3 && strcmp(argv[1], "car") == 0) {
        double a = atof(argv[2]);
        printf("%f", _car(a));
    }

    else {
        printf("Erreur de parametres");
    }

    return 0;
}
