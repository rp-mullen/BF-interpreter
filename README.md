## Description
A tiny interpreter written in C for the esoteric programming language 
[Brainf*ck](https://esolangs.org/wiki/Brainfuck). A Hello World program is included in this repo as well, and can be run with the interpreter in the command line.

## Usage

To run the interpreter, move to the directory containing bf.c and compile/execute:
```
gcc -o bf bf.c 
./bf
```
The program will prompt the user for input code. Write out the code in bf and allow the interpreter to run and produce a readable output in the terminal.

## Example I/O

Input:
```
++++++++++[>+++++++>++++++++++>+++>+<<<<-]
>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

Output: Hello World!
