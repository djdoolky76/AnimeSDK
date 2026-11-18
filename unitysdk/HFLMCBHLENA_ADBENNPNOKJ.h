#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define HFLMCBHLENA_ADBENNPNOKJ_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x11013300)
#define HFLMCBHLENA_ADBENNPNOKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x110132F0)

inline static constexpr unsigned int HFLMCBHLENA_ADBENNPNOKJ_TypeDefinitionIndex = 75919;

class HFLMCBHLENA_ADBENNPNOKJ : public ::System::Object
{
public:
	::HOCDHMEPPEG NALAPEBJFAG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLMCBHLENA_ADBENNPNOKJ__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLMCBHLENA_ADBENNPNOKJ_LIDNPLMPHAL_OFFSET))(this);
	}
};
