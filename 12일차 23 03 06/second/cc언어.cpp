
#if 0
//동작반복하기; while
#include <stdio.h>
int main(void) {
	int c_level = 0;
	while (c_level < 1000) {
		printf("study c");
		//c_level += 1;
		c_level++;
		printf("%d\n", c_level);
	}
}
#endif
#if 0
//while-if-break
#include <stdio.h>
int main(void) {
	int c_level = 0;
	while (1) {
		printf("study c");
		c_level++;
		if (c_level >= 10) {
			break;
		}
	}
}
#endif
#include <stdio.h> // include <- import
#include <stdlib.h>

int main(void) { // 
	printf("Be happy %d!", 2023); // %
	system("pause");

	return 0;
}
