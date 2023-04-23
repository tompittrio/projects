/*
파일명 : ex04-01-printf.c

printf() 함수
    콘솔 화면에 문자열 출력 함수

제어문자
    \t 탭(tab)
    \n 줄바꿈
    \b 한 칸 왼쪽으로 이동 
    \r 맨 앞으로 이동
    \a 경고음
    \' 작은 따옴표
    \" 큰 따옴표
    \? 물음표
    \\ 백슬래시

형식문자(서식문자)
    %d : 부호있는 10진수
    %u : 부호없는 10진수
    %o : 부호없는 8진수
    %x : 부호없는 16진수
    %f : 10진수 방식의 부동소수점 실수
    %e : 지수 방식의 부동소수점 실수
    %c : 값에 대응하는 문자
    %s : 문자열
    %p : 포인터 주소 값
    %% : % 를 출력 문자로 
    
*/

#include <stdio.h>

int main(void)
{

    // 콘솔에 출력하기
    printf("I LOVE C LANGUAGE!\n");
    printf("It is so funny!\n");

    /*
    이스케이프 시퀀스의 \ 기호는 
    글꼴에 따라 ￦ 기호로 대체 가능하다.
    */

   /* 콘솔 터미널 오류 껐다 켜기*/

   printf("\" I am a boy.\"\n");
   printf("\" I am a \' boy\.\n");
   printf("\" I\tam\ta\tboy.\n");
   printf("\" I\bam a boy.\n");
   printf("\" I am a boy\\\?\n");
 
 char character = 'x'; // 문자하나만 문자열 안됨
 int inumber = 92;
 double dnumber = 20.201005;

 printf("%c\n", character);
 printf("%d\n", character);
 printf("%d\n", inumber);
 printf("%x\n", inumber); // 키오스크나 기계적 디바이스 임베디드는 데이터표현이 있을 수 있음
 printf("%o\n", dnumber);
 printf("%f\n", dnumber);
 printf("%e\n", dnumber);
 
char character2 = 'h';
int num = 548;
printf("%5c\n", character2); // 5칸을 활용해서 표현하고 양수니까 우측정렬
printf("%-5c\n", character2);// 5칸을 활용해서 표현하고 음수니까 좌측정렬
printf("%10d\n", num); // 10칸을 활용해서 표현하고 양수니까 우측정렬
printf("%-10d\n", num);// 10칸을 활용해서 표현하고 음수니까 좌측정렬

float fnum = 1.234567;
printf("%10f\n", fnum); //소수점 표현
printf("%-10f\n", fnum);
printf("%10.3f\n", fnum); // 소수점 이하자리 자리정하기
printf("%-10.3f\n", fnum);

return 0;

}