#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABHLKDOAKH.h"

class KJBHIMDDCPG;

#define JBIDPMHLBCB_ABDCJKILDFF_OFFSET UNITYSDK_OFFSET(0x1EFAC430)
#define JBIDPMHLBCB_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x1EFAC9F0)
#define JBIDPMHLBCB_GNLJIHOBBKD_OFFSET UNITYSDK_OFFSET(0x1EFACAD0)
#define JBIDPMHLBCB_KBMFKANENAJ_OFFSET UNITYSDK_OFFSET(0x1EFAC810)
#define JBIDPMHLBCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAC9D0)

inline static constexpr unsigned int JBIDPMHLBCB_TypeDefinitionIndex = 94913;

class JBIDPMHLBCB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDPMHLBCB__CTOR_OFFSET))(this);
	}

	::System::Void ABDCJKILDFF(::KJBHIMDDCPG* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KJBHIMDDCPG*))((::PBYTE)hIl2Cpp + JBIDPMHLBCB_ABDCJKILDFF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void KBMFKANENAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDPMHLBCB_KBMFKANENAJ_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIDPMHLBCB_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void GNLJIHOBBKD(::BABHLKDOAKH ODCJHBGIGCH)
	{
		return ((::System::Void(*)(::PVOID, ::BABHLKDOAKH))((::PBYTE)hIl2Cpp + JBIDPMHLBCB_GNLJIHOBBKD_OFFSET))(this, ODCJHBGIGCH);
	}
};
