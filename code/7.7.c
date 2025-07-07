//计算器计算多个商品价格并找零
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    float price;//价格 
    int quantity;//数量
    float total_amount = 0.0;//总金额初始值为0.0 
    
    char input[100];//数据最大存储量100 
  
    int exit_flag = 0;//exit_flag程序退出的标志 初始化为 0，表示程序应该继续运行 当用户输入特定命令（如空格）时，exit_flag 被设置为 1，循环结束，程序退出
	

    printf("商品价格计算程序\n");
    printf("输入商品价格和数量（例如：10.5 2），输入空格退出\n");

    while (!exit_flag) {
        printf("请输入: ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("输入错误，请重新输入。\n");
            continue;
        }

        input[strcspn(input, "\n")] = '\0';// 去除换行符

        if (strcmp(input, " ") == 0 || strcmp(input, "") == 0) {// 检查是否输入空格或其他退出命令
            exit_flag = 1;
            continue;
        }

        if (sscanf(input, "%f %d", &price, &quantity) != 2) {// 尝试解析输入为两个浮点数或整数
            printf("输入格式错误，请重新输入（价格 数量）。\n");
            continue;
        }

        float current_total = price * quantity;// 计算当前商品总价
        total_amount += current_total;

        printf("当前商品总价: %.2f\n", current_total);
        printf("累计总价: %.2f\n", total_amount);
    }

   
    float payment; // 输入付款金额
    printf("请输入付款金额: ");
    if (scanf("%f", &payment) != 1) {
        printf("输入错误，请重新运行程序并输入有效的付款金额。\n");
        return 1;
    }

    float change = payment - total_amount; // 计算应找零
    printf("应找零: %.2f\n", change);

    return 0;
}
