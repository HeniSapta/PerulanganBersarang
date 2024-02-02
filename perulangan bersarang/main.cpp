/*
#include <iostream>
using namespace std;

int main(){

    //looping for 1
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<=baris; kolom++) {
            cout<<"*";
        }
        cout<<endl;
    }
}


    //looping for 2
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>=baris; kolom--) {
            cout<<"*";
        }
        cout<<endl;
    }
}


    //looping for 3
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>baris; kolom--) {
            cout<<" ";
        }

        for(kolom=1; kolom<=baris; kolom++) {
            cout<<"*";
        }
        cout<<endl;
    }
}


    //looping for 4
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<baris; kolom++) {
            cout<<" ";
        }

        for(kolom=tinggi; kolom>=baris; kolom--){
            cout<<"*";
        }
        cout<<endl;
    }
}


    //looping for 5
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>baris; kolom--) {
            cout<<" ";
        }

        for(kolom=1; kolom<=baris*2-1; kolom++){
            cout<<"*";
        }
        cout<<endl;
    }
}


    //looping for 6
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<baris; kolom++) {
            cout<<" ";
        }
        for(kolom=tinggi; kolom>=baris*2-tinggi; kolom--){
            cout<<"*";
        }
        cout<<endl;
    }
}


    //looping for 7
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=1; kolom<=baris; kolom++) {
            cout<<"*";
        }
        cout<<endl;
    }

        for(baris=2; baris<=tinggi; baris++){
            for(kolom=tinggi; kolom>=baris; kolom--){
                cout<<"*";
            }
            cout<<endl;
        }
}


    //looping for 8
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;

    for(baris=1; baris<=tinggi; baris++){
        for(kolom=tinggi; kolom>baris; kolom--) {
            cout<<" ";
        }
        for(kolom=1; kolom<=baris; kolom++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(baris=2; baris<=tinggi; baris++){
        for(kolom=1; kolom<baris; kolom++) {
            cout<<" ";
        }
        for(kolom=tinggi; kolom>=baris; kolom--){
            cout<<"*";
        }cout<<endl;
    }
}


    //looping for 9
    int tinggi,baris,kolom;
    cout<<"Masukan jumlah tinggi = ";
    cin>>tinggi;
    for(baris=1; baris<=tinggi; baris++){
        for (kolom=tinggi; kolom>baris; kolom--){
            cout<<" ";
        }
        for(kolom=1; kolom<=baris*2-1; kolom++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(baris=2; baris<=tinggi; baris++){
        for(kolom=1; kolom<baris; kolom++) {
            cout<<" ";
        }
        for(kolom=tinggi; kolom>=baris*2-tinggi; kolom--){
            cout<<"*";
        }
        cout<<endl;
    }
}



#include <iostream>
using namespace std;

int main() {

    //looping while
    int tinggi, baris, kolom;
    cout << "Tinggi segi tiga : ";
    cin >> tinggi;
    cout <<endl;
    baris = 1;
    while (baris <= tinggi){
        kolom = 1;
        while (kolom <= baris) {
        cout <<'*';
        kolom++;
        }
    cout << endl;
    baris++;
    }
}


    //looping do while
    int tinggi, baris, kolom;
    cout << "Tinggi segi tiga : ";
    cin >> tinggi;
    cout <<endl;
    baris =1;
    do {
        kolom = 1;
        do {
            cout <<'*';
            kolom++;
        } while (kolom <= baris);
    cout << endl;
    baris++;
    } while (baris <= tinggi);
}

*/
