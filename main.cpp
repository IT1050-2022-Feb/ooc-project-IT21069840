#include "GuestUser.h"
#include "RegisteredCustomer.h"
#include "Lands.h"

#include <iostream>
using namespace std;
int main()
{
GuestUser* rg = new RegisteredCustomer();

rg->login();
rg->displayDetails();

delete rg;

return 0;
}