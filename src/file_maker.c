#include "file_maker.h"

int main()
{
    long result[MAX] = {0, };
    long i = 0;
    long j = 0;
    long tmp = 0;
    long swp = 0;

    srand(time(NULL)); // seed 사용

    FILE *fp;

    fp = fopen("number.in", "w+a");
    if (fp==NULL) {
        printf("파일 쓰기 오류\n");
        exit(1);
    }

    for (j=0; j < REPEAT; j++) {
        for ( i=0; i < MAX; i++) {
            result[i] = i + MAX*j;      /* MAX 만큼씩 더함 */
        }

        for ( i=0; i < MAX; i++) {
            tmp = result[rand()%MAX];
            swp = result[tmp-MAX*j];    /* 인덱스 범위 안으로 조정 */
            result[tmp-MAX*j] = result[i];
            result[i] = swp;
        }

        for ( i=0; i < MAX; i++) {
            fprintf(fp, "%07ld\n", result[i]);
        }
    }
    fclose(fp);

    return 0;
}


