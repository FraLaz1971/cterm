#include <stdio.h>
int main(void) {
     // Green text
     printf("\x1b[32mHello, World\n");
     // Reset colors to defaults
     printf("\x1b[0m");
 }
