//q5
// #include<iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     k = k % n; 
//     if (k == 0) return;

    
//     reverse(nums.begin(), nums.end());
    
//     reverse(nums.begin(), nums.begin() + k);
  
//     reverse(nums.begin() + k, nums.end());
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;
    
//     rotate(nums, k);

//     for (int num : nums) {
//         cout << num << " ";
//     }

//     return 0;
// }

//q6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,t=1;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         t=t*n;
//         n-=i;
//     }
//     cout<<t;
//     return 0;
// }


//q7
// #include <iostream>
// using namespace std;

// int sumOfDigits(int number) {
//     int sum = 0;
    
    
//     number = abs(number);
    
    
//     while (number > 0) {
//         sum += number % 10; 
//         number /= 10;       
//     }
    
//     return sum;
// }

// int main() {
//     int number = 12345;
    
//     int sum = sumOfDigits(number);
    
//     cout << "Sum of digits of " << number << " is: " << sum << endl;
    
//     return 0;
// }


//q8
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    
    a = std::abs(a);
    b = std::abs(b);

    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp;  
    }

    return a; 
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}