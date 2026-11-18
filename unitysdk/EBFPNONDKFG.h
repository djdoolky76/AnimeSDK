#pragma once
#include "unitysdk/unitysdk.h"

#define EBFPNONDKFG_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x1F648160)
#define EBFPNONDKFG_KBMFKANENAJ_OFFSET UNITYSDK_OFFSET(0x1F647F10)
#define EBFPNONDKFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6480D0)

inline static constexpr unsigned int EBFPNONDKFG_TypeDefinitionIndex = 95164;

class EBFPNONDKFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFPNONDKFG__CTOR_OFFSET))(this);
	}

	::System::Void KBMFKANENAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFPNONDKFG_KBMFKANENAJ_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFPNONDKFG_DOPGAFCKMNF_OFFSET))(this);
	}
};
