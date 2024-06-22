/* charcode.c-displays code number for a character */
#include <stdio.h>
int main(void)
{
	char ch;
	
	printf("Please enter a character.\n");
	scanf("%d", &ch);   /* user inputs character */
	printf("The code for %d is %c.\n", ch, ch);
	
	return 0;
}
