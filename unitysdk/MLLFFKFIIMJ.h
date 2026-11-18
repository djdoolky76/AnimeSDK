#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPMCCCEHCE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define MLLFFKFIIMJ_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x18B57560)
#define MLLFFKFIIMJ_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x18B57360)
#define MLLFFKFIIMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B572B0)

inline static constexpr unsigned int MLLFFKFIIMJ_TypeDefinitionIndex = 79898;

class MLLFFKFIIMJ : public ::HKPMCCCEHCE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + MLLFFKFIIMJ__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA(::System::Int32 EGEGIMGMJHN, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MLLFFKFIIMJ_MDEDKHPODOA_OFFSET))(this, EGEGIMGMJHN, FLMNJOFKIKI);
	}

	::System::Void AGDBENMOGCD(::System::Int32 MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MLLFFKFIIMJ_AGDBENMOGCD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
