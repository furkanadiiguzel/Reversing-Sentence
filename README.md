# Reverse Sentence Words using a Stack

This repository contains C code to reverse the words of a sentence using a stack.

## Code Overview

The code takes a sentence as input, reverses the order of its words, and prints the result. It utilizes a stack data structure to achieve the word reversal.

### Code Components

1. **stack_str.h**: Header file defining stack operations for strings (`stack_t`).
2. **main.c**: Main C file containing the program logic.
   - User inputs a sentence.
   - The program reverses the words using a stack.
   - The reversed sentence is displayed.

## Code Structure

### Files
- `main.c`: Main program file.
- `stack_str.h`: Header file for stack operations.

### Constants
- `_CRT_SECURE_NO_WARNINGS`: Preprocessor directive for Visual Studio (ignores certain warnings).
- `MAXS`: Maximum size of the input sentence.
- `MAXW`: Maximum length of a word in the sentence.

### Functions
- `Reverse`: Reverses the words of the sentence using a stack.

## Usage
1. Input a sentence when prompted.
2. The program will display the reversed sentence.

Feel free to explore and modify the code based on your requirements.

**Note:** Ensure that you have a C compiler to successfully build and run the code.

Happy coding!
