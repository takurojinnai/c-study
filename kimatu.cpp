// kimatu.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//
#include<stdio.h>
#include "stdafx.h"
struct quizu {
	
	int x_1, a, b, c, d, e, f, g, h, i, j;
};

void File();

int n = 0;

int main(void)
{

	
	
	quizu number;

	

	number.a = 0;
	while (1) {
		fprintf_s(stdout, "�L�����̐������Ԃ́H 1:8���ԁA2:20���ԁA3:20��\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.a = 1;
			break;
		}
	}


	number.b = 0;
	while (1) {
		fprintf_s(stdout, "�l�Ԃƃo�i�i��DNA�͉�����v���邩�H 1:5���A2:20���A3:50��\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.b = 1;
			break;
		}
	}

	number.c = 0;
	while (1) {
		fprintf_s(stdout, "�~�c�o�`��1�C���ꐶ�W�߂��閨�̗ʂ́H 1:5�O�����A2:500�O�����A3:5�L���O����\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.c = 1;
			break;
		}
	}

	number.d = 0;
	while (1) {
		fprintf_s(stdout, "�A���p���}���̒��g�́H 1:������A2:��������A3:�W������������\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.d = 1;
			break;
		}
	}

	number.e = 0;
	while (1) {
		fprintf_s(stdout, "���̃^���̓M���V����ŉ��Ƃ����H 1:�o�J�����E�A2:�}�k�P�����E�A3:�g���`���J��\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.e = 1;
			break;
		}
	}

	number.f = 0;
	while (1) {
		fprintf_s(stdout, "�`�Q��̃`�Q�͂ǂ������Ӗ��H 1:�h���A2:��A3:���܂�\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 2) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.f = 1;
			break;
		}
	}

	number.g = 0;
	while (1) {
		fprintf_s(stdout, "�X�e�B�[�u���E�X�s���o�[�O�̍�i�́H 1:�W���[�Y�A2:E.T�A3:�W�����V�b�N�p�[�N\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.g = 1;
			break;
		}
	}

	number.h = 0;
	while (1) {
		fprintf_s(stdout, "���т܂�q�����̂��o�����̖��O�́H 1:���݂�A2:�������A3:������\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 2) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.h = 1;
			break;
		}
	}

	number.i = 0;
	while (1) {
		fprintf_s(stdout, "�}���I�̃I�[�o�[�I�[���͐̉��F���������H 1:�ԐF�A2:���F�A3:�ΐF\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.i = 1;
			break;
		}
	}

	number.j = 0;
	while (1) {
		fprintf_s(stdout, "���E�P���ꂽ�Q�[���Ƃ́H 1:�X�[�p�[�}���I�u���U�[�Y�A2:�|�P�b�g�Z���^�[�A3:�e�g���X\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "����\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "�s����\n");
			number.j = 1;
			break;
		}
	}
	
	File();
	fprintf_s(stdout, "\ntxt�t�@�C���Ő��𐔂��m�F���悤�I\n",n);
	return 0;
}

void File() {

	FILE*fp;

	errno_t error;
	error = fopen_s(&fp, "result.txt", "w");
	if (error != 0)
		fprintf_s(stderr, "failed to open");
	else {

		//txt�t�@�C���ɕ\��
		fprintf(fp, "10�⒆%d�␳���ł����I�I\n", n);

		fclose(fp);
	}
}