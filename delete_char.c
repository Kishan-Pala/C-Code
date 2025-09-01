#include <stdio.h>

void delete_char_from_str(char *str, char c) {
	int i = 0, j = 0;
#if 0
	for(i=j=0; str[i] != '\0';i++) {
		if(str[i] != c) {
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
#endif
	while(str[i] != '\0') {
		if(str[i] != c) {
                         str[j++] = str[i];
                 }
		i++;
	}
	str[j] = '\0';
}

int main() {
	char str[50] = "hello world";
	printf("String before:%s\n", str);
	delete_char_from_str(str,'o');
	printf("String after:%s\n", str);
	return 0;
}
