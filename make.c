/*
 * @Author          : lihugang
 * @Date            : 2022-02-19 13:53:18
 * @LastEditTime    : 2022-02-25 21:07:31
 * @LastEditors     : lihugang
 * @Description     : 
 * @FilePath        : \make.c
 * Copyright (c) lihugang
 * �������˻���ʱ ֱ���Ʒ��ò׺�
 * There will be times when the wind and waves break, and the sails will be hung straight to the sea.
 *  * * * 
 * �Ƿǳɰ�תͷ�� ��ɽ������ ����Ϧ����
 * Whether it's right or wrong, success or failure, it's all empty now, and it's all gone with the passage of time. The green hills of the year still exist, and the sun still rises and sets.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    freopen("archives.c","w",stdout);
    printf("#include <stdio.h> \n\
#include <windows.h> \n\
char * archives=\"\
");
    freopen("archives.js","r",stdin);
    char ch;
    while ((ch = getchar()) != EOF){
        if (ch == '\n' || ch == '\r'){
            putchar('\\');
            putchar('n');
            putchar('\\');
        } else if (ch == '\"') {
            putchar('\\');
        };
        putchar(ch);
    };
    fclose(stdin);
    printf("\";");
    printf("int main(void){ \
puts(\"�������δ������ �밲װNode.js������\"); \
freopen(\"archives.run.js\",\"w\",stdout); \ 
printf(archives); \
fclose(stdout); \ 
system(\"start http://127.0.0.1:55555\"); \
system(\"node archives.run.js\"); \
system(\"if exist archives.run.js rm archives.run.js\"); \ 
system(\"pause>nul\"); \
return 0;\
}; \
");

    fclose(stdout);
    system("gcc archives.c -o archives.exe");
    return 0;
};