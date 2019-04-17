/*
 alvina vania kirana
 140810180010
 exer2
 2019
 */

#include <iostream>
using namespace std;

struct elemenList{
    char data;
    elemenList* next;
    elemenList* prev;
};

typedef elemenList* pointer;
typedef pointer list;

void createList (list& first);
void createElemen (pointer& pBaru);
void insertFirst (list& first, pointer& pBaru);
void deleteFirst (list& first, pointer& pHapus);
void insertLast (list& first,pointer& pBaru);
void deleteLast (list& first, pointer& pHapus);
void traversal (list& first);


int main() {
    list first;
    pointer p;
    
    createList(first);
    
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
    
    traversal(first);
    
    deleteFirst(first,p);
    traversal(first);
    
    deleteLast(first,p);
    traversal(first);
    
    
    
    return 0;
}

void createList (list& first){
    first=NULL;
}

void createElemen (pointer& pBaru){
    pBaru=new elemenList;
    cout << "Masukkan data";cin>> pBaru->data;
    pBaru->next=NULL;
    pBaru->prev=NULL;
}

void insertFirst (list& first, pointer& pBaru){
    if(first==NULL){
        first=pBaru;
    }
    else{
        pBaru->next=first;
        first->prev=pBaru;
        first=pBaru;
    }
}

void deleteFirst (list& first, pointer& pHapus){
    if (first==NULL){
        pHapus=NULL;
        cout << "List tidak ada"<<endl;
    }
    else if(first->next==NULL){
        pHapus=first;
        first=NULL;
    }
    else{
        pHapus=first;
        first=first->next;
        pHapus->next=NULL;
        first->prev = NULL;
    }
    
}

void insertLast (list& first,pointer& pBaru){
    pointer last;
    if(first==NULL){
        first=pBaru;
    }
    else{
        last=first;
        while(last->next!=NULL){
            last = last->next;
        }
        last->next=pBaru;
        pBaru->prev = last;
    }
}

void deleteLast (list& first, pointer& pHapus){
    pointer last, preclast;
    if(first==NULL){
        pHapus=NULL;
        cout << "List tidak ada" << endl;
    }
    else if (first->next==NULL){
        pHapu=first;
        first=NULL;
    }
    else{
        last=first;
        preclast=NULL;
        while(last->next!=NULL){
            preclast=last;
            last=last->next;
        }
        pHapus=last;
        last->prev->next = NULL;
        pHapus->prev = NULL;
        preclast->next = NULL;
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


