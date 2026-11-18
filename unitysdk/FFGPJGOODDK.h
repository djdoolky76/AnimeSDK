#pragma once
#include "unitysdk/unitysdk.h"

#define FFGPJGOODDK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1320F390)
#define FFGPJGOODDK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1320F4F0)
#define FFGPJGOODDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1320F4D0)

inline static constexpr unsigned int FFGPJGOODDK_TypeDefinitionIndex = 58173;

class FFGPJGOODDK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPJGOODDK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPJGOODDK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPJGOODDK_GDEOPIBNOIN_OFFSET))(this);
	}
};
