#include <bits/stdc++.h>
using namespace std;

class Matrix{
public:
    void transpose(int matrix[3][3]){

        cout << "The Transpose matrix is: \n";
        for (int i = 1; i < 3; i++){
            for (int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        
    }

    void sum(int matrix1[3][3], int matrix2[3][3]){
        int matrix3[3][3];
        cout << "The addition of the two matrixes : \n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    void product(int matrix1[3][3], int matrix2[3][3]){
        int matrix3[3][3];
        int sum = 0;
        cout << "The multiplication of the two matrices: \n";

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                sum = 0;
                for (int k = 0; k < 3; k++){
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                matrix3[i][j] = sum;
            }
        }

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }
};

int main(){
    Matrix obj;

    int matrix1[3][3], matrix2[3][3];

    cout << "Enter the matrix 1 elements:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the matrix 2 elements" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    unsigned choice;

    while (1){
        system("cls");
        cout << "Enter 1 to get the Sum of matrix1 and matrix2. \n";
        cout << "Enter 2 to get the Product of matrix1 and matrix2.  \n";
        cout << "Enter 3 to get the Transpose of matrix1 and matrix2.  \n";
        cout << "Enter 4 to exit. \n";
        cin >> choice;

        switch (choice){
        case 1:
            obj.sum(matrix1, matrix2);
            break;
        case 2:
            obj.product(matrix1, matrix2);
            break;
        case 3:
        	cout<<"For matrix one:";
            obj.transpose(matrix1);
            cout<<"For matrix two:";
            obj.transpose(matrix2);
            system("pause");
            break;
        case 4:
        	return 0;
        default:
            cout<<"Invalid option";
            break;
        }
    }

    return 0;
}
