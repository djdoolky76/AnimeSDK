#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0A4CD7E172B7420.h"

class EEF9EFC28925B0BF;

#define F86FB006D894E46A_A86D7D52227E28F2_OFFSET UNITYSDK_OFFSET(0x17032A0)
#define F86FB006D894E46A__CTOR_OFFSET UNITYSDK_OFFSET(0x17033C0)

inline static constexpr unsigned int F86FB006D894E46A_TypeDefinitionIndex = 641;

class F86FB006D894E46A : public ::B0A4CD7E172B7420
{
public:
	::EEF9EFC28925B0BF* E3F5A5DF3D87D84C; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F86FB006D894E46A__CTOR_OFFSET))(this);
	}

	::System::Void A86D7D52227E28F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F86FB006D894E46A_A86D7D52227E28F2_OFFSET))(this);
	}
};
