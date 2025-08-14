#include<iostream>
#include<cstdio>
using namespace std;
 struct book {
    string title;
    string author;
    int pages;
    book (string t, string a, int p){
        title = t;
        author = a;
        pages = p;
    }
    void printinfo(){
        cout << "title book" << title << endl;
        cout << "author name "<< author<< endl;
        cout << "number of page" << pages << endl;
        cout << "---------"<<endl;
    }
};
    int main (){
     book book1("money talk", "ronaldo", 200);
      book book2("hello", "ronaldo", 200);
    book1.printinfo();
    book2.printinfo();
return 0;

    }

   
        


