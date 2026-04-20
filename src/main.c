#include <stdio.h>
#include <math.h>

// 1. Chu vi
float chuVi(float a, float b) {
    if (a <= 0 || b <= 0) return -1;
    return 2 * (a + b);
}

// 2. Diện tích
float dienTich(float a, float b) {
    if (a <= 0 || b <= 0) return -1;
    return a * b;
}

// 3. PT bậc 2
void giaiPT(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) printf("Vo nghiem\n");
        else printf("x = %.2f\n", -c / b);
        return;
    }
    float d = b*b - 4*a*c;
    if (d > 0)
        printf("x1=%.2f, x2=%.2f\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else if (d == 0)
        printf("Nghiem kep x=%.2f\n", -b/(2*a));
    else
        printf("Vo nghiem\n");
}

// 4. Ngày trong tháng
int soNgay(int thang, int nam) {
    if (thang < 1 || thang > 12) return -1;
    if (thang == 2)
        return (nam%400==0 || (nam%4==0 && nam%100!=0)) ? 29 : 28;
    if (thang==4||thang==6||thang==9||thang==11) return 30;
    return 31;
}

// 5. Số nguyên tố
int laSNT(int n) {
    if (n < 2) return 0;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}

// 6. Tổng xen kẽ
int tongXenKe(int n) {
    if (n < 0) return -1;
    int s=0;
    for (int i=1;i<=n;i++)
        s += (i%2==0)? -i : i;
    return s;
}

// 7. UCLN
int ucln(int a, int b) {
    if (a==0 && b==0) return -1;
    while (b!=0) {
        int r=a%b;
        a=b;
        b=r;
    }
    return abs(a);
}

// 8. Tổng giai thừa
long long giaiThua(int n){
    long long f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

long long tongGT(int n){
    if(n<0) return -1;
    long long s=0;
    for(int i=1;i<=n;i++) s+=giaiThua(i);
    return s;
}

int main(){
    printf("Chu vi (5,3): %.2f\n", chuVi(5,3));
    printf("Dien tich (5,3): %.2f\n", dienTich(5,3));
    
    giaiPT(1,-3,2);

    printf("Ngay thang 2/2024: %d\n", soNgay(2,2024));

    printf("7 la SNT: %d\n", laSNT(7));

    printf("Tong xen ke n=5: %d\n", tongXenKe(5));

    printf("UCLN(12,18): %d\n", ucln(12,18));

    printf("Tong giai thua n=5: %lld\n", tongGT(5));

    return 0;
}
