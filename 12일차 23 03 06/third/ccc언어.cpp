#if 0
//�迭 ó���ϱ� : for
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
//���� ���� :�Լ�
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
//���� ����2 :�Լ�
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
//���� ���� :struct(����ü)
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