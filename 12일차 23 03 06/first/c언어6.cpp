#endif
#if 0
//판단하기 3:if-else if-else
#include <stdio.h>
int  main(void) {
	int birth_year = 2004;
	if (1981 <= birth_year && birth_year <= 1996) {
		printf("M generation\n");
	}
	else if (1997 <= birth_year && birth_year <= 2012) {
		printf("Z generation\n);
	else {
		printf("???\n");
	}
	}
}
#endif
//동작 반복하기 while
#include <stdio.h>
int main(void) {
	int c_level = 0;
	while (c_level < 10000) {
		printf("study c\n");
		c_level += 1;
	}
}