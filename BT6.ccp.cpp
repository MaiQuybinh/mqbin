#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int count = 0;
    int num = 2;

    do {
        printf("Nhap so luong so nguyen to can tim (n > 0): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so nguyen duong lon hon 0.\n");
        }
    } while (n <= 0);

    printf("%d so nguyen to dau tien la: ", n);

    while (count < n) {
        int index = 1; 
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                index = 0; 
                break; 
            }
        }
        if (index==1) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
	return 0;
}
	
	
