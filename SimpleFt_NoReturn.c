#include <stdio.h>

/* Function prototype */
void inputAndShow(void);

int main(void) {
    inputAndShow();
    return 0;
    }

/* รับคะแนน 3 วิชา และแสดงผลทันที (No Param, No Return) */
void inputAndShow(void) {
    int math, physics, chemistry;

    printf("Enter Math score: ");
    scanf("%d", &math);
    printf("Enter Physics score: ");
    scanf("%d", &physics);
    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    printf("\n--- Scores ---\n");
    printf("Math      : %d\n", math);
    printf("Physics   : %d\n", physics);
    printf("Chemistry : %d\n", chemistry);
}