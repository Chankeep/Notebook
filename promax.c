#include <cs50.h>
#include <stdio.h>

int main()
{
    int g;
    do
    {
        // 询问用户高度
        g = get_int("Height: ");
    } while (g < 1 || g > 10);

    for (int i = 1; i <= g; i++)
    {
        // 左侧空格
        for (int w = 0; w < g - i; w++)
            printf(" ");

        // 左侧#
        for (int l = 0; l < i; l++)
            printf("#");

        // 中间空格
        printf(" ");

        // 右侧#
        for (int p = 0; p < i; p++)
            printf("#");

        // 换行
        printf("\n");
    }
}
// 输出结果
// 根据输入的数字堆出相应高度的金字塔，例如输入“6”
//       # #
//      ## ##
//     ### ###
//    #### ####
//   ##### #####
//  ###### ######    类似于此类的居中金字塔.