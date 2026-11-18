#pragma once
#include "unitysdk/unitysdk.h"

#define MJDIOEELCDJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F4ED10)
#define MJDIOEELCDJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F4EEB0)
#define MJDIOEELCDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4EE50)

inline static constexpr unsigned int MJDIOEELCDJ_TypeDefinitionIndex = 83062;

class MJDIOEELCDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDIOEELCDJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDIOEELCDJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDIOEELCDJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
