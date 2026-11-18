#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define KEPGKLBAGHK_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x15B86460)
#define KEPGKLBAGHK_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x15B86370)
#define KEPGKLBAGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B86330)

inline static constexpr unsigned int KEPGKLBAGHK_TypeDefinitionIndex = 74583;

class KEPGKLBAGHK : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + KEPGKLBAGHK__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPGKLBAGHK_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPGKLBAGHK_AGDBENMOGCD_OFFSET))(this);
	}
};
