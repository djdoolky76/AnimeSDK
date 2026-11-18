#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIKKMBHKDAO.h"

namespace MoleMole::Config { class ConfigSetAnimatorTriggerCommonNodeV2; }

#define FIDBJAPBBNB_KOHABOKICHK_OFFSET UNITYSDK_OFFSET(0x116B4120)
#define FIDBJAPBBNB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x116B4130)
#define FIDBJAPBBNB_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x116B41E0)
#define FIDBJAPBBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x116B4410)

inline static constexpr unsigned int FIDBJAPBBNB_TypeDefinitionIndex = 51029;

class FIDBJAPBBNB : public ::CIKKMBHKDAO
{
public:
	::MoleMole::Config::ConfigSetAnimatorTriggerCommonNodeV2* GKELJPDNGNP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDBJAPBBNB__CTOR_OFFSET))(this);
	}

	::System::Boolean KOHABOKICHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDBJAPBBNB_KOHABOKICHK_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDBJAPBBNB_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDBJAPBBNB_PCEPOEIOFBN_OFFSET))(this);
	}
};
