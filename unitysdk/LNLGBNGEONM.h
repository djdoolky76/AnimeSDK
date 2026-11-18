#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILMKONAJBGC;
class MPMEAEJKFEJ;

#define LNLGBNGEONM_HAEPBCFIKIN_OFFSET UNITYSDK_OFFSET(0xD43A9B0)
#define LNLGBNGEONM_JFLNBJIALHD_OFFSET UNITYSDK_OFFSET(0xD43AA80)
#define LNLGBNGEONM_LNKMMHHPDDA_OFFSET UNITYSDK_OFFSET(0xD43AB80)
#define LNLGBNGEONM__CTOR_OFFSET UNITYSDK_OFFSET(0xD43A9A0)

inline static constexpr unsigned int LNLGBNGEONM_TypeDefinitionIndex = 75651;

class LNLGBNGEONM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLGBNGEONM__CTOR_OFFSET))(this);
	}

	static ::ILMKONAJBGC* HAEPBCFIKIN()
	{
		return ((::ILMKONAJBGC*(*)())((::PBYTE)hIl2Cpp + LNLGBNGEONM_HAEPBCFIKIN_OFFSET))();
	}

	static ::System::Int32 JFLNBJIALHD()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LNLGBNGEONM_JFLNBJIALHD_OFFSET))();
	}

	static ::MPMEAEJKFEJ* LNKMMHHPDDA()
	{
		return ((::MPMEAEJKFEJ*(*)())((::PBYTE)hIl2Cpp + LNLGBNGEONM_LNKMMHHPDDA_OFFSET))();
	}
};
