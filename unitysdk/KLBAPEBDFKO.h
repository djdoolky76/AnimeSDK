#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLHCEJBBEJF;

#define KLBAPEBDFKO_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x15B999D0)
#define KLBAPEBDFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B99D70)

inline static constexpr unsigned int KLBAPEBDFKO_TypeDefinitionIndex = 48409;

class KLBAPEBDFKO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBAPEBDFKO__CTOR_OFFSET))(this);
	}

	::System::Void GIAOBHOJCDP(::OLHCEJBBEJF* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OLHCEJBBEJF*))((::PBYTE)hIl2Cpp + KLBAPEBDFKO_GIAOBHOJCDP_OFFSET))(this, LJBPECKCCEA);
	}
};
