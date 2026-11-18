#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define MKOOONJAPLJ_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x13196220)
#define MKOOONJAPLJ_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x131960A0)
#define MKOOONJAPLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13196060)

inline static constexpr unsigned int MKOOONJAPLJ_TypeDefinitionIndex = 68130;

class MKOOONJAPLJ : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + MKOOONJAPLJ__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOOONJAPLJ_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOOONJAPLJ_AGDBENMOGCD_OFFSET))(this);
	}
};
