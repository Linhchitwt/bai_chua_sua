#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define max 200
struct hanghoa
{
    char MatHang[max];
    int soluong;
    int gia;
} hh[max];
void input(){
    char name[max];
    int moneyy,d,i = 0;
    int size_=0; //dem so phan tu
    do {
        printf("Nhap vao hang hoa thu %d : ", i+1);
        gets(name);
        //copy chuoi
        strcpy(hh[i].MatHang, name);
        printf("Nhap vao so luong : ");
          fflush(stdin);
        scanf("%d", &d);
            hh[i].soluong = d;
        printf("Nhap vao gia tien : ");
        scanf("%d", &moneyy);
            hh[i].gia = moneyy;
        i++;
        size_++;
    }
    // lặp đến khi gặp dấu * thì dừng
    while (strcmp(name, "*")!= 0); 
}
void min(int size_, int &d){
    int min;
    min = hh[0].soluong;
    // tìm hàng hóa có số lượng nhỏ nhất
    for (int i = 0; i< size_; i++){
        if(min > hh[i].soluong){
            min = hh[i].soluong;
        }
    }
    // in ra
        printf("Ten               so luong              gia"); 
    for (int i = 0; i< size_; i++){
        if (hh[i].soluong == min){
            // hàm in bên dưới (dòng 93)
            output_(size_,hh[i].MatHang,hh[i].soluong, i);
        }
    }
}
void new_(int &size_, hanghoa hh[]){
    // thêm 1 hàng hóa vào vị trí k
    size_ = size_ +1;
    int k, money_;
    char namek[max]; // tên hàng hóa đó
    int sl; //số lượng
     printf("Nhap vao vi tri k : ");
     scanf("%d", &k);
     printf("Nhap vao ten : ");
       fflush(stdin);
     gets(namek);
     printf("Nhap vao so luong : ");
       fflush(stdin);
     scanf("%d", &sl);
     printf ("Nhap vao gia tien : ");
     scanf("%d", &money_);
     // chuyển tất cả các hàng hóa từ i -> i+1 (bắt đầu từ vị trí k đến n)
    for (int i = size_; i > k ; i--)
    {
        hh[i] = hh[i+1];
    }
    // thêm hàng hóa k vào 
    strcpy(hh[k].MatHang, namek);
    hh[k].soluong = sl;
    hh[k].gia = money_;
// in
    printf("Danh sach da duoc them la :\n");
    for (int i = 0; i< size_; i++){
    output_(size_,hh[i].MatHang,hh[i].soluong, i);
    }
}
// tính tiền
int money(int size_, hanghoa hh[]){
    int summoney= 0;
    for (int i = 0; i < size_; i++)
    {
        summoney += hh[i].gia * hh[i].soluong;
    }
    return summoney;
}
// hàm in ra
void output_(int size_, char *name, int &sl, int &i){
        printf("%15s%15d%15d", hh[i].MatHang, hh[i].soluong, hh[i].gia);
    }
int main(){
    hanghoa hh[max];
    int size_, i;
   input();
   min(size_,hh[i].soluong);
    new_(size_, hh);
    money(size_, hh);
}
