#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLCCLFPBBML;

#define GLCCLFPBBML_LKBFIFOMGDG_EDLCLLNAAPL_OFFSET UNITYSDK_OFFSET(0x13DDF450)
#define GLCCLFPBBML_LKBFIFOMGDG_GCPNBKFBAFP_OFFSET UNITYSDK_OFFSET(0x13DDF480)
#define GLCCLFPBBML_LKBFIFOMGDG_GONDAFHLLOE_OFFSET UNITYSDK_OFFSET(0x13DDF420)
#define GLCCLFPBBML_LKBFIFOMGDG_MBIMDLOFPDM_OFFSET UNITYSDK_OFFSET(0x13DDF490)
#define GLCCLFPBBML_LKBFIFOMGDG__CTOR_OFFSET UNITYSDK_OFFSET(0x13DDF410)

inline static constexpr unsigned int GLCCLFPBBML_LKBFIFOMGDG_TypeDefinitionIndex = 72299;

class GLCCLFPBBML_LKBFIFOMGDG : public ::System::Object
{
public:
	::GLCCLFPBBML* KLHPEBKNIFB; // 0x10
	::System::Boolean BFLKFFHACFG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_LKBFIFOMGDG__CTOR_OFFSET))(this);
	}

	::System::Boolean GONDAFHLLOE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_LKBFIFOMGDG_GONDAFHLLOE_OFFSET))(this);
	}

	::System::Void EDLCLLNAAPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_LKBFIFOMGDG_EDLCLLNAAPL_OFFSET))(this);
	}

	::System::Void GCPNBKFBAFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_LKBFIFOMGDG_GCPNBKFBAFP_OFFSET))(this);
	}

	::System::Boolean MBIMDLOFPDM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_LKBFIFOMGDG_MBIMDLOFPDM_OFFSET))(this);
	}
};
