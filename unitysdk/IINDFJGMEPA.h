#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPMCCCEHCE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define IINDFJGMEPA_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0xB936F40)
#define IINDFJGMEPA_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0xB936D30)
#define IINDFJGMEPA__CTOR_OFFSET UNITYSDK_OFFSET(0xB936C80)

inline static constexpr unsigned int IINDFJGMEPA_TypeDefinitionIndex = 83483;

class IINDFJGMEPA : public ::HKPMCCCEHCE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + IINDFJGMEPA__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::System::Int32 EGEGIMGMJHN, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IINDFJGMEPA_MDEDKHPODOA_OFFSET))(this, EGEGIMGMJHN, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::System::Int32 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IINDFJGMEPA_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
