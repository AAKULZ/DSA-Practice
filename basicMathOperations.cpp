#include<bits/stdc++.h>

using namespace std;

void printDigit(int num){
    cout << "The Digits in the provided number are as follows: ";
    while(num>0){
        cout << num%10 << " ";
        num/=10;
    }
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void countDigit(int num){
    int cnt=0;
    cout << "The number of digits in given number are: ";
    while(num>0){
        num/=10;
        cnt++;
    }
    cout << cnt;
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void countDigitLog(int num){
    int cnt=0;
    cout << "The number of digits in given number using Log are: " << int(log10(num)+1);
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void reverseNumber(int num){
    cout << "The number reverse of the given number by cout trick is: ";
    while(num>0){
        cout << num%10;
        num/=10;
    }
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void reverseNumberAdd(int num){
    cout << "The number reverse of the given number by add trick is: ";

    int revnum=0;
    while(num>0){
        revnum*=10;
        revnum+=num%10;
        num/=10;
    }
    cout <<revnum;
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void pallindrome(int num){
    int dupnum=num;
    cout << "The number "<< num << " is ";
    int revnum=0;
    while(num>0){
        revnum = revnum*10+num%10;
        num/=10;
    }
    if(!(revnum==dupnum))cout << "not ";cout<<"pallindrome !";
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void armstrongNumber(int num){
    int dupnum=num;
    cout << "The number "<< num << " is ";
    int cubesum=0;
    while(num>0){
        cout << int(pow(int(num%10),(int)log10(dupnum)+1)) << " + ";
        cubesum = cubesum+pow(int(num%10),(int)log10(dupnum)+1);
        num/=10;
    }
    if(cubesum!=dupnum)cout << "not ";cout<<"Armstrong !";
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void divisors(int num){
    cout << "The Divisors of the number are: ";
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            cout << " "<<i;
            if(i != num/i)cout << " "<<num/i;
        }
    }
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void checkPrime(int num){
    cout << "The number "<< num << " is ";
    int cnt=0;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            cnt++;
            if(i!=num/i)cnt++;
        }
    }

    if(cnt!=2)cout << "not ";
    cout<<"Prime !";
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void checkPrimeoptimized(int num){
    cout << "The number "<< num << " is ";
    for(int i=2;i*i<=num;i++){
        if(num%i==0){cout << "not ";break;}
    }
    cout<<"Prime !";
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void findGCD(int num1,int num2){
    for(int i=min(num1,num2);i>=1;i--){
        if(num1%i==0&&num2%i==0){
            cout << "GCD of num "<< num1 << " and " <<num2 << " is " <<i;
            break;
        }
    }
    cout << endl <<"----------------------------------------------------------"<<endl;
}

//using Euclidean Algorihtm

void EuclideanGCDAdd(int num1, int num2){
    cout << "GCD of num "<< num1 << " and " <<num2 << " is ";
    while(num1 != num2){
        int bigger = max(num1, num2);
        int smaller = min(num1, num2);
        num1 = bigger - smaller;
        num2 = smaller;
    }
    cout << num1;//or num2 (any, beacuse same)
    cout << endl <<"----------------------------------------------------------"<<endl;
}

void EuclideanGCDMod(int num1, int num2){
    cout << "GCD of num " << num1 << " and " << num2 << " is ";
    while(num2 != 0){
        int temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    cout << num1;
    cout << endl << "----------------------------------------------------------" << endl;
}



void findOptimizedGCD( int num1, int num2){
    cout << "GCD of num "<< num1 << " and " <<num2 << " is ";
    while(num1>0 && num2>0){
        if(num1>num2)num1%=num2;
        else num2%=num1;
    }
    cout << num1+num2;
    cout << endl <<"----------------------------------------------------------"<<endl;
}

int main(){
    int num1 ,num2;
    cout << "----------------------------------------------------------"<<endl;
    cout << "Enter Two Numbers for Basic Mathematcal Operations: ";cin >> num1 >> num2;
    cout << "----------------------------------------------------------"<<endl;
    printDigit(num1);
    countDigit(num1);
    countDigitLog(num1);
    reverseNumber(num1);
    reverseNumberAdd(num1);
    pallindrome(num1);
    armstrongNumber(num1);
    divisors(num1);
    checkPrime(num1);
    checkPrimeoptimized(num1);
    findGCD(num1,num2);
    EuclideanGCDAdd(num1,num2);
    EuclideanGCDMod(num1,num2);
    findOptimizedGCD(num1,num2);
    return 0;
}
