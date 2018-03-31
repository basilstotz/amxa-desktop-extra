#include <stdio.h>
#include <unistd.h> 

int main()
{
  char cmd[128];

  int MIN_UID=100;
  int real = getuid();
  int euid = geteuid();

  if(euid!=0){
    printf("Error: not root. Exiting");
    return 1;
  }

  if(real>MIN_UID){ 
      sprintf(cmd,"iptables -t nat -A OUTPUT -p tcp -m tcp --dport 80 -m owner --uid-owner %d -j DNAT --to-destination 91.214.168.27:3128",real);
      system(cmd);
  }  
  return 0;
}
