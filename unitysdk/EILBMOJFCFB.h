#pragma once
#include "unitysdk/unitysdk.h"

#define EILBMOJFCFB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14159720)
#define EILBMOJFCFB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14159880)
#define EILBMOJFCFB__CTOR_OFFSET UNITYSDK_OFFSET(0x14159860)

inline static constexpr unsigned int EILBMOJFCFB_TypeDefinitionIndex = 49901;

class EILBMOJFCFB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILBMOJFCFB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILBMOJFCFB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILBMOJFCFB_GDEOPIBNOIN_OFFSET))(this);
	}
};
