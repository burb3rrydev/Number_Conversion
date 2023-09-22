# Number_Conversion

Overview

This C program takes an integer input from the user, validates that it falls within the range of 0 to 1000, and performs various operations on the input. The operations include converting the input to binary and hexadecimal representations, shifting it left by 10 bits, masking out the lower 10 bits, and performing a logical OR operation. The program then displays the results in decimal, hexadecimal, and binary formats.
Instructions

Follow these instructions to compile and run the program:

    Open a text editor or integrated development environment (IDE) that supports C programming, such as Code::Blocks, Visual Studio, or a command-line text editor.

    Copy and paste the provided C code into a new file. Save the file with a .c extension, for example, number_operations.c.

    Compile the program using a C compiler. If you're using a command-line interface, navigate to the directory where the file is located and run the following command (replace gcc with your C compiler if necessary):

gcc -o number_operations number_operations.c

This command will generate an executable file named number_operations in the same directory.

Run the compiled program by executing the following command:

    ./number_operations

    Follow the on-screen instructions to input a number between 0 and 1000 when prompted.

    The program will perform various operations on the input number and display the results in binary, hexadecimal, and decimal formats.

    After the program finishes executing, it will return to the command prompt.

Code Explanation

Here's a brief explanation of what the code does:

    The program starts by declaring an integer variable number to store the user's input.

    It prompts the user to enter a number between 0 and 1000 and reads the input using the scanf function.

    It checks whether the input number is within the specified range (0 to 1000). If the input is invalid, it prints an error message and exits with an error code (1).

    The program converts the input number to binary and prints the binary representation.

    It converts the input number to hexadecimal and prints the hexadecimal representation.

    It shifts the input number left by 10 bits, masks out the lower 10 bits, and performs a logical OR operation with 0x3FF.

    The program prints the shifted and masked result in both decimal and hexadecimal formats.

    Finally, it prints the binary representation of the shifted and masked result.

    The program exits with a success code (0).

Example Output

Here is an example of what the program's output might look like:

Please enter a number between 0 and 1000: 42
Binary representation: 00000000000000000000000000101010
Hexadecimal representation: 0x2A
Shifted and masked decimal result: 10752
Shifted and masked hexadecimal result: 0x2A00
Shifted and masked binary result: 00101010000000000000000000000000

This output demonstrates the various operations performed on the input number (42).
