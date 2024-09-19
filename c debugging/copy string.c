ERROR CODE:

#include <stdio.h>
#include <conio.h>
#include <string.h>
 void main()
{
char string1[20], string2[20];
int i;
printf(” Enter the first STRING you want to copy: \n”);
gets(string1);
for(i=0; string1[i]!=’\0′; i++)
string2[i]=string1[i];
string2[i]=’\0′;
printf(“\n The value of new string after copying old string is :\n”);
puts(string2);
getch();
}

CORRECTED CODE:

#include <stdio.h>
#include <string.h>
void main() {
    char string1[20], string2[20];
    int i;
    printf("Enter the first STRING you want to copy: \n");
    fgets(string1, sizeof(string1), stdin);
    for(i = 0; string1[i] != '\0'; i++) {
        string2[i] = string1[i];
    }
    string2[i] = '\0';  
    printf("\nThe value of the new string after copying the old string is:\n");
    puts(string2);
}


OUTPUT:

Enter the first STRING you want to copy: 
hello

The value of the new string after copying the old string is:
hello
