/*
    This program reads a file line by line. If successful it can be used to read the Postfix mail log file
    and put it's contents in a database.

    Written by ct 6/08/2024.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Create variable for the filename.
    char logfile[] = "test.txt";

    // Create the file pointer and open the file in read mode.
    FILE* file = fopen(logfile, "r");

    // Buffer to store each line of the file.
    char line[256];

    // Check if the file was opened successfully.
    if (file != NULL) {
        // Read each line from the file and store it in the 'line buffer.
        while (fgets(line, sizeof(line), file)) {
            // Print each line to standard out.
            printf("%s", line);
        }

        // Close the file strean once all lines have been read.
        fclose(file);
    }
    else {
        // Print an error to the standard error stream if the file cannot be opened.
        fprintf(stderr, "Unable to open file!\n");
    }

    return 0;
}