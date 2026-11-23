#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define E65AA09332F44431_A0F2096A36F66088_OFFSET UNITYSDK_OFFSET(0x208FEB0)
#define E65AA09332F44431_ACED4FBAFBD039FB_OFFSET UNITYSDK_OFFSET(0x208FE60)
#define E65AA09332F44431_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x208FE10)
#define E65AA09332F44431__CTOR_OFFSET UNITYSDK_OFFSET(0x208FF30)

inline static constexpr unsigned int E65AA09332F44431_TypeDefinitionIndex = 8525;

class E65AA09332F44431 : public ::System::Object
{
public:
	::System::Single BFC0BD2610B7A748; // 0x10
	::System::Single AB4BFB2D8C5295F8; // 0x14
	::System::Boolean A6736BF6353788DD; // 0x18

	::System::Void _ctor(::System::Single B0798EC32ABABFA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + E65AA09332F44431__CTOR_OFFSET))(this, B0798EC32ABABFA3);
	}

	::System::Void ACED4FBAFBD039FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E65AA09332F44431_ACED4FBAFBD039FB_OFFSET))(this);
	}

	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E65AA09332F44431_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void A0F2096A36F66088(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + E65AA09332F44431_A0F2096A36F66088_OFFSET))(this, EB5670302F34D4B7);
	}
};
