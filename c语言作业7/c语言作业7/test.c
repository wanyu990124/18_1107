#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
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
	printf("��������Ҫ��ĵ�n��쳲�������:");
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
	printf("����ĵ�%d��쳲�������Ϊ:%d\n",n, arr[i]);
	system("pause");
	return 0;
}

2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
	printf("������n��k��ֵ:");
	scanf("%d %d", &i, &j);
	printf("%d^%d=%2d\n",i,j, Fac(i,j));
    system("pause");
	return 0;
}

3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
	printf("������һ������:");
	scanf("%d", &i);
	printf("��λ��֮��Ϊ��%d\n", DigitSum(i));
	system("pause");
	return 0;
}

4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
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

5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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

6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
int Fac(int n) {
	if (n == 1) {
		return 1;
	}
	return n*Fac(n - 1);
}
int main() {
	int i = 0;
	printf("����������:");
	scanf("%d", &i);
	printf("%d�Ľ׳�Ϊ:%d\n", i, Fac(i));
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
	printf("������һ������:");
	scanf("%d", &i);
	printf("%d�Ľ׳�Ϊ:%d\n",i,Fac(i));
	system("pause");
	return 0;
}

7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void print(int n) {
	if (n>9) {
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int i;
	printf("������һ����:");
	scanf("%d", &i);
	print(i);
	system("pause");
	return 0;
}
