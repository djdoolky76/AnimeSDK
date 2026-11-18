#pragma once
#include "unitysdk/unitysdk.h"

#define POLKEKFHIHJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1BF360E0)
#define POLKEKFHIHJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1BF36280)
#define POLKEKFHIHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF36220)

inline static constexpr unsigned int POLKEKFHIHJ_TypeDefinitionIndex = 38717;

class POLKEKFHIHJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLKEKFHIHJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLKEKFHIHJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLKEKFHIHJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
