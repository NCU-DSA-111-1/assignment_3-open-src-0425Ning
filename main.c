#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "huffman.h"

#define FILENAME_LENGTH 30

const char *messages[] =
{
  "Input successfully processed.\n",
  "Can't open input file to read.\n",
  "Can't open output file to write.\n"
};

int main(/*int argc, char *argv[]*/)
{
  int mode;
  char inputfilename[FILENAME_LENGTH];
  char outputfilename[FILENAME_LENGTH];
  char *infilename;
  char *outfilename;
  //mode = (argc > 1) ? (!strcmp(argv[1], "e") ? 0 : (!strcmp(argv[1], "qe") ? 2 : 1)) : 0;
  //infilename = argc > 2 ? argv[2] : "input.txt";
  //outfilename = argc > 3 ? argv[3] : "output.txt";
  printf("Please input the mode [0(encoding)/1(decoding)/2(quick encoding)]: ");
  scanf("%d", &mode);
  printf("Please input the input_file name: ");
  scanf("%s", inputfilename);
  printf("Please input the output_file name: ");
  scanf("%s", outputfilename);
  //infilename = "input.txt";
  //outfilename = "output.txt";
  infilename = inputfilename;
  outfilename = outputfilename;

  setlocale(LC_ALL, "");
  printf("Input file: %s\n", infilename);
  printf("Output file: %s\n", outfilename);
  printf("Mode: %s\n\n", mode == 0 || mode == 2 ? "encoding" : "decoding");

  printf("%s", messages[doHuffman(infilename, outfilename, mode)]);

  return 0;
}
