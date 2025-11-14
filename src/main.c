#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../includes/declaration.h"

#include "../includes/open.h"

int main(void)
{
    print_declaration();

    while (1)
    {
        // Main Loop Menu
        char command[100];

        printf("P11_6: ");
        scanf("%s", command);

        // Open
        if (strcmp(command, "OPEN") == 0)
        {
            // Open file logic here
            open_file();
            continue;
        }

        // Show all

        // Insert

        // Query

        // Update

        // Delete

        // Save

        // Additional Features
        // Sorting Features
        // Sort by ID
        // Sort by Mark

        // Show Summary

        // Unique additional feature (to be defined)

        // Exit
        if (strcmp(command, "EXIT") == 0)
        {
            break;
        }

        // Pass
        printf("CMS: Invalid command. Please try again.\n\n");
    }

    system("pause");

    return 0;
}