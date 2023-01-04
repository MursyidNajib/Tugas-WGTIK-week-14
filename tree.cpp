#include "tree.h"


adrNode newNode_1301210411(infotype x){
    adrNode p= new Node;
    p->info=x;
    p->left=nil;
    p->right=nil;
    return p;
}

adrNode findNode_1301210411(adrNode root, infotype x){
    if(root->info==x){
        return root;
    }else{
        if(x<root->info){
            return findNode_1301210411(root->left,x);
        }else{
            return findNode_1301210411(root->right,x);
        }
    }

}

/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
void insertNode_1301210411(adrNode &root, adrNode p){
   if(!root){
        root=p;
   }
   if(p->info > root->info){
        insertNode_1301210411(root->right, p);
   }else if(p->info < root->info){
        insertNode_1301210411(root->left, p);
   }

}
/* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi alamat node yang mau ditambahkan pada BST
F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST
Catatan: implementasikan secara REKURSIF */
void printPreOrder_1301210411(adrNode root){
    if(root){
        cout<<" "<<root->info;
        printPreOrder_1301210411(root->left);
        printPreOrder_1301210411(root->right);
    }
}
/* I.S. terdefinisi root dari BST (mungkin NULL)
F.S. menampilkan node dari BST secara Preorder atau dengan urutan root, left dan right
Catatan: implementasikan secara REKURSIF */
void printDescendant_1301210411(adrNode root, infotype x){
    if(root != NULL){
        if(root->info == x){
            printPreOrder_1301210411(root->left);
            printPreOrder_1301210411(root->right);
        } else {
            printDescendant_1301210411(root->left, x);
            printDescendant_1301210411(root->right, x);
        }
    }
}
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x
F.S. menampilkan subtree atau keturunan dari node yang memiliki info x
Catatan: implementasikan secara REKURSIF */
int sumNode_1301210411(adrNode root){
    if(!root){
        return 0;
    } else{
        return root->info + sumNode_1301210411(root->left) + sumNode_1301210411(root->right);
    }
}
/* mengembalikan hasil penjumlahan semua info node yang terdapat pada BST
Catatan: implementasikan secara REKURSIF */
int countLeaves_1301210411(adrNode root){
    if(!root){
        return 0;
    } else if(root->left == NULL && root->right == NULL){
        return 1;
    } else {
        return countLeaves_1301210411(root->left) + countLeaves_1301210411(root->right);
    }
}
/* mengembalikan banyaknya daun atau node yang tidak memiliki anak dari BST
Catatan: implementasikan secara REKURSIF */
int heightTree_1301210411(adrNode root){
    if(!root){
        return -1;
    } else {
        int leftHeight = 1 + heightTree_1301210411(root->left);
        int rightHeight = 1 + heightTree_1301210411(root->right);
        if(leftHeight >= rightHeight){
            return leftHeight ;
        } else {
            return rightHeight ;
        }
    }
}
/* mengembalikan banyaknya edge dari suatu root menuju daun yang terjauh.
Catatan: implementasikan secara REKURSIF */




