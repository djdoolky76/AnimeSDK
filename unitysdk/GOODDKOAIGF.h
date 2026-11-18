#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APKIIFHLPFG.h"
#include "unitysdk/FBICIOFFGBM.h"
#include "unitysdk/Foundation/AssetPath.h"

#define GOODDKOAIGF_CCHBDNGIOOB_OFFSET UNITYSDK_OFFSET(0x13D6F4F0)
#define GOODDKOAIGF_FOJHFIBLLJO_OFFSET UNITYSDK_OFFSET(0x13D6F520)
#define GOODDKOAIGF_IMGHMPLNNAP_OFFSET UNITYSDK_OFFSET(0x13D6F4E0)
#define GOODDKOAIGF_JOHLFFINADC_OFFSET UNITYSDK_OFFSET(0x13D6F510)
#define GOODDKOAIGF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6F500)

inline static constexpr unsigned int GOODDKOAIGF_TypeDefinitionIndex = 68617;

class GOODDKOAIGF : public ::FBICIOFFGBM
{
public:
	::Foundation::AssetPath _CAOGKGCIIFH_k__BackingField; // 0x38
	::APKIIFHLPFG _AAOMKEEKOOD_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODDKOAIGF__CTOR_OFFSET))(this);
	}

	::APKIIFHLPFG IMGHMPLNNAP()
	{
		return ((::APKIIFHLPFG(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODDKOAIGF_IMGHMPLNNAP_OFFSET))(this);
	}

	::System::Void CCHBDNGIOOB(::APKIIFHLPFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::APKIIFHLPFG))((::PBYTE)hIl2Cpp + GOODDKOAIGF_CCHBDNGIOOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JOHLFFINADC(::Foundation::AssetPath EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + GOODDKOAIGF_JOHLFFINADC_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::AssetPath FOJHFIBLLJO()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODDKOAIGF_FOJHFIBLLJO_OFFSET))(this);
	}
};
