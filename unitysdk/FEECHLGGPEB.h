#pragma once
#include "unitysdk/unitysdk.h"

#define FEECHLGGPEB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1713B400)
#define FEECHLGGPEB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1713B550)
#define FEECHLGGPEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1713B540)

inline static constexpr unsigned int FEECHLGGPEB_TypeDefinitionIndex = 73749;

class FEECHLGGPEB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEECHLGGPEB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEECHLGGPEB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEECHLGGPEB_GDEOPIBNOIN_OFFSET))(this);
	}
};
