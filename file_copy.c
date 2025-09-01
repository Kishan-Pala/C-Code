#include <stdio.h>

void file_copy(FILE *fpi, FILE *fpo) {
	int single_char = 0;
	while((single_char = getc(fpi)) != EOF) {
		putc(single_char, fpo);
	}
}

int main() {
	FILE *fpi, *fpo;
	fpi = fopen("input.txt","r");
	fpo = fopen("output.txt","w");
	file_copy(fpi,fpo);
	fclose(fpi);
	fclose(fpo);
	return 0;
}
