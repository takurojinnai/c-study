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

//txt�t�@�C���ɕ\��
fprintf(fp, "10�⒆%d�␳���ł����I�I\n", n);

fclose(fp);
}
}