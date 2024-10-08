#include "Solider.h"

Solider::Solider(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

void Solider::addBulletToGun(int num)
{
    this->_ptr_gun->addBullet(num);
}

void Solider::addGun(Gun * ptr_gun)
{
    this->_ptr_gun = ptr_gun;
}

bool Solider::fire()
{
    this->_ptr_gun->shoot();
    return true;
}

Solider::~Solider()
{
    if (this->_ptr_gun == nullptr)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
    
}