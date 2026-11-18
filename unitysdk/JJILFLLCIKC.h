#pragma once
#include "unitysdk/unitysdk.h"

#define JJILFLLCIKC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A479960)
#define JJILFLLCIKC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A479B00)
#define JJILFLLCIKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A479AA0)

inline static constexpr unsigned int JJILFLLCIKC_TypeDefinitionIndex = 70549;

class JJILFLLCIKC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJILFLLCIKC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJILFLLCIKC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJILFLLCIKC_GDEOPIBNOIN_OFFSET))(this);
	}
};
