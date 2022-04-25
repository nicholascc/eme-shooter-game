// This file provides runtime support for the program. It is used as a library
// for the function print_float, but other than that is just a convenience so
// that you can link the program by compiling this short C program with the
// eme object file.

void print_float(double x) {
  printf("%lf", x);
}

int main();
