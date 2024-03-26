#include <stdio.h>

struct student{
	int age; //정수
char name[30];
};

main() {
	struct student s1,s2; //변수 s1

	s1.age = 21;

	//s1.name[0] = "student name";
	strncpy_s (s1.name,30, "학생이름", 20);

	s2.age= s1.age;
	strncpy_s(s2.name, 30, s1.name, 20);

	printf("S1의 나이는 %d이고 이름은 \"%s\"입니다\n", s1.age, s1.name);
	printf("S2의 나이는 %d이고 이름은 \"%s\"입니다\n", s2.age, s2.name);



}