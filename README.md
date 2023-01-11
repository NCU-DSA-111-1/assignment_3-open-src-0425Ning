# Huffman Coding

## Usage
```sh
# Compile
cd D:\\文件\\大四上\\資料結構\\Huffman_coding\\assignment_3\\src
gcc -o main main.c huffman.c utils.c 
# Run
./main
```

Program is designed to use basic archiving algorithm based on Huffman code for encoding & decoding files.

Usage: `<binname.ext> [mode] [input filename] [output filename]`
where mode may be:
                e for encoding (0)
                d for decoding (1)
                qe for fast encoding (2)
source from: https://github.com/ALikhachev/Huffman-code/blob/master/huffman.c

<br />
Please prepare three txt files for this project and put them in the same folder position as the main.c <br />
One is for encoding. There must have some data in the txt file. <br />
One is for saving the data after encoding. <br />
One is for saving the data after decoding. <br />

<br />
For Encoding<br />

Enter the mode that you want to choose: 0 <br />
Enter the name of the file that you want to encode: input.txt <br />
Enter the name of the file where you want the encoding data to be saved: output.txt <br />

Output: <br />
Input file: input.txt <br />
Output file: output.txt <br />
Mode: encoding <br />
time cost: 0.033000 <br />
Input successfully processed. <br />

Check the file to confirm whether your txt Output file has been modified. <br />

<br />
For Decoding<br />

Enter the mode that you want to choose: 1 <br />
Enter the name of the file that you want to encode: output.txt <br />
Enter the name of the file where you want the encoding data to be saved: decode.txt <br />

Output: <br />
Input file: output.txt <br />
Output file: decode.txt <br />
Mode: decoding <br />
time cost: 0.002000 <br />
Input successfully processed. <br />

Check the file to confirm whether your txt Output file has been modified and whether the data is the same as the data that before you encoded. <br />
<br />