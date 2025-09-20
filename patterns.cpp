#include<bits/stdc++.h>

using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << j;
        }
        cout << endl;
    }
}


void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n){
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<abs(n-i);j++){
            cout << " ";
        }
        for(int j=0;j<2*(n-abs(n-i))+1;j++){
            cout << "*";
        }
        for(int j=0;j<abs(n-i);j++){
            cout << " ";
        }

        cout << endl;
    }
}

void pattern10(int n){
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=n-abs(n-i);j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << (j+i)%2;
        }
        cout << endl;
    }
}

void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=0;j<2*(n-i-1);j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            //cout << ((i * (i - 1)) / 2 + j) << " ";//TLDR
            //Triangular Number Formula
            cout << (((i-1)*i)/2)+j << " ";
        }
        cout << endl;
    }
}

void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+n-i-1;j++){
            cout << j;
        }
        cout << endl;
    }
}


void pattern16(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char('A'+i);
        }
        cout << endl;
    }
}

void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << char('A'+ i-abs(i-j));
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}


void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char j='A'+n-1-i;j<='A'+n-1;j++){
            cout << j;
        }
        cout << endl;
    }
}


void pattern19(int n){
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=abs(n-i);j++){
            cout << "*";
        }
        for(int j=0;j<=2*(n-abs(n-i));j++){
            cout << " ";
        }
        for(int j=0;j<=abs(n-i);j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int n){
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=n-abs(n-i);j++){
            cout << "*";
        }
        for(int j=0;j<2*abs(n-i);j++){
            cout << " ";
        }
        for(int j=0;j<=n-abs(n-i);j++){
            cout << "*";
        }
        cout << endl;
    }
}


void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0|| i==n-1||j==0|| j==n-1)cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    /*
    Alternative ways to print a hollow square (without using '=='):

    1. Using < and >:
        if (i < 1 || i > n - 2 || j < 1 || j > n - 2)
            cout << "* ";
        else
            cout << "  ";

    2. Using min() and max():
        int minIndex = min({i, j, n - 1 - i, n - 1 - j});
        if (minIndex < 1)
            cout << "* ";
        else
            cout << "  ";

    3. Using modulus trick:
        if (i % (n - 1) == 0 || j % (n - 1) == 0)
            cout << "* ";
        else
            cout << "  ";

    4. Using logical NOT (!):
        if (!i || !(n - 1 - i) || !j || !(n - 1 - j))
            cout << "* ";
        else
            cout << "  ";

    5. Using bitwise OR to detect edge:
        if ((i | (n - 1 - i)) == (n - 1) || (j | (n - 1 - j)) == (n - 1))
            cout << "* ";
        else
            cout << "  ";
*/

}

void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            cout <<  max(abs(n-i-1),abs(n-j-1)) << " ";
        }
        cout << endl;
    }
    /*
    Ways to print concentric square number pattern (like 4444444 ... 4321234 ... 4444444):

    1. Using center distance (abs method):
        - For any cell (i, j):
          value = 1 + max(abs(center - i), abs(center - j));
        - center = n / 2;
        - Works well for odd n (e.g., 7x7)

    2. Using minimum distance from edges:
        - For any cell (i, j):
          minDist = min(i, j, n - 1 - i, n - 1 - j);
          value = (n / 2 + 1 - minDist);
        - Clean and works for any odd n

    3. Using layer simulation:
        - Treat the matrix as rings (layers).
        - Fill each layer with value (n / 2 + 1 - layer index).
        - Example:
            for layer = 0 to n/2:
                fill matrix border at 'layer' with value (n/2 + 1 - layer)
        - Requires temporary 2D array.

    4. Using recursion (theoretical, not optimal):
        - Define a recursive function:
            getVal(i, j, n) = if edge → return (n/2 + 1)
                             else → getVal(i-1, j-1, n-2)
        - Called inside loops to print value.
        - Less efficient, more conceptual.

    5. Using Distance from Edge Flipped:
        - n-min(i,j,(2*n-1)-1-i,(2*n-1)-1-j)
    All methods are valid for generating concentric number patterns.
*/

}

void pattern23(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            cout << min(abs(n-i-1),abs(n-j-1)) << " ";
        }
        cout << endl;
    }
}

void pattern24(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){

            cout << n - min(min(i,j),min(2*n-2-i,2*n-2-j)) << " ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "==================================================================" << endl;
    cout << "Enter the numer of rows and points to print in Pattern: ";
    cin >> n;
    cout << "==================================================================" << endl;
    cout << "Pattern 1:" << endl;
    cout << "------------------------------------------------" << endl;
    pattern1(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 2:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern2(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 3:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern3(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 4:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern4(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 5:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern5(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 6:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern6(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 7:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern7(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 8:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern8(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 9:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern9(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 10:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern10(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 11:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern11(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 12:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern12(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 13:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern13(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 14:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern14(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 15:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern15(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 16:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern16(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 17:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern17(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 18:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern18(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 19:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern19(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 20:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern20(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 21:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern21(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 22:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern22(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 23:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern23(n);
    cout << endl << "------------------------------------------------";
    cout << endl << "Pattern 24:"<< endl;
    cout << "------------------------------------------------" << endl;
    pattern24(n);
    cout << endl << "------------------------------------------------";
    cout << endl << endl;


    return 0;
}
