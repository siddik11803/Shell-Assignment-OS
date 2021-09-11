#include<stdio.h>
#include<stdlib.h>
#include"spec-1.c"
int main(){
    char host_name[_SC_HOST_NAME_MAX];
    hostName(host_name);
    char login_name[_SC_LOGIN_NAME_MAX];
    userName(login_name);
    char root_dir[MAX_PATH_BUF];
    char current_dir[MAX_PATH_BUF];
    directory(root_dir);
    strcpy(current_dir, "~");
    char command[MAX_COMMAND];
    while(1){
        printf("<%s@%s:%s> ", login_name ,host_name, current_dir); // This makes the basic structure to be ready;
        fgets(command, MAX_COMMAND, stdin);
        processCommand(command);
        // Now we have the formatted command with the flags attached to it. (Work on 090921)
    }
    
    return 0;
}