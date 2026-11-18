#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define BOLGJGONEJF_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x14C57A00)
#define BOLGJGONEJF_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x14C57910)
#define BOLGJGONEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x14C578D0)

inline static constexpr unsigned int BOLGJGONEJF_TypeDefinitionIndex = 79380;

class BOLGJGONEJF : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + BOLGJGONEJF__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLGJGONEJF_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLGJGONEJF_AGDBENMOGCD_OFFSET))(this);
	}
};
