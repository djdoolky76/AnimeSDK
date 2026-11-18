#pragma once
#include "unitysdk/unitysdk.h"

#define DGPGEPEMDFI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7F77520)
#define DGPGEPEMDFI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7F776C0)
#define DGPGEPEMDFI__CTOR_OFFSET UNITYSDK_OFFSET(0x7F77660)

inline static constexpr unsigned int DGPGEPEMDFI_TypeDefinitionIndex = 82352;

class DGPGEPEMDFI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPGEPEMDFI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPGEPEMDFI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPGEPEMDFI_GDEOPIBNOIN_OFFSET))(this);
	}
};
