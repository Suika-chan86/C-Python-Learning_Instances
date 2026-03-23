#include <stdio.h>

int main(void)
{
    char *m[] = {"January\n","February\n","March\n","April\n","May\n","June\n","July\n","August\n","September\n","October\n","November\n","December\n",};
    int i = 0;
    
    printf("请输入月份：");
    scanf("%d", &i);

    printf("%s", m[i-1]);
}