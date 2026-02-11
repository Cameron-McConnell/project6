Start the program.

Declare necessary variables:

    An input file stream object.

    A string variable to store each line from the file.

    A stringstream object.

    Temporary string variables to store CSV values.

    Integer variables for the two numbers.

    An integer variable to store their sum.

Open the file data.csv.

If the file fails to open:

    Display an error message.

    End the program.

While the file has more lines to read:

    Read one entire line from the file.

    Create a stringstream object using that line.

    Use getline() with a comma delimiter to extract:

        The first number (as a string)

        The second number (as a string)

        The text string

    Convert the first number from string to integer.

    Convert the second number from string to integer.

    Add the two integers together and store the result.

    Use a loop to print the text string the number of times equal to the sum.

    Print a newline after finishing each line.

Close the file.

End the program.
