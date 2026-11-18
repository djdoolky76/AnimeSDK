#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOHGMPIMCEF;

#define NOHGMPIMCEF_KNLGIEOKPKL_LOFGDLNIEDD_OFFSET UNITYSDK_OFFSET(0x10DAFA10)
#define NOHGMPIMCEF_KNLGIEOKPKL__CTOR_OFFSET UNITYSDK_OFFSET(0x10DAFA00)

inline static constexpr unsigned int NOHGMPIMCEF_KNLGIEOKPKL_TypeDefinitionIndex = 90749;

class NOHGMPIMCEF_KNLGIEOKPKL : public ::System::Object
{
public:
	::NOHGMPIMCEF* KLHPEBKNIFB; // 0x10
	::System::Single EKGMLLJEJHM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KNLGIEOKPKL__CTOR_OFFSET))(this);
	}

	::System::Void LOFGDLNIEDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KNLGIEOKPKL_LOFGDLNIEDD_OFFSET))(this);
	}
};
