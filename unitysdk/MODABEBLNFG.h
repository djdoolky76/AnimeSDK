#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class MODABEBLNFG_CFNDBJOPBJJ;
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define MODABEBLNFG_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x127444A0)
#define MODABEBLNFG_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x12744490)
#define MODABEBLNFG_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x12744690)
#define MODABEBLNFG_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x12744560)
#define MODABEBLNFG__CTOR_OFFSET UNITYSDK_OFFSET(0x12744680)

inline static constexpr unsigned int MODABEBLNFG_TypeDefinitionIndex = 82810;

class MODABEBLNFG : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelDamageTextContainerChildWindowController* IPLAPKDDLNJ; // 0x28
	::MODABEBLNFG_CFNDBJOPBJJ* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODABEBLNFG__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MODABEBLNFG_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MODABEBLNFG_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODABEBLNFG_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODABEBLNFG_MBDFANLLCHK_OFFSET))(this);
	}
};
