/* praise2.c */
// try the %u or %lu specifiers if your implementation
// does not recognize the %zd specifier
#include <stdio.h>
#include <string.h>      /* provides strlen() prototype */
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];
	
	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %u letters occupies %u memory cells.\n",
			strlen(name), sizeof name);
	printf("The phrase of praise has %u letters ",
			strlen(PRAISE));
	printf("and occupies %u memory cells.\n", sizeof PRAISE);
	
	return 0;
}
