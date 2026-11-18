#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define JDHAGEHLGIC_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x14FA8850)
#define JDHAGEHLGIC_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x14FA8760)
#define JDHAGEHLGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA8720)

inline static constexpr unsigned int JDHAGEHLGIC_TypeDefinitionIndex = 89051;

class JDHAGEHLGIC : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + JDHAGEHLGIC__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHAGEHLGIC_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHAGEHLGIC_AGDBENMOGCD_OFFSET))(this);
	}
};
