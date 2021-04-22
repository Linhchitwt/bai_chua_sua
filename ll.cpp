#include <stdio.h>
#include <stdlib.h>
struct node
{
    float data;
    struct node *pNext;
};
typedef struct node NODE;
struct list
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;
void Init(LIST &l){
    l.pHead= NULL;
    l.pTail = NULL;
}
NODE *pDeclare(float x){
    NODE *p = new NODE;
    if (p == NULL)
    {
        printf("Het bo nho");
        return NULL;
    }
    p->data= x;
    p->pNext = NULL;
    return p;
}
void AddLast(LIST &l, NODE *p){
    if (l.pHead == NULL){
        l.pHead = l.pTail = p ;   }
    else {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
void input(float &x){
    printf("Nhap vao phan tu q = ");
    scanf("%f", &x);
}
void AddElementBehind(LIST &l, NODE *p){
    float x,h;
    input(x);
    NODE *q = pDeclare(x);
        if (q->data == l.pHead->data && l.pHead->pNext== NULL){
            AddLast(l,p);
        }
        else{
         for (NODE *k= l.pHead; k!= NULL; k = k->pNext){
             if (q->data == k->data){
                  NODE *q = pDeclare(x);
        NODE *g = k->pNext;
        p->pNext = g;
        k->pNext = p;
             }
        }
    }
}
void OutPut(LIST &l){
    printf("Danh sach la : \n");
    for (NODE *i = l.pHead; i!= NULL; i = i->pNext){
    printf("%.2f", i->data);}
}
void DSLK(LIST &l){
    int n;
     printf ("Nhap n = "); 
    scanf ("%d", &n);
    Init(l);
    for (int i = 0; i < n ; i++){
        float x;
        printf("Nhap vao so thu %d = ", i+1);
        scanf("%f", &x);
        NODE *p = pDeclare(x);
    }
}
int main(){
    LIST l;
    float q,n,h;
    DSLK(l);
     printf ("Nhap p = "); 
    scanf ("%f", &h);
    NODE *p = pDeclare(h);
    AddElementBehind(l,p);
    OutPut(l);
    return 0;
}