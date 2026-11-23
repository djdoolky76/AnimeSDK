#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define E2DB24B99159FEFF_EECB993FE8DF2C55_OFFSET UNITYSDK_OFFSET(0x3C19F00)
#define E2DB24B99159FEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x3C19EF0)

inline static constexpr unsigned int E2DB24B99159FEFF_TypeDefinitionIndex = 11438;

class E2DB24B99159FEFF : public ::System::Attribute
{
public:
	::System::Int32 AEB4A984BBC8832E; // 0x10

	::System::Void EECB993FE8DF2C55(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E2DB24B99159FEFF_EECB993FE8DF2C55_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2DB24B99159FEFF__CTOR_OFFSET))(this);
	}
};
