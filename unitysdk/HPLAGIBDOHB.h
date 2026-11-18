#pragma once
#include "unitysdk/unitysdk.h"

#define HPLAGIBDOHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F54830)
#define HPLAGIBDOHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F549D0)
#define HPLAGIBDOHB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F54970)

inline static constexpr unsigned int HPLAGIBDOHB_TypeDefinitionIndex = 91017;

class HPLAGIBDOHB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLAGIBDOHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLAGIBDOHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLAGIBDOHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
