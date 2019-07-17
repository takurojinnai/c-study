// kimatu.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
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
		fprintf_s(stdout, "キリンの睡眠時間は？ 1:8時間、2:20時間、3:20分\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.a = 1;
			break;
		}
	}


	number.b = 0;
	while (1) {
		fprintf_s(stdout, "人間とバナナのDNAは何％一致するか？ 1:5％、2:20％、3:50％\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.b = 1;
			break;
		}
	}

	number.c = 0;
	while (1) {
		fprintf_s(stdout, "ミツバチが1匹が一生集められる蜜の量は？ 1:5グラム、2:500グラム、3:5キログラム\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.c = 1;
			break;
		}
	}

	number.d = 0;
	while (1) {
		fprintf_s(stdout, "アンパンマンの中身は？ 1:粒あん、2:こしあん、3:ジャムおじさん\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.d = 1;
			break;
		}
	}

	number.e = 0;
	while (1) {
		fprintf_s(stdout, "魚のタラはギリシャ語で何という？ 1:バカヤロウ、2:マヌケヤロウ、3:トンチンカン\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.e = 1;
			break;
		}
	}

	number.f = 0;
	while (1) {
		fprintf_s(stdout, "チゲ鍋のチゲはどういう意味？ 1:辛い、2:鍋、3:うまい\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 2) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.f = 1;
			break;
		}
	}

	number.g = 0;
	while (1) {
		fprintf_s(stdout, "スティーブン・スピルバーグの作品は？ 1:ジョーズ、2:E.T、3:ジュラシックパーク\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.g = 1;
			break;
		}
	}

	number.h = 0;
	while (1) {
		fprintf_s(stdout, "ちびまる子ちゃんのお姉ちゃんの名前は？ 1:すみれ、2:さきこ、3:こたけ\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 2) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.h = 1;
			break;
		}
	}

	number.i = 0;
	while (1) {
		fprintf_s(stdout, "マリオのオーバーオールは昔何色だったか？ 1:赤色、2:白色、3:緑色\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.i = 1;
			break;
		}
	}

	number.j = 0;
	while (1) {
		fprintf_s(stdout, "世界１売れたゲームとは？ 1:スーパーマリオブラザーズ、2:ポケットセンター、3:テトリス\n==>");
		scanf_s("%d", &number.x_1);
		if (number.x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			number.j = 1;
			break;
		}
	}
	
	File();
	fprintf_s(stdout, "\ntxtファイルで正解数を確認しよう！\n",n);
	return 0;
}

void File() {

	FILE*fp;

	errno_t error;
	error = fopen_s(&fp, "result.txt", "w");
	if (error != 0)
		fprintf_s(stderr, "failed to open");
	else {

		//txtファイルに表示
		fprintf(fp, "10問中%d問正解でした！！\n", n);

		fclose(fp);
	}
}