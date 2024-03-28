#include <stdio.h>
#include <fcgiapp.h>

int main() {
  FCGX_Init();

  int Socket = FCGX_OpenSocket("127.0.0.1:2016", 1024);

  FCGX_Request Request;
  FCGX_InitRequest(&Request, Socket, 0);

  while(FCGX_Accept_r(&Request) >= 0) {
    printf("Accept\n");
    FCGX_FPrintF(
      Request.out,
      "Content-type: text/html\r\n\r\n"
      "<h1>Hello World!</h1>"
    );
    FCGX_Finish_r(&Request);
  }

  return 0;
}
