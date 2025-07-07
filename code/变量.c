//变量一些表达方法
int a, b, c;
int a = 10, b = 9, c = 8;
int a, b, c = 8;
int a, b, c;
a = b = c = 10;

//float(单精度浮点) double(双精度浮点)
float a = 1.0;
double b = 1.0;

//修改变量的值 会改变原来的值
int a = 10;
a = 20;

//查看输出变量
int a = 10 b = 11;
printf("a = %d, b = %d", a, b);

double mark = 99.5;
char rank = 'A';
printf("分数是:%.2f, 等级是:%c", mark, rank);//%.2f 保留两位小数

//在 printf 中，%lf 和 %f 是等效的，都可以用于输出 double 类型的变量。C标准规定 printf 的 %f 和 %lf 在输出 double 时行为相同
//float double 默认保留6位小数

float a = 1.0
double b = 2.00
printf("%f", a);
printf("%lf", b);


