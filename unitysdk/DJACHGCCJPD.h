#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define DJACHGCCJPD_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x19D65690)
#define DJACHGCCJPD_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x19D655A0)
#define DJACHGCCJPD__CTOR_OFFSET UNITYSDK_OFFSET(0x19D65560)

inline static constexpr unsigned int DJACHGCCJPD_TypeDefinitionIndex = 65743;

class DJACHGCCJPD : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + DJACHGCCJPD__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJACHGCCJPD_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJACHGCCJPD_AGDBENMOGCD_OFFSET))(this);
	}
};
