#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    cout<<"========================================================================================"<<endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    /* Tampilkan isi dari array */
    cout << "Array x: [ ";
    for(int i = 0; i < 9; i++) cout << x[i] << " ";
    cout << "]" << endl;

    adrNode root = NULL;

    /* 1. Tambahkan setiap elemen array x kedalam BST secara berurutan */
    /* sehingga dihasilkan BST seperti Gambar 1, gunakan looping*/
    for(int i = 0; i < 9; i++){
        adrNode p = newNode_1301210411(x[i]);
        insertNode_1301210411(root, p);
    }

    /* 2. Tampilkan node dari BST secara Pre-Order */
    cout << "Pre Order: ";
    printPreOrder_1301210411(root);
    cout << endl;

    /* 3. Tampilkan keturunan dari node 9*/
    cout << "Descendent of Node 9: ";
    printDescendant_1301210411(root, 9);
    cout << endl;

    /* 4. Tampilkan total info semua node pada BST */
    cout << "Sum of BST Info: " << sumNode_1301210411(root) << endl;

    /* 5. Tampilkan banyaknya daun dari BST */
    cout << "Number of Leaves: " << countLeaves_1301210411(root) << endl;

    /* 4. Tampilkan Tinggi dari Tree*/
    cout << "Height of Tree: " << heightTree_1301210411(root)  << endl;
    cout<<"========================================================================================"<<endl;

    return 0;
}
