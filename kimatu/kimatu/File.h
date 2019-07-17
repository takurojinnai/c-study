#pragma once
void File();
int n = 0;
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