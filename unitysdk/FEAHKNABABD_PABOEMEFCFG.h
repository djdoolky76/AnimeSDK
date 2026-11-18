#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEAHKNABABD_CICGNKPDHOF;

#define FEAHKNABABD_PABOEMEFCFG_CFGMGAKDOIC_OFFSET UNITYSDK_OFFSET(0x11D70220)
#define FEAHKNABABD_PABOEMEFCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x11D70210)

inline static constexpr unsigned int FEAHKNABABD_PABOEMEFCFG_TypeDefinitionIndex = 48282;

class FEAHKNABABD_PABOEMEFCFG : public ::System::Object
{
public:
	::FEAHKNABABD_CICGNKPDHOF* FGBNBFHOKAA; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAHKNABABD_PABOEMEFCFG__CTOR_OFFSET))(this);
	}

	::System::Boolean CFGMGAKDOIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAHKNABABD_PABOEMEFCFG_CFGMGAKDOIC_OFFSET))(this);
	}
};
