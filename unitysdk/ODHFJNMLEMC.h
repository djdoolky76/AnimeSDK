#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPMCCCEHCE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define ODHFJNMLEMC_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x16BFF1D0)
#define ODHFJNMLEMC_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x16BFF180)
#define ODHFJNMLEMC__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFF0D0)

inline static constexpr unsigned int ODHFJNMLEMC_TypeDefinitionIndex = 41958;

class ODHFJNMLEMC : public ::HKPMCCCEHCE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + ODHFJNMLEMC__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::System::Int32 EGEGIMGMJHN, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ODHFJNMLEMC_MDEDKHPODOA_OFFSET))(this, EGEGIMGMJHN, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::System::Int32 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ODHFJNMLEMC_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
