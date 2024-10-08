#include "Gun.h"
#include "Solider.h"

void test()
{
    Solider xu("xu");
    xu.addGun(new Gun("AK47"));
    xu.addBulletToGun(20);
    xu.fire();
}

int main()
{
    test();
    return 0;
}