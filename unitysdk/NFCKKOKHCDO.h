#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APKIIFHLPFG.h"
#include "unitysdk/System/Object.h"

class LKIABNLCKMK;

#define NFCKKOKHCDO_CCHBDNGIOOB_OFFSET UNITYSDK_OFFSET(0x18FB5080)
#define NFCKKOKHCDO_IMGHMPLNNAP_OFFSET UNITYSDK_OFFSET(0x18FB5070)
#define NFCKKOKHCDO_NJGKCNDGKBA_OFFSET UNITYSDK_OFFSET(0x18FB5090)
#define NFCKKOKHCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB5160)

inline static constexpr unsigned int NFCKKOKHCDO_TypeDefinitionIndex = 73114;

class NFCKKOKHCDO : public ::System::Object
{
public:
	::APKIIFHLPFG _AAOMKEEKOOD_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCKKOKHCDO__CTOR_OFFSET))(this);
	}

	::APKIIFHLPFG IMGHMPLNNAP()
	{
		return ((::APKIIFHLPFG(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCKKOKHCDO_IMGHMPLNNAP_OFFSET))(this);
	}

	::System::Void CCHBDNGIOOB(::APKIIFHLPFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::APKIIFHLPFG))((::PBYTE)hIl2Cpp + NFCKKOKHCDO_CCHBDNGIOOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::LKIABNLCKMK* NJGKCNDGKBA()
	{
		return ((::LKIABNLCKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCKKOKHCDO_NJGKCNDGKBA_OFFSET))(this);
	}
};
