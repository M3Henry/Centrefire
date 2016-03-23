#pragma once
#include "cartridge.h"

class chamber :
	public nameable {
public:
	chamber(const case_type &);
public:
	bool loaded() const;
	operator const case_type &() const;
	std::string name() const;
public:
	cartridge::instance load(cartridge::instance);
	cartridge::instance unload();
	cartridge::ejecta strike(float Impulse);
private:
	const case_type & _Type;
	cartridge::instance _Cartridge;
};

