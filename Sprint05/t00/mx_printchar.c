#include <unistd.h>

void mx_printchar(char);

void mx_printchar(char c) {
    write(1, &c, 1);
}
