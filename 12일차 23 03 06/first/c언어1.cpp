#if 1
#include <stdio.h>
int main(void) {
	printf("%d\n", 3); // ������ int <= integer
	printf("%lf\n", 3.14); // �Ǽ��� double <= double precision
	printf("%s\n", "3.14"); // ���ڿ��� const char *  <= constant character pointer
	printf("%c\n", '3'); // ���ڰ� const char <= constant character(��� ����)
	printf("%c\n", 'a'); // 
}

#endif

#if 0
#include <stdio.h>

// c�� ���� ����
int main(void) {
	printf("%d\n", 3); // ������ int <= integer
	printf("%lf\n", 3.14); // �Ǽ��� double <= double precision
	printf("%s\n", "3.14"); // ���ڿ��� const char *  <= constant character pointer
	printf("%c\n", '3'); // ���ڰ� const char <= constant character(��� ����)
	printf("%c\n", 'a'); // 
}

#endif

#if 0
#include <stdio.h>
# ���� �׸� : ����, ���� ��� : �Ҵ�
int main(void) {
	int a = 3;
	int b = 4;
	print("%d\n", a + b);
	int c = a + b;
	printf("%d\n", c);
	int b = 4;
	a + b;
	int c = a + b;
}
#endif

#if 0
#include <stdio.h>
//������ �ϴ��� : �� ����
int main(void) {
	printf("%d\n", 3 > 4 && 5 > 6); //end
	printf("%d\n", 3 < 4 && 5 < 6);
	printf("%d\n", 3 > 4 ll 5 < 6); //or
	printf("%d\n", 3 < 4 ll 5 > 6);
	printf("%d\n", !(3 < 4)); //not
	printf("%d\n", !(3 > 4));
}
#endif

#if 0
int main(void) {
	int age = 23; //int ��������
	if (age >= 19) {
		print("adult"t\n")";
	}
	else {
		printf("minor\n");
	}
}
#endif

//�Ǵ��ϱ� 3:if-else if-else
#include <stdio.h>
int  main(void) {
	int birth_year = 2004;
	if (1981 <= birth_year && birth_year <= 1996) {
		printf("M generation\n");
	}
	else if (1997 <= birth_year && birth_year <= 2012) {
		printf("Z generation\n");
	}
	else  {
		printf("???\n");
	}
}

#if 0
//���� �ݺ��ϱ� while
#include <stdio.h>
int main(void) {
	int c_level = 0;
	while (c_level < 10000) {
		printf("study c\n");
		c_level += 1;
	}
}
#endif