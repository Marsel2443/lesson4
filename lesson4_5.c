/*Определить уравнение прямой по координатам двух точек. Уравнение вида y=k*x+b
Данные на входе:        Четыре целых числа через пробел. Координаты X1 Y1 X2 Y2
Данные на выходе:     Два числа k,b в формате "%.2f %.2f"
Пример №1
Данные на входе:        6 9 -1 3
Данные на выходе:     0.86 3.86
Пример №2     
Данные на входе:        1 2 3 4
Данные на выходе:     1.00 1.00
*/

#include <stdio.h>

int main()
{
    int X1, X2, Y1, Y2 ;    
    float k , b ;
    printf("Input number:\n");
    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
    k = (float)(Y2-Y1)/(X2-X1);
    b = (float)(Y1-k*X1);        
    printf("%.2f %.2f", k, b);     
    return 0;
}
