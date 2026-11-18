#pragma once
#include "unitysdk/unitysdk.h"

#define EKAOGMNLKAN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16155050)
#define EKAOGMNLKAN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x161551F0)
#define EKAOGMNLKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x16155190)

inline static constexpr unsigned int EKAOGMNLKAN_TypeDefinitionIndex = 43619;

class EKAOGMNLKAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOGMNLKAN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOGMNLKAN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOGMNLKAN_GDEOPIBNOIN_OFFSET))(this);
	}
};
