#pragma once
#include "unitysdk/unitysdk.h"

#define HOANHCLEOED_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12E90BF0)
#define HOANHCLEOED_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12E90D90)
#define HOANHCLEOED__CTOR_OFFSET UNITYSDK_OFFSET(0x12E90D30)

inline static constexpr unsigned int HOANHCLEOED_TypeDefinitionIndex = 59578;

class HOANHCLEOED
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANHCLEOED__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANHCLEOED_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANHCLEOED_GDEOPIBNOIN_OFFSET))(this);
	}
};
