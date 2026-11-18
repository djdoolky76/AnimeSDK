#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMCKNFLJJAB.h"
#include "unitysdk/DGMALDHGMGK.h"

class OACGMNLPCOB;

#define FIMAFKLHHKD_AEGDNOMHJCN_OFFSET UNITYSDK_OFFSET(0x1429A280)
#define FIMAFKLHHKD_OKFCCGMNOPP_OFFSET UNITYSDK_OFFSET(0x1429A370)
#define FIMAFKLHHKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1429A1E0)

inline static constexpr unsigned int FIMAFKLHHKD_TypeDefinitionIndex = 54380;

class FIMAFKLHHKD : public ::KMCKNFLJJAB
{
public:
	::System::Single EDLIEGAHNEE; // 0x40
	::System::Single NAKDOBCPAJD; // 0x44

	::System::Void _ctor(::DGMALDHGMGK LJBPECKCCEA, ::OACGMNLPCOB* LHPFMGBDFPN)
	{
		return ((::System::Void(*)(::PVOID, ::DGMALDHGMGK, ::OACGMNLPCOB*))((::PBYTE)hIl2Cpp + FIMAFKLHHKD__CTOR_OFFSET))(this, LJBPECKCCEA, LHPFMGBDFPN);
	}

	::System::Void AEGDNOMHJCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMAFKLHHKD_AEGDNOMHJCN_OFFSET))(this);
	}

	::System::Void OKFCCGMNOPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMAFKLHHKD_OKFCCGMNOPP_OFFSET))(this);
	}
};
