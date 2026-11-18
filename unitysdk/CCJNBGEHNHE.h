#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMCLBONOOHK.h"
#include "unitysdk/System/Object.h"

class KMNLFJHLPAK;

#define CCJNBGEHNHE_LMJOOODKCJN_OFFSET UNITYSDK_OFFSET(0x15315AD0)
#define CCJNBGEHNHE_PAFBHIBENBL_OFFSET UNITYSDK_OFFSET(0x15315B30)
#define CCJNBGEHNHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15315B20)

inline static constexpr unsigned int CCJNBGEHNHE_TypeDefinitionIndex = 83374;

class CCJNBGEHNHE : public ::System::Object
{
public:
	::System::UInt32 ICKABJNDDIM; // 0x10
	::BMCLBONOOHK JAICKFPPOEO; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJNBGEHNHE__CTOR_OFFSET))(this);
	}

	::System::Void LMJOOODKCJN(::KMNLFJHLPAK* LCHLGCGCOOE)
	{
		return ((::System::Void(*)(::PVOID, ::KMNLFJHLPAK*))((::PBYTE)hIl2Cpp + CCJNBGEHNHE_LMJOOODKCJN_OFFSET))(this, LCHLGCGCOOE);
	}

	::CCJNBGEHNHE* PAFBHIBENBL(::KMNLFJHLPAK* EIFLFKIBBFH)
	{
		return ((::CCJNBGEHNHE*(*)(::PVOID, ::KMNLFJHLPAK*))((::PBYTE)hIl2Cpp + CCJNBGEHNHE_PAFBHIBENBL_OFFSET))(this, EIFLFKIBBFH);
	}
};
