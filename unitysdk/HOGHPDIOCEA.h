#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPMCCCEHCE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define HOGHPDIOCEA_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x14D3ABC0)
#define HOGHPDIOCEA_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x14D3A9C0)
#define HOGHPDIOCEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3A910)

inline static constexpr unsigned int HOGHPDIOCEA_TypeDefinitionIndex = 87832;

class HOGHPDIOCEA : public ::HKPMCCCEHCE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + HOGHPDIOCEA__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::System::Int32 EGEGIMGMJHN, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOGHPDIOCEA_MDEDKHPODOA_OFFSET))(this, EGEGIMGMJHN, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::System::Int32 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOGHPDIOCEA_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
