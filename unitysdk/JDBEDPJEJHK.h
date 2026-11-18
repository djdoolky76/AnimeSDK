#pragma once
#include "unitysdk/unitysdk.h"

#define JDBEDPJEJHK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153CB9B0)
#define JDBEDPJEJHK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x153CBB00)
#define JDBEDPJEJHK__CTOR_OFFSET UNITYSDK_OFFSET(0x153CBAF0)

inline static constexpr unsigned int JDBEDPJEJHK_TypeDefinitionIndex = 52509;

class JDBEDPJEJHK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBEDPJEJHK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBEDPJEJHK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBEDPJEJHK_GDEOPIBNOIN_OFFSET))(this);
	}
};
