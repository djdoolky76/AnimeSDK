#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHHBOHLBJA.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define OGBOKOHLKPB_AGDBENMOGCD_OFFSET UNITYSDK_OFFSET(0x1B786680)
#define OGBOKOHLKPB_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x1B786640)
#define OGBOKOHLKPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B786600)

inline static constexpr unsigned int OGBOKOHLKPB_TypeDefinitionIndex = 53615;

class OGBOKOHLKPB : public ::DKHHBOHLBJA
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + OGBOKOHLKPB__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBOKOHLKPB_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void AGDBENMOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBOKOHLKPB_AGDBENMOGCD_OFFSET))(this);
	}
};
