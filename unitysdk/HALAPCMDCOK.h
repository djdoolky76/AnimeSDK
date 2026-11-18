#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPMCCCEHCE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define HALAPCMDCOK_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x19DECD80)
#define HALAPCMDCOK_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x19DECB70)
#define HALAPCMDCOK__CTOR_OFFSET UNITYSDK_OFFSET(0x19DECAC0)

inline static constexpr unsigned int HALAPCMDCOK_TypeDefinitionIndex = 44687;

class HALAPCMDCOK : public ::HKPMCCCEHCE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + HALAPCMDCOK__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::System::Int32 EGEGIMGMJHN, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HALAPCMDCOK_MDEDKHPODOA_OFFSET))(this, EGEGIMGMJHN, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::System::Int32 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HALAPCMDCOK_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
