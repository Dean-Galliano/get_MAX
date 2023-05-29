#include <stdio.h>

int max(int data[], int n);

int main(void)
{

    int n,result;
    int data[] = {/*89,56,12,78,58,65,47,32,14,58,98,65,47,51,25,36,27,89,45,56,78 any sequences*/};
    n = sizeof(data) / sizeof(int);


    result = max(data, n);
    printf("%d",result);

    return 0;
}



int max(int data[], int n) {
    int max; 
    int i;

    max = data[0];

    for (i = 0; i < n; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    return max;
}
