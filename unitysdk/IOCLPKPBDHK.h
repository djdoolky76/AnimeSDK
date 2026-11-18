#pragma once
#include "unitysdk/unitysdk.h"

#define IOCLPKPBDHK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x197E2120)
#define IOCLPKPBDHK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x197E2280)
#define IOCLPKPBDHK__CTOR_OFFSET UNITYSDK_OFFSET(0x197E2260)

inline static constexpr unsigned int IOCLPKPBDHK_TypeDefinitionIndex = 71352;

class IOCLPKPBDHK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCLPKPBDHK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCLPKPBDHK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCLPKPBDHK_GDEOPIBNOIN_OFFSET))(this);
	}
};
