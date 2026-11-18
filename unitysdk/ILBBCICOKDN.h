#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPMCCCEHCE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define ILBBCICOKDN_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x19880B60)
#define ILBBCICOKDN_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x198809F0)
#define ILBBCICOKDN__CTOR_OFFSET UNITYSDK_OFFSET(0x19880940)

inline static constexpr unsigned int ILBBCICOKDN_TypeDefinitionIndex = 61249;

class ILBBCICOKDN : public ::HKPMCCCEHCE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + ILBBCICOKDN__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::System::Int32 EGEGIMGMJHN, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ILBBCICOKDN_MDEDKHPODOA_OFFSET))(this, EGEGIMGMJHN, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::System::Int32 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ILBBCICOKDN_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
