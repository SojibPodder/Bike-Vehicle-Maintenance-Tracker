#include <iostream>
using namespace std;
// aiub student 23-50650-1
int main() {
    int n;
    cout << "Enter size of square matrices: ";
    cin >> n;

    int A[10][10], B[10][10], sum[10][10];

    cout << "Enter Matrix A :"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          cout<<"Enter element ["<<i+1<<"]["<<j+1<<"]: ";
            cin >> A[i][j];
    }
    }
    cout << "Enter Matrix B:"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                cout<<"Enter element ["<<i+1<<"]["<<j+1<<"]: ";
                cin >> B[i][j];

        }
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            sum[i][j] = A[i][j] + B[i][j];

    cout << "Summation Matrix :"<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}
