#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/MDCMEPJLGOK.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define DKHHBOHLBJA_BCPLGOGNJIK_OFFSET UNITYSDK_OFFSET(0x148AFE70)
#define DKHHBOHLBJA_BLGCCANDFOO_OFFSET UNITYSDK_OFFSET(0x148AFF90)
#define DKHHBOHLBJA_MDEDKHPODOA_OFFSET UNITYSDK_OFFSET(0x148AFF50)
#define DKHHBOHLBJA_MLJGPAKIICA_OFFSET UNITYSDK_OFFSET(0x148AFEC0)
#define DKHHBOHLBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x148AFE80)

inline static constexpr unsigned int DKHHBOHLBJA_TypeDefinitionIndex = 65561;

class DKHHBOHLBJA : public ::MDCMEPJLGOK
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + DKHHBOHLBJA__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::HKIPDKIIDOD BCPLGOGNJIK()
	{
		return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHHBOHLBJA_BCPLGOGNJIK_OFFSET))(this);
	}

	::System::Void MLJGPAKIICA(::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKHHBOHLBJA_MLJGPAKIICA_OFFSET))(this, FLMNJOFKIKI);
	}

	::System::Void MDEDKHPODOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHHBOHLBJA_MDEDKHPODOA_OFFSET))(this);
	}

	::System::Void BLGCCANDFOO(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKHHBOHLBJA_BLGCCANDFOO_OFFSET))(this, MIALFKCCCPI);
	}
};
