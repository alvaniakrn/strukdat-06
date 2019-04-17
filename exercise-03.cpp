/*
 alvina vania kirana
 140810180010
 exer3
 2019
 */

#include <iostream>
using namespace std;

struct elemenList {
    char data;
    elemenList* next;
    elemenList* prev;
};

typedef elemenList pointer;
typedef pointer list;

void createList (list& first);
void createElemen(pointer& pBaru);
void insertFirst (list& first, pointer& pBaru);
void insertLast (list& first, pointer& pBaru);
void deleteFirst (list& first, pointer& pHapus);
void deleteLast (list& first, pointer& pHapus);
void traversal (list& first);

int main() {
    list first;
    pointer p;
    
    createList (first);
    
    createElemen(p);
    insertFirst(first,p);
    
    createElemen(p);
    insertFirst(first,p);
    
    createElemen(p);
    insertFirst(first,p);
    
    createElemen(p);
    insertFirst(first,p);
    
    createElemen(p);
    insertLast(first,p);
    
    traversal (first);
    
    deleteFirst(first,p);
    traversal(first);
    
    deletLast(first,p);
    traversal(first);
    
    return 0;
}


void createList (list& first){
    first=NULL;
}

void createElemen(pointer& pBaru){
    pBaru=new elemenList;
    cout << "Masukkan data"; cin pBaru->data;
    pBaru->next=NULL;
    pBaru->prev=NULL;
}

void insertFirst (list& first, pointer& pBaru){
    if (first==NULL){
        first=pBaru;
        first->next=first;
        first->prev=first;
    }
    else {
        pBaru->next=first;
        pBaru->prev=first->prev;
        first->prev->next=pBaru;
        first->prev=pBaru;
        first=pBaru;
    }
}

void insertLast (list& first, pointer& pBaru){
    pointer last;
    if (first==NULL){
        first=pBaru;
        pBaru->next=first;
        pBaru->prev=first;
    }
    else{
        last=pBaru;
        while(last->next!=first){
            last=last->next;
        }
        last->next=pBaru;
        pBaru->prev=last;
        pBaru->next=first;
        first->prev=pBaru;
    }
}

void deleteFirst (list& first, pointer& pHapus){
    pHapus=first;
    if (first==NULL){
        pHapus=NULL;
        cout << "List tidak ada"<<endl;
    }
    else if (first->next==first){
        first->next=NULL;
        first->prev=NULL;
        first=NULL;
    }
    else{
        first->next->prev=first->prev;
        first->prev->next=first->next;
        first=first->next;
        pHapus->next=NULL;
        pHapus->prev=NULL;
        pHapus=NULL;
    }
}

void deleteLast (list& first, pointer& pHapus){
    pHapus=first;
    if (first==NULL){
        pHapus=NULL;
        cout << "List tidak ada"<<endl;
    }
    else if (first->next==first){
        first->next=NULL;
        first->prev=NULL;
        first=NULL;
    }
    else{
        pointer prevLast;
        while(pHapus->next!=first){
            prevLast=pHapus;
            pHapus=pHapus->next;
        }
        prevLast->next=first;
        pHapus->prev=NULL;
        pHapus->next=NULL;
        pHapus=NULL
    }
}

void traversal (list& first){
    pointer pBaru;
    if (first==NULL){
        cout << "List tidak ada"<<endl;
    }
    else {
        pBantu=first;
    }
    do{
        cout << pBantu->data;
        pBantu=pBnatu->next;
        if (pBantu->next!=NULL){
            cout << "<-->"<<endl;
        }
    }
    while (pBantu!=NULL);
}
