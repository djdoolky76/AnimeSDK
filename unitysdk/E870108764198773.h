#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0A4CD7E172B7420.h"

class E9FF0C8E52767A3A;

#define E870108764198773_A86D7D52227E28F2_OFFSET UNITYSDK_OFFSET(0x19D00A0)
#define E870108764198773__CTOR_OFFSET UNITYSDK_OFFSET(0x17033C0)

inline static constexpr unsigned int E870108764198773_TypeDefinitionIndex = 1722;

class E870108764198773 : public ::B0A4CD7E172B7420
{
public:
	::E9FF0C8E52767A3A* E3F5A5DF3D87D84C; // 0xC8

	::System::Void A86D7D52227E28F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E870108764198773_A86D7D52227E28F2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E870108764198773__CTOR_OFFSET))(this);
	}
};
