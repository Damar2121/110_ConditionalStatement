

#include <iostream>
using namespace std;
int main()
{
    
    //siswa mempunyai 2 nilai yaitu matematika dan fisika
    //kemudian dihitung reratanya, jika rerata lebih dari 60
    //maka dinyatakan lulus, atau setidaknya nilai matematika
    //lebih dari 70 dan jika tidak keduanya maka
    //dinyatakan tidak lulus

    float nMat, nfisika, rerata;
    string status;
    cout << "masukkan nilai matematika ";
    cin >> nMat;
    cout << "masukkan nilai fisika ";
    cin >> nfisika;

    rerata = (nfisika + nMat) / 2;

    if (rerata >= 60) {
        status = "lulus jalur rerata";
    }
    else if (nMat >= 70) {
        status = "lulus jalur matematika";
    }
    else
    {
        status = "tidak lulus";
    }
    cout << "status kelulusan " << status << endl;
    


}


