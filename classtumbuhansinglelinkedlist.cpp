#include <iostream>
using namespace std;

class Tumbuhan{
    public:
    struct Pohon{
    string namaPohon;
    string jenisBiji;
    int masaHidup;
    Pohon* next;
    };
    Pohon *head, *tail, *cur, *newNode, *del;
public:
    Tumbuhan() : head(nullptr), tail(nullptr), cur(nullptr) {}

    void addFirst(string namaPohon, string jensiBiji, int mH){
    newNode = new Pohon();
    newNode->namaPohon = namaPohon;
    newNode->jenisBiji = jensiBiji;
    newNode->masaHidup= mH;
    newNode->next = head;
    head = newNode;
}
void addLast(string namaPohon, string jenisBiji, int mH){
    newNode = new Pohon();
    newNode->namaPohon = namaPohon;
    newNode->jenisBiji = jenisBiji;
    newNode->masaHidup= mH;
    newNode->next = nullptr;
    tail->next = newNode;
    tail= newNode;
}
void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}
void removeLast(){
    del = tail;
    cur = head;
    while (cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = nullptr;
    delete del;
}
void changeFirst(string namaPohon, string jenisBiji, int mH){
    head->namaPohon = namaPohon;
    head->jenisBiji = jenisBiji;
    head->masaHidup= mH;
}
void changeLast(string namaPohon, string jenisBiji, int mH){
    tail->namaPohon = namaPohon;
    tail->jenisBiji = jenisBiji;
    tail->masaHidup= mH;
}
    void createSingleLinkedList(string nP, string jB, int mH){
        head = new Pohon();
        head->namaPohon = nP;
        head-> jenisBiji = jB;
        head->masaHidup = mH;
        tail =head;
    }

    void printSingleLinkedList(){
        cur = head;
    while (cur != nullptr) {
        cout<<"Nama Pohon: Pohon "<< cur->namaPohon<<endl;
        cout<<"jenis Biji: "<< cur->jenisBiji<<endl;
        cout<<"masaHidup : "<< cur->masaHidup<<" tahun"<<endl;
        cur = cur->next;
    }
    }
};

int main(){
    Tumbuhan tumbuhan;

    tumbuhan.createSingleLinkedList("Pohon Mangga", "dikotil", 300);
    tumbuhan.printSingleLinkedList();
    cout << "\n\n" << endl;

    tumbuhan.addFirst("Kelapa", "Monokotil", 100);
    tumbuhan.printSingleLinkedList();

    cout << "\n\n" << endl;

    tumbuhan.addLast("Durian", "Dikotil", 200);
    tumbuhan.printSingleLinkedList();

    cout << "\n\n" << endl;

    tumbuhan.removeFirst();
    tumbuhan.printSingleLinkedList();

    cout << "\n\n" << endl;

    tumbuhan.addLast("Pisang", "Monokotil", 30);
    tumbuhan.printSingleLinkedList();

    cout << "\n\n" << endl;

    tumbuhan.removeLast();
    tumbuhan.printSingleLinkedList();

    cout << "\n\n" << endl;

    tumbuhan.changeFirst("Cemara", "Dikotil", 1000);
    tumbuhan.printSingleLinkedList();

    cout << "\n\n" << endl;

    tumbuhan.changeLast("Beringin", "Dikotil", 16);
    tumbuhan.printSingleLinkedList();
    
}

