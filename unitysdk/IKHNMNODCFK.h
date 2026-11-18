#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBEPKELNDPC.h"
#include "unitysdk/KHOODDJHJIL.h"

#define IKHNMNODCFK_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x153B2630)
#define IKHNMNODCFK_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x153B2640)
#define IKHNMNODCFK__CTOR_OFFSET UNITYSDK_OFFSET(0x153B29B0)

inline static constexpr unsigned int IKHNMNODCFK_TypeDefinitionIndex = 74848;

class IKHNMNODCFK : public ::KBEPKELNDPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMNODCFK__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMNODCFK_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMNODCFK_KMMIPNMJILI_OFFSET))(this);
	}
};
