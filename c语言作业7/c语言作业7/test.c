#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
1.递归和非递归分别实现求第n个斐波那契数。
int Fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}
int main() {
	printf("%d\n",Fib(5));
	system("pause");
	return 0;
}

int main() {
	int arr[1024] = { 0 };
	int i = 0;
	int n = 0;
	printf("请输入需要求的第n个斐波那契数:");
	scanf("%d", &n);
	if (i == 0 || i == 1) {
		arr[i] = 1;
	}
	for (i = 2; i < n; i++) {
		arr[0] = 1;
		arr[1] = 1;
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	i = n - 1;
	printf("所求的第%d个斐波那契数为:%d\n",n, arr[i]);
	system("pause");
	return 0;
}

2.编写一个函数实现n^k，使用递归实现
int Fac(int n, int k) {
	if (n == 1 || k == 0) {
		return 1;
	}
	if (k==1) {
		return n;
	} 
	return n*Fac(n, k - 1);
}
int main() {
	int i, j;
	printf("请输入n和k的值:");
	scanf("%d %d", &i, &j);
	printf("%d^%d=%2d\n",i,j, Fac(i,j));
    system("pause");
	return 0;
}

3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigitSum(int n) {
	int sum = 0;
	int m = 0;
	if (n != 0) {
		m = n % 10;
		n = n / 10;
        sum = m + DigitSum(n);
	}
	return sum;
}
int main() {
	int i;
	printf("请输入一个整数:");
	scanf("%d", &i);
	printf("各位数之和为：%d\n", DigitSum(i));
	system("pause");
	return 0;
}

4. 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char * string) { 
	if (*(++string) != '\0') { 
		reverse_string(string); 
	} 
	printf("%c", *(string - 1)); 
}
int main() { 
	char *p = "abcdef";  
	reverse_string(p);  
	printf("\n");
	system("pause");
	return 0; 
}

5.递归和非递归分别实现strlen
int Strlen(char *string) {
	int count = 0;
	if (*string != '\0') {
		string++;
		count = 1 + Strlen(string);
	}
	return count;
}
int main() {
	char *str = "abcdef";
	printf("%d\n", Strlen(str));
	system("pause");
	return 0;
}

int Strlen(char *string) {
	int count = 0;
	if (*string != '\0') {
		count++;
	}
	return count;
}
int main() {
	char *str = "abcdef";
	printf("%d\n", Strlen(str));
	system("pause");
	return 0;
}

6.递归和非递归分别实现求n的阶乘
int Fac(int n) {
	if (n == 1) {
		return 1;
	}
	return n*Fac(n - 1);
}
int main() {
	int i = 0;
	printf("请输入数字:");
	scanf("%d", &i);
	printf("%d的阶乘为:%d\n", i, Fac(i));
	system("pause");
	return 0;
}

int Fac(int n) {
	int sum = 1;
	for (; n > 0;n--) {
		sum *= n;
	}
	return sum;
}
int main() {
	int i = 0;
	printf("请输入一个数字:");
	scanf("%d", &i);
	printf("%d的阶乘为:%d\n",i,Fac(i));
	system("pause");
	return 0;
}

7.递归方式实现打印一个整数的每一位
void print(int n) {
	if (n>9) {
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int i;
	printf("请输入一个数:");
	scanf("%d", &i);
	print(i);
	system("pause");
	return 0;
}
