#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APKIIFHLPFG.h"
#include "unitysdk/FBICIOFFGBM.h"
#include "unitysdk/Foundation/AssetPath.h"

#define HFGFPHPBDOA_CCHBDNGIOOB_OFFSET UNITYSDK_OFFSET(0x140A39D0)
#define HFGFPHPBDOA_FOJHFIBLLJO_OFFSET UNITYSDK_OFFSET(0x140A39F0)
#define HFGFPHPBDOA_IMGHMPLNNAP_OFFSET UNITYSDK_OFFSET(0x140A39C0)
#define HFGFPHPBDOA_JOHLFFINADC_OFFSET UNITYSDK_OFFSET(0x140A3A00)
#define HFGFPHPBDOA__CTOR_OFFSET UNITYSDK_OFFSET(0x140A39E0)

inline static constexpr unsigned int HFGFPHPBDOA_TypeDefinitionIndex = 71073;

class HFGFPHPBDOA : public ::FBICIOFFGBM
{
public:
	::Foundation::AssetPath _CAOGKGCIIFH_k__BackingField; // 0x38
	::APKIIFHLPFG _AAOMKEEKOOD_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGFPHPBDOA__CTOR_OFFSET))(this);
	}

	::APKIIFHLPFG IMGHMPLNNAP()
	{
		return ((::APKIIFHLPFG(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGFPHPBDOA_IMGHMPLNNAP_OFFSET))(this);
	}

	::System::Void CCHBDNGIOOB(::APKIIFHLPFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::APKIIFHLPFG))((::PBYTE)hIl2Cpp + HFGFPHPBDOA_CCHBDNGIOOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::AssetPath FOJHFIBLLJO()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGFPHPBDOA_FOJHFIBLLJO_OFFSET))(this);
	}

	::System::Void JOHLFFINADC(::Foundation::AssetPath EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HFGFPHPBDOA_JOHLFFINADC_OFFSET))(this, EGEGIMGMJHN);
	}
};
