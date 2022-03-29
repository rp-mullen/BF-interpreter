#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// initialize tape and pointer
unsigned char tape[30000] = {0};
unsigned char* ptr = tape;


void interpret(char* input) {
    char current;
    int loop;

    for (int i = 0; input[i] != 0; i++) {

        // analyze each command index-by-index
        current = input[i];
        switch(current) {

        // increment pointer position
          case '>': ++ptr;
            break;


        // decrement pointer position
          case '<': --ptr;
            break;

        // increment pointer byte
          case '+': ++*ptr;
            break;

        // decrement pointer byte
          case '-': --*ptr;
            break;

        // output pointer byte
          case '.': putchar(*ptr);
            break;

        // take input byte
          case ',': *ptr = getchar();
            break;

        // loop/jump until pointer byte is zero
          case '[': continue;
            break;
          }

        if (current == ']' && *ptr) {
          loop = 1;
          while (loop > 0) {
              current = input[--i];
              if (current == '[') {
                  loop--;
              }
              else if (current == ']') {
                      loop++;
              }
          }
      }
    }
}

int main() {
  // open for input
    char str[100];
    printf("Input Code: ");
    scanf("%s", str);

    // run interpreter
    interpret(str);

    return 0;
}
