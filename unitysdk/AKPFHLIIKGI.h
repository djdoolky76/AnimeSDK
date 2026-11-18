#pragma once
#include "unitysdk/unitysdk.h"

#define AKPFHLIIKGI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x144F4270)
#define AKPFHLIIKGI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x144F4410)
#define AKPFHLIIKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x144F43B0)

inline static constexpr unsigned int AKPFHLIIKGI_TypeDefinitionIndex = 49799;

class AKPFHLIIKGI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPFHLIIKGI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPFHLIIKGI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPFHLIIKGI_GDEOPIBNOIN_OFFSET))(this);
	}
};
