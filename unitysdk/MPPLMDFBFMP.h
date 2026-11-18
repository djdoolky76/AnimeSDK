#pragma once
#include "unitysdk/unitysdk.h"

#define MPPLMDFBFMP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1C5A1890)
#define MPPLMDFBFMP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1C5A1BE0)
#define MPPLMDFBFMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A1A40)

inline static constexpr unsigned int MPPLMDFBFMP_TypeDefinitionIndex = 64343;

class MPPLMDFBFMP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPLMDFBFMP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPLMDFBFMP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPLMDFBFMP_GDEOPIBNOIN_OFFSET))(this);
	}
};
