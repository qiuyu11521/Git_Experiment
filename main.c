#include <stdio.h>
// 成员B新增的函数
void print_collaborator() {
    printf("Collaborator: Member B\n");
}
int main() {
    printf("Hello Git! This is version 1.0\n");
    print_collaborator();  // 调用新增函数
    return 0;
}