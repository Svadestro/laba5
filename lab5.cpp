#include <stdio.h>
#include <conio.h>

int main() {
    float x;
    float y;

    printf("\n Введіть значення абсциси та ординати (x та y): ");
    scanf("%f%f", &x, &y);

    if ((x >= -1 && x <= 0 && y >= -1 && y <= 0) || (x >= 0 && y >= 0 && y <= 1 - x)) {
        printf("\nx=%f y=%f Точка M(x,y) належить заштрихованій області. ", x, y);
    } else {
        printf("\nx=%f y=%f Точка M(x,y) не належить заштрихованій області. ", x, y);
    }

    return 0;
}