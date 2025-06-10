#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 5; //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekuasi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan diesekusi*/
        cout << "default pengecualian diexsekusi" << endl;
    }

    return 0;
}
    
    
    
