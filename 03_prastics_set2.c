#include <stdio.h>

int main()
{
    int physics, chemistry, math;
    float total;
    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter Math Marks\n");
    scanf("%d", &math);
    total = physics + chemistry + math / 3;
    if ((total < 40) || physics < 33 || chemistry < 33 || math < 33)
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }

    return 0;
}