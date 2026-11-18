#pragma once
#include "unitysdk/unitysdk.h"

#define JOLLIBAAGJD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18A28D10)
#define JOLLIBAAGJD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18A28EB0)
#define JOLLIBAAGJD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A28E50)

inline static constexpr unsigned int JOLLIBAAGJD_TypeDefinitionIndex = 76602;

class JOLLIBAAGJD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLLIBAAGJD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLLIBAAGJD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLLIBAAGJD_GDEOPIBNOIN_OFFSET))(this);
	}
};
