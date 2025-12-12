int main(int argc, char *argv[]) {

    // car : 1 opérande
    if (argc == 3 && strcmp(argv[1], "car") == 0) {
        double a = atof(argv[2]);
        printf("%f\n", _car(a));
        return 0;
    }

    // add/sub/mul/div : 2 opérandes
    if (argc == 4) {
        char* op = argv[1];
        double a = atof(argv[2]);
        double b = atof(argv[3]);
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(a, b);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(a, b);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(a, b);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(a, b);
        }
        else {
            fprintf(stderr, "Erreur: operation inconnue (add/sub/mul/div/car)\n");
            return 1;
        }

        printf("%f\n", r);
        return 0;
    }

    fprintf(stderr, "Usage:\n");
    fprintf(stderr, "  %s add <a> <b>\n", argv[0]);
    fprintf(stderr, "  %s sub <a> <b>\n", argv[0]);
    fprintf(stderr, "  %s mul <a> <b>\n", argv[0]);
    fprintf(stderr, "  %s div <a> <b>\n", argv[0]);
    fprintf(stderr, "  %s car <a>\n", argv[0]);
    return 1;
}
