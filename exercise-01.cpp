/*
 alvina vania kirana
 140810180010
 exer1
 2019
 */

#include <iostream>
using namespace std;

struct elemenList {
    char data;
    elemenList* next;
};

typedef elemenList* pointer;
typedef pointer list;

void createList (list& first);
void createElemen (pointer& pBaru);
void insertFirst (list& first, pointer& pBaru);
void insertLast (list& first, pointer& pBaru);
void deleteFirst (list& first, pointer& pHapus);
void deleteLast (list& first, pointer& pHapus);
void traversal (list first);

int main() {
    list& first;
    pointer p;
    
    createList (first);
    
    createElemen(first,p);
    insertFirst(first,p);
    
    createElemen(first,p);
    insertFirst(first,p);
    
    createElemen(first,p);
    insertLast(first,p);
    
    traversal (first);
    
    deleteFirst (first,p);
    traversal (first);
    
    deleteLast (first,p);
    traversal (first);
    
    
    return 0;
}

void createList (list& first){
    first=NULL;
}

void createElemen (pointer& pBaru){
    pBaru=new elemenList;
    
}

void insertFirst (list& first, pointer& pBaru){
    if (first==NULL){
        first=pBaru;
    }
    else {
        pBaru->next=first;
        first=pBaru;
    }
}

void insertLast (list& first, pointer& pBaru){
    pointer last;
    if (first==NULL){
        first=pBaru;
    }
    else{
        last=first;
        while (last->next!=NULL){
            last=last->next;
        }
        last->next=pBaru;
    }
}

void deleteFirst (list& first, pointer& pHapus){
    if (first==NULL){
        pHapus=NULL;
        cout << "List Tidak ada"<<endl;
    }
    else if ( first->next==NULL){
        pHapus=first;
        first=NULL;
    }
    else {
        pHapus=first;
        first=forst->next;
        pHapus->next=NULL;
    }
}

void deleteLast (list& first, pointer& pHapus){
    pointer last, precLast;
    if (first==NULL){
        pHapus=NULL;
        cout << "List tidak ada"<<endl;
    }
    else if (first->next==NULL){
        pHapus=first;
        first=NULL;
    }
    else {
        last=first;
        precLast=NULL;
        while ( last->next!=NULL){
            precLast=last;
            last=last->next;
        }
        pHapus=last;
        precLast->next=NULL;
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
            cout << "->"<<endl;
        }
    }
    while (pBantu!=NULL);
    
}

