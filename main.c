#include <stdio.h>

// Hàm nhập dãy số

void nhapDaySo(int a[], int *n) {
    printf("Nhap so luong phan tu n: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}


// Hàm xuất dãy số

void xuatDaySo(int a[], int n) {
    printf("Day so: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}


// Hàm sắp xếp dãy số tăng dần (Sử dụng thuật toán Interchange Sort)
// hoán đổi vị trí 
void sapXepTangDan(int a[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm đếm số phần tử chẵn
int demSoChan(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
// Hàm main điều khiển chương trình
int main()
{
  int n;
    int a[100]; // Khai báo mảng tối đa 100 phần tử

    // Nhập số lượng phần tử với kiểm tra điều kiện
    do {
        printf("Nhập số lượng phần tử của dãy (1 - 100): ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("Số lượng phần tử không hợp lệ. Vui lòng nhập lại!\n");
        }
    } while (n <= 0 || n > 100);

    // 1. Gọi hàm nhập dãy số
    nhapDaySo(a, n);

    // 2. Gọi hàm xuất dãy số vừa nhập
    printf("\nDãy số vừa nhập là: ");
    xuatDaySo(a, n);

    // 3. Gọi hàm đếm số phần tử chẵn
    int soChan = demSoChan(a, n);
    printf("Số lượng phần tử chẵn trong dãy là: %d\n", soChan);

    // 4. Gọi hàm sắp xếp tăng dần
    sapXepTangDan(a, n);
    printf("Dãy số sau khi sắp xếp tăng dần là: ");
    xuatDaySo(a, n);

  return 0;
}
