#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define BLEFMIPGKCI_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x15081210)
#define BLEFMIPGKCI_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x150810D0)
#define BLEFMIPGKCI__CTOR_OFFSET UNITYSDK_OFFSET(0x15081090)

inline static constexpr unsigned int BLEFMIPGKCI_TypeDefinitionIndex = 50065;

class BLEFMIPGKCI : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + BLEFMIPGKCI__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEFMIPGKCI_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEFMIPGKCI_AGDBENMOGCD_OFFSET))(this);
	}
};
