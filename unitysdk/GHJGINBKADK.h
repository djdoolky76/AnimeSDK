#pragma once
#include "unitysdk/unitysdk.h"

#define GHJGINBKADK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DD9820)
#define GHJGINBKADK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DD9980)
#define GHJGINBKADK__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD9960)

inline static constexpr unsigned int GHJGINBKADK_TypeDefinitionIndex = 74418;

class GHJGINBKADK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGINBKADK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGINBKADK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGINBKADK_GDEOPIBNOIN_OFFSET))(this);
	}
};
