#include <iostream>
#pragma region 第一問
//第１問(一問2点)
//以下の計算に2進数で答えよ。
//00101100 + 01010101=10000001
//10110000 + 00001111=10111111
#pragma endregion
#pragma region 第二問
//第１問の答えを10進数で答えよ
//129
//191
#pragma endregion
#pragma region 第三問
//char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
//char:1 バイト
//int:4 バイト
//float:4 バイト 
//double:8 バイト 
#pragma endregion
#pragma region 第四問
//char *、int *、float *、double *のバイトサイズはそれぞれいくつか答えよ。
//char *:8バイト
//int *:8バイト
//float *:8バイト
//double *:8バイト
#pragma endregion
#pragma region 第五問
//第５問(20点)
//以下のプログラムを実行した場合、
//①～③のどの部分が実行されるか答えよ。
//int main()
//{
//	int num = 5;
//
//	num = num % 3;
//
//	if (num == 0)
//	{
//		//①
//	}
//	else if (num == 2)
//	{
//		//②
//	}
//	else
//	{
//		//③
//	}
//}
//答え:2
#pragma endregion
#pragma region 第六問
//数値を2つ入力し、
//1番目に入力された値が奇数なら足し算、
//1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。
//
//結果)
//1 // 1番目に入力された値
//5 // 2番目に入力された値
//6 // 1番目が奇数なので足し算
//
//4 // 1番目に入力された値
//3 // 2番目に入力された値
//1 // 1番目が偶数なので引き算
//int main()
//{
//	int a, b, c;
//
//	std::cout << "1番目の数字を入力してください\n";
//	std::cin >> a;
//	std::cout << "2番目の数字を入力してください\n";
//	std::cin >> b;
//
//	if (a % 2 == 0)
//	{
//		c = a - b;
//	}
//	else
//	{
//		c = a + b;
//	}
//	std::cout << "答え:" << c << "\n";
//}
#pragma endregion
#pragma region 第七問
//第６問のプログラムをループで行うようにし、
//endと入力された場合終了するようにしてください。
//endの入力は1番目の値の場所でも、2番目の値の場所でも、
//別途endの入力を受け付けるようでもどれでもいいです。
//どこか一か所でendと入力して終了していれば正解とします。

int main()
{
	int a, b, c;
	char end = 0;

	while (end)
	{
		std::cout << "1番目の数字を入力してください\n";
		std::cin >> a || end;
		std::cout << "2番目の数字を入力してください\n";
		std::cin >> b || end;
		if (a % 2 == 0)
		{
			c = a - b;
		}
		else
		{
			c = a + b;
		}
		std::cout << "答え:" << c << "\n";
	}
}
#pragma endregion





