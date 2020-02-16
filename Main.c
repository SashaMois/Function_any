/*
 * Main.c
 *
 * Function 'any' return number of first pozition
 * in, for example, string s1 that have been have 
 * any character from s2, or -1, if string s1
 * have not been have no one character from s2.
 *
 *  Created to: 16 February
 *     Autor: SashaMois
 */

#include <stdio.h>

int any(char string_for_check[], char string[]);

int main()
{
    char line1[] = "xyd";
    char line2[] = "hello, world";

    printf("%d\n", any(line1, line2));

    return 0;
}

int any(char s1[], char s[])
{
    int i; /* count for 's1'*/
    int j; /* count for 's' */

    for (j = 0; s[j] != '\0'; ++j)
        for (i = 0; s1[i] != '\0'; ++i)
            if (s1[i] == s[j])
                return i;

    return -1;
}