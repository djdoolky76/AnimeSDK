#pragma once
#include "unitysdk/unitysdk.h"

#define NJCMPIIHLGK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE582D30)
#define NJCMPIIHLGK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE582E90)
#define NJCMPIIHLGK__CTOR_OFFSET UNITYSDK_OFFSET(0xE582E70)

inline static constexpr unsigned int NJCMPIIHLGK_TypeDefinitionIndex = 51174;

class NJCMPIIHLGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCMPIIHLGK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCMPIIHLGK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCMPIIHLGK_GDEOPIBNOIN_OFFSET))(this);
	}
};
