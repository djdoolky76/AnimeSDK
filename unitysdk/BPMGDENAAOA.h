#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define BPMGDENAAOA_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x114060A0)
#define BPMGDENAAOA_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x11405FB0)
#define BPMGDENAAOA__CTOR_OFFSET UNITYSDK_OFFSET(0x11405F70)

inline static constexpr unsigned int BPMGDENAAOA_TypeDefinitionIndex = 51940;

class BPMGDENAAOA : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + BPMGDENAAOA__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMGDENAAOA_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMGDENAAOA_AGDBENMOGCD_OFFSET))(this);
	}
};
