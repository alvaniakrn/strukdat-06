/*
 alvina vania kirana
 140810180010
 exer4
 2019
 */

#include <iostream>
using namespace std;

struct contact {
    char nama;
    char nomor;
    contact* nextC;
};

struct index {
    char info;
    contact* firstC;
    index* next;
};

typedef index* pointerI;
typedef contact* pointerC;

typedef pointerI listI;

void createListI (listI& first);
void createElemenI (pointerI& pBaruI);
void createElemenC (pointerP& pBaruC);
void traversalI (listI first);
void insertfirstI (listI& first, pointerI& pBaruI);
void insertfirstC (listI& first, pointerC& pBaruC);
void deleteFirstI (listI& first, pointerI& pHapusI);
void deleteFirstC (listI& first, pointerC& pHapusC);
void updateContact(listI& first);
void traversalIC (listI& first);

int main() {
    listI first;
    pointerI i;
    pointerP p;
    
    while (1){
        cout << "Pilih :"<<endl;
        cout << "1. Insert First Index"<<endl;
        cout << "2. Delete First Pegawai"<<endl;
        cout << "3. Insert First Divisi"<<endl;
        cout << "4. Delete First Divisi"<<endl;
        cout << "5. Cari Data"<<endl;
        cout << "6. Cetak Data"<<endl;
        cout <<endl;
        cout << "Masukkan pilihan : ";cin>>pilih;
        switch (pilih)
    
    return 0;
}


void createListI (listI& first){
    first=NULL;
}

void createElemenI (pointerI& pBaruI){
    pBaruI= new index;
    cout << "Masukkan abjad";cin>> pBaruI->info;
    pBaruI->next=NULL;
    pBaruI->firstC=NULL;
}

void createElemenC (pointerP& pBaruC){
    pBaruC=new contact;
    cout << "Nama   :";cin >> pBaruC->nama;
    cout << "Nomor  :";cin>> pBaruC->nomor;
    pBaruC->nextC=NULL;
}

void traversalI (listI first){
    pointerI pBantu;
    pBantu=first;
    cout<<"Index :"<<endl;
    while(pBantu!=NULL){
        cout<<"|- "<<pBantu->index<<endl;
        pBantu=pBantu->next;
    }
}

void linearSearch(listI& first, char key, char& status, pointerIi& pCariI){
    status=0;
    pCariI=first;
    while (status==0 && pCariI!=NULL) {
        if (strcmp(pCariI->nama,key)==0)
            status=1;
        else
            pCariI=pCariI->next;
    }
}

void insertfirstI (listI& first, pointerI& pBaruI){
    if (first==NULL){
        first=pBaruI;
    }
    else{
        pBaruI->next=first;
        first=pBaruI
    }
}

void insertfirstC (listI& first, pointerC& pBaruC){
    if(first->nextC==NULL){
        first->nextC=pBaruC;
    }
    else{
        pBaruC->next=first->nextC;
        first->nextC=pBaruC;
    }
}

void deleteFirstI (listI& first, pointerI& pHapusI){
    if (first==NULL){
        pHapusI=NULL;
        cout << "Tidak ada yang dihapus"<<endl;
    }
    else if(first->next==NULL){
        pHapusI=first;
        first=NULL;
    }
    else{
        pHapusI=first;
        first=first->next;
        pHapusI->next=NULL;
    }
}

void deleteFirstC (listI& first, pointerC& pHapusC){
    pointerI pContact;
    int ketemu;
    if (ketemu) {
        if (pContact->firstC==NULL){
            pHapus=NULL;
            cout<<"List kosong, tidak ada hapus"<<endl;
        }
        else if (pContact->firstC->nextC==NULL){
            pHapusC=pContact->firstI;
            pContact->firstC=NULL;
        }
        else {
            pHapusC=pPegawai->firstPegawai;
            pPegawai->firstC=pContact->firstC->nextC;
            pHapusc->nextC=NULL;
        }
    }
    else{
        cout<<"Tidak ditemukan"<<endl;
    }
}

void updateContact(listI& first){
    char nama[10];
    pBaru=first;
    bool isFound=0;
    cout<<"Contact yang akan diupdate?: ";
    cin.ignore();cin.getline(nama,10);
    while(first!=NULL && !isFound){
        if(first->index==toupper(nama[0])){
            isFound=1;
            break;
        }
        first=first->next;
    }
    pBaru=pBaru->nextC;
    if(pBaru==NULL){
        cout<<"Nama tidak ditemukan!"<<endl;
    }else{
        while(pBaru!=NULL){
            if(strcmp(pBaru->nama,nama)==0){
                isFound=1;
                cout<<"Nomor Baru : ";
                cin>>pBaru->phone;
            }
            ctcSrc=ctcSrc->next;
        }
    }
    if(!isFound){
        cout<<"Nama tidak ditemukan!"<<endl;
    }else{
        cout<<"Update berhasil!"<<endl;
    }
}

void traversalIC (listI& first){
    pointerI pBantuI;
    pointerC pBantuC;
    
    pBantuI=first;
    
    while (pBantuI!=NULL){
        cout<<"|- "<<pBantuI->info<<endl;
        pBantuC=pBantuI->firstC;
        while (pBantuC!=NULL) {
            cout<<"\t|- "<<pBantuC->nama<< " / "<<pBantuC->nomor<<endl;
            pBantuC=pBantuC->nextC;
        }
        pBantuI=pBantuI->next;
    }
}
