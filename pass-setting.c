//�ÏؔF�؃v���O�����̉���

#include <stdio.h>

int main(void)
	{
		int number, pass;
		printf("�͂��߂ɐ����ňÏؔԍ���o�^���Ă��������B");    scanf("%d", &pass);
		printf("�Ïؔԍ���o�^���܂����B\n");


		for (int i = 0; ; ) {
			printf("�Ïؔԍ�����͂��Ă��������F");     scanf("%d", &number);
			i += 1;
			if (number == pass) {
				printf("�F�؂ɐ������܂����B\n");
				break;
			}
			else if (i == 3) {
				printf("�F�؂Ɏ��s���܂����B�����I�����܂��B\n");
				break;
			}
			else {
				printf("�F�؂Ɏ��s���܂����B�Ïؔԍ���������x�m���߂Ă��������B\n\n");
			}
		}




	return 0;
}