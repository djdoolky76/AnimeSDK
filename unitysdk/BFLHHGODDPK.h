#pragma once
#include "unitysdk/unitysdk.h"

#define BFLHHGODDPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D22F10)
#define BFLHHGODDPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D23070)
#define BFLHHGODDPK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D23050)

inline static constexpr unsigned int BFLHHGODDPK_TypeDefinitionIndex = 57203;

class BFLHHGODDPK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLHHGODDPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLHHGODDPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLHHGODDPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
