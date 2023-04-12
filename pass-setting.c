//暗証認証プログラムの改良

#include <stdio.h>

int main(void)
	{
		int number, pass;
		printf("はじめに数字で暗証番号を登録してください。");    scanf("%d", &pass);
		printf("暗証番号を登録しました。\n");


		for (int i = 0; ; ) {
			printf("暗証番号を入力してください：");     scanf("%d", &number);
			i += 1;
			if (number == pass) {
				printf("認証に成功しました。\n");
				break;
			}
			else if (i == 3) {
				printf("認証に失敗しました。強制終了します。\n");
				break;
			}
			else {
				printf("認証に失敗しました。暗証番号をもう一度確かめてください。\n\n");
			}
		}




	return 0;
}