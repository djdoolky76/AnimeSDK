#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CCPCIKJHICO_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x1453BCF0)
#define CCPCIKJHICO_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x1453BA90)
#define CCPCIKJHICO__CTOR_OFFSET UNITYSDK_OFFSET(0x1453BA50)

inline static constexpr unsigned int CCPCIKJHICO_TypeDefinitionIndex = 61828;

class CCPCIKJHICO : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CCPCIKJHICO__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCIKJHICO_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCIKJHICO_AGDBENMOGCD_OFFSET))(this);
	}
};
