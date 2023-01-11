#include <stdio.h>
#include <time.h>

#include "arth.h"

#define FILENAME_LENGTH 30

void print_usage(char *file)
{
	printf("%s -[d,e] [input file] [output file]\n", file);
}

int main(/*int argc, char** argv*/)
{
	clock_t start, finish;
	FILE *os, *is;
	double duration;
	int symbol;

	/*if(argc!=4)
	{
		print_usage(argv[0]);
		return 1;
	}*/

	char mode;
  	char inputfilename[FILENAME_LENGTH];
  	char outputfilename[FILENAME_LENGTH];
  	char *infilename;
	char *outfilename;	
	printf("Please input the mode [e(encoding)/d(decoding))]: ");
  	scanf("%c", &mode);
	printf("Please input the input_file name: ");
  	scanf("%s", inputfilename);
  	printf("Please input the output_file name: ");
  	scanf("%s", outputfilename);
	infilename = inputfilename;
  	outfilename = outputfilename;
	printf("Input file: %s\n", infilename);
  	printf("Output file: %s\n", outfilename);
  	printf("Mode: %s\n\n", mode == 'e' ? "encoding" : "decoding");

	if(is = fopen(infilename, "rb"))
	{
		//if(argv[1][0]=='-')
		//{
			os = fopen(outfilename, "wb");

			switch(mode)
			{
			case 'e':

				printf("start encoding...\n");

				init_arth(os);

				start = clock();

				while((symbol=fgetc(is))!=EOF)
				{
					encode(symbol);
				}
				encode(-1);
				close_encode();

				finish = clock();
				
				break;
			case 'd':

				printf("start decoding...\n");

				init_arth(is);
				
				start = clock();

				while((symbol=decode())>=0)
				{
					putc(symbol, os);
				}

				finish = clock();

				break;
			}

			fclose(os);
		//}
		fclose(is);
	}

	duration = (double)(finish - start) / CLOCKS_PER_SEC; //seconds

	printf("time cost: %f\n", duration);
   
	return 0;
}