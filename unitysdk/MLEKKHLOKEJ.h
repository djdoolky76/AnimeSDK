#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMCKNFLJJAB.h"
#include "unitysdk/DGMALDHGMGK.h"

class OACGMNLPCOB;

#define MLEKKHLOKEJ_AEGDNOMHJCN_OFFSET UNITYSDK_OFFSET(0x1A699870)
#define MLEKKHLOKEJ_OKFCCGMNOPP_OFFSET UNITYSDK_OFFSET(0x1A6998F0)
#define MLEKKHLOKEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6997D0)

inline static constexpr unsigned int MLEKKHLOKEJ_TypeDefinitionIndex = 41192;

class MLEKKHLOKEJ : public ::KMCKNFLJJAB
{
public:
	::System::Single IJJJJELADMA; // 0x40
	::System::Single GELONOIBGEO; // 0x44

	::System::Void _ctor(::DGMALDHGMGK LJBPECKCCEA, ::OACGMNLPCOB* LHPFMGBDFPN)
	{
		return ((::System::Void(*)(::PVOID, ::DGMALDHGMGK, ::OACGMNLPCOB*))((::PBYTE)hIl2Cpp + MLEKKHLOKEJ__CTOR_OFFSET))(this, LJBPECKCCEA, LHPFMGBDFPN);
	}

	::System::Void AEGDNOMHJCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEKKHLOKEJ_AEGDNOMHJCN_OFFSET))(this);
	}

	::System::Void OKFCCGMNOPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEKKHLOKEJ_OKFCCGMNOPP_OFFSET))(this);
	}
};
