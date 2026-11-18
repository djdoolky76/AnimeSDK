#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPMCCCEHCE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define KDMGJGGHJDM_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x16337150)
#define KDMGJGGHJDM_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x16337040)
#define KDMGJGGHJDM__CTOR_OFFSET UNITYSDK_OFFSET(0x16336F90)

inline static constexpr unsigned int KDMGJGGHJDM_TypeDefinitionIndex = 47972;

class KDMGJGGHJDM : public ::HKPMCCCEHCE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + KDMGJGGHJDM__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::System::Int32 EGEGIMGMJHN, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMGJGGHJDM_MDEDKHPODOA_OFFSET))(this, EGEGIMGMJHN, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::System::Int32 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMGJGGHJDM_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
