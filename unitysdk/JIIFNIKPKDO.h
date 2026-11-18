#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class JIIFNIKPKDO_JDKBJGEPLDP;
namespace MoleMole { class UIMainCityActionTipsWidgetController; }
namespace MoleMole { class UIMainCityClockWidgetController; }
namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace MoleMole { class UIWindowController; }

#define JIIFNIKPKDO_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14A7F370)
#define JIIFNIKPKDO_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14A7F360)
#define JIIFNIKPKDO_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x14A7F5E0)
#define JIIFNIKPKDO_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x14A7F430)
#define JIIFNIKPKDO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7F5D0)

inline static constexpr unsigned int JIIFNIKPKDO_TypeDefinitionIndex = 93160;

class JIIFNIKPKDO : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIMainCityClockWidgetController* OGMLJBJDIPB; // 0x28
	::JIIFNIKPKDO_JDKBJGEPLDP* OBGBFHGKILC; // 0x30
	::MoleMole::UIMainCityActionTipsWidgetController* OJIPJMJHEMF; // 0x38
	::MoleMole::UIMainCityPersonalOutWidgetController* APPMOJCICPN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIFNIKPKDO__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIFNIKPKDO_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JIIFNIKPKDO_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIFNIKPKDO_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIFNIKPKDO_MBDFANLLCHK_OFFSET))(this);
	}
};
