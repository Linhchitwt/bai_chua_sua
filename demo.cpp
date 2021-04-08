#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
 struct  sinhvien
    {
        char name[50];
        float diem;
    } ds[100];
void input(int n){
  int i =0;
    float d;
    char ten[30];
 do {   printf("Ten sinh vien thu %d : ", i+1);
 fflush(stdin);
    gets(ten);
    if (sizeof(ten)!=0){
        strcpy(ds[i].name, ten);}
    printf ("Nhap vao diem sinh vien : ");
    fflush(stdin);
    scanf("%f", &d);

/*     if (d < 0 && d >10){
        printf("Nhap sai, moi nhap lai");
        scanf("%f", &d);} */
       int k = 0;
    ds[i].diem = d;

      if (d < 5.0 ){
        k++;
        printf("Sinh vien thu %d thi lai : \n", k);
        printf("Ten : %s \n", ds[i].name);
        printf("Diem : %.1f\n", ds[i].diem);
    }
    i++;
}
while (i< n);  
}
/*  void fail(int &d, int &i, char *ten, int n){
    int k=0;
    printf ("Sinh vien thi lai la :\n");
    do{
    if (d < 5.0 ){
        k++;
        printf("Sinh vien thu %d thi lai : ", k);
        printf("Ten : %s \n", ds[i].name);
        printf("Diem : %d\n", d);
    }
    i++;
}
while (i < n);} */
    int main(){
            //n la so sinh vien
        int n,d,i;
        printf("Nhap vao so sinh vien : ");
        scanf ("%d", &n);
            if (n <= 0){
        printf("Khong co sinh vien nao duoc nhap vao");
    }
    else {
            input(n);
            getch();
            return 0;}
   /*  fail(d,i, ds[i].name); */
    }