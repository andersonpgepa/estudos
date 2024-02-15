#include <stdio.h>

int main() {
    float array[] = {6.0, 7.0, 4.3, 6.0, 5.5};
    int i;
    array[0] = array[1] + array[3];
    printf("%.1f\n", array[0]);
    return 0;
}