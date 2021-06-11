#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
	char str[MAX];
	char *ptr;
	char delimiter[] = " \t\r\n\v\f";

	fgets(str, MAX, stdin);
	char temp[MAX];
	strcpy(temp, str);
	ptr = strtok(str, delimiter);
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, delimiter);
	}

	printf("%s\n", temp);

	//getchar();
	return 0;
}