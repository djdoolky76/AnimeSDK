#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0A4CD7E172B7420.h"

class AAC09180F81A551B;

#define E2D7AC80813FA908_A86D7D52227E28F2_OFFSET UNITYSDK_OFFSET(0x1AABBF0)
#define E2D7AC80813FA908__CTOR_OFFSET UNITYSDK_OFFSET(0x17033C0)

inline static constexpr unsigned int E2D7AC80813FA908_TypeDefinitionIndex = 1902;

class E2D7AC80813FA908 : public ::B0A4CD7E172B7420
{
public:
	::AAC09180F81A551B* E3F5A5DF3D87D84C; // 0xC8

	::System::Void A86D7D52227E28F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2D7AC80813FA908_A86D7D52227E28F2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2D7AC80813FA908__CTOR_OFFSET))(this);
	}
};
