#if 0
//배열 처리하기 : for
#include <stdio.h>
int main(void) {
	int eggs[10000] = { 0, 1, 2, 3 };
	eggs[99] = 99;
	for (int i = 0; i< 10000; i++) {
		printf("%d\n", eggs[i]);
	}
}
#endif
#if 0
//동작 묶기 :함수
#include <stdio.h>
int add(int a, int b) {
	return a + b;
}
int main(void) {
	int a = 1, b = 2;
	int c = add(a, b);
	printf("%d\n", c);
}

#endif
#if 0
//동작 묶기2 :함수
#include <stdio.h>
int is_adult(int age) {
	return age >= 19; // True=>1, False=>0
}

int main(void) {
	int	my_age = 17;
	printf("%d\n", is_adult(my_age));
}
//int, double,char
#endif
//변수 묶기 :struct(구조체)
#include <stdio.h>

struct Student {
	char name[20];
	int age;
};
int main(void) {
	struct Student student_1 = { "Brad",21};
	printf("%s\n", brad.name);
	printf("%d\n", brad.age);
}