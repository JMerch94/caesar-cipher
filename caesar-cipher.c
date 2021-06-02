#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int shiftInteger;

    printf( "Shift: ");
    scanf("%d", &shiftInteger);

    if (shiftInteger > 26) {
        printf("Shift may not be greater than 26.\n");
        return 1;
    }
    else {
        printf( "\nA shift of %d has been entered.\n", shiftInteger);
    }

    // Receive plaintext
    char str[100];

    printf( "Enter a value: ");
    scanf("%s", str);

    printf( "\nYou entered: %s\n", str);

    // Perform cipher
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = ((str[i] - 65 + shiftInteger) % 26) + 65;
        }
        else if (islower(str[i]))
        {
            str[i] = ((str[i] - 97 + shiftInteger) % 26) + 97;
        }
    }
    printf("ciphertext: %s\n", str);
    return 1;
}
