#include <cs50.h>
#include <stdio.h>

int main()
{
    int g;
     do
     {
        //用户选择高度
        g = get_int("Height: ");
     }
     while (g < 1 || g > 10);

     for (int i = 1; i <= g; i++)
     {
        //左侧的空格
        for (int w = 0; w < g - i; w++)
            printf(" ");

        //右侧的#号
        for (int l = 0; l < i; l++)
            printf("#");

         //换行
        printf("\n");
     }
}
//运算结果
//     #
//    ##
//   ###
//  ####
// #####  类似于这样的右对齐金字塔，我设置了上限10但也可以改成更多