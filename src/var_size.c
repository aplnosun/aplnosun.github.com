/************************************************************************
 *  프로젝트 이름 : type in GCC                                          
 *  프로젝트 목적 : GCC 컴파일러에서 자료형의 범위를 구한다.            
 *  소스파일 이름 : main.c                                             
 ************************************************************************/

// 입출력을 위해  stdio.h를 부른다.
#include <stdio.h>

int main(void)
{
    long number = 1;
    long freq = 1;

    while(number > 0)
    {
        number <<= 1;
        printf("freq = %ld, number = %ld \n", freq++, number);
    }

    printf("\n이 자료형의 범위는 %ld ~ %ld 입니다. \n", number, ~number);

    return 0;
}

