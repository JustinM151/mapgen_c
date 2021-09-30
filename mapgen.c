#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char* filename = "map.bmp";
  int width  = 1024;
  int height = 1024;

  if (argc >= 2) {
    filename = argv[1];
  }

  if (argc >= 3) {
    width = atoi(argv[2]);
  }

  if (argc >= 4) {
    height = atoi(argv[3]);
  }

  printf("Welcome to MapGen!\n");
  printf("Writing to file %s\n", filename);
  printf("Map Resolution [%d x %d]\n", width,height);


  return 0;
}