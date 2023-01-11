# Arithmetic Coding

## Usage
```sh
# Compile
cd D:\\文件\\大四上\\資料結構\\Arithmetic_coding\\assignment_3\\src
gcc -o main main.c arth.c bitstream.c 
# Run
./main
```

Program is designed to use basic archiving algorithm based on Arithmetic code for encoding & decoding files.

Usage: `<binname.ext> -[d,e] [input file] [output file]`
where mode may be:
                e for encoding
                d for decoding

source from: https://par.cse.nsysu.edu.tw/~homework/algo01/8934609/index.html

<br />
Please prepare three txt files for this project and put them in the same folder position as the main.c <br />
One is for encoding. There must have some data in the txt file. <br />
One is for saving the data after encoding. <br />
One is for saving the data after decoding. <br />

<br />
For Encoding<br />

Enter the mode that you want to choose: e <br />
Enter the name of the file that you want to encode: input.txt <br />
Enter the name of the file where you want the encoding data to be saved: output.txt <br />

Output: <br />
Input file: input.txt <br />
Output file: output.txt <br />
Mode: encoding <br />
start encoding... <br />
time cost: 0.006000 <br />

Check the file to confirm whether your txt Output file has been modified. <br />

<br />
For Decoding<br />

Enter the mode that you want to choose: d <br />
Enter the name of the file that you want to encode: output.txt <br />
Enter the name of the file where you want the encoding data to be saved: decode.txt <br />

Output: <br />
Input file: output.txt <br />
Output file: decode.txt <br />
Mode: decoding <br />
start decoding... <br />
time cost: 0.008000 <br />

Check the file to confirm whether your txt Output file has been modified and whether the data is the same as the data that before you encoded. <br />
<br />