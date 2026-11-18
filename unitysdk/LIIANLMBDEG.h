#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class LIIANLMBDEG_CHNOJDCAOOF;
namespace MoleMole { class UIMainCityHackerToolbarChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define LIIANLMBDEG_CCPALGEMJIK_OFFSET UNITYSDK_OFFSET(0x14DB15D0)
#define LIIANLMBDEG_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14DB1480)
#define LIIANLMBDEG_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14DB1470)
#define LIIANLMBDEG_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x14DB17D0)
#define LIIANLMBDEG_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x14DB1540)
#define LIIANLMBDEG__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB17C0)

inline static constexpr unsigned int LIIANLMBDEG_TypeDefinitionIndex = 47998;

class LIIANLMBDEG : public ::DDHEGIHEKLH
{
public:
	::LIIANLMBDEG_CHNOJDCAOOF* OBGBFHGKILC; // 0x28
	::MoleMole::UIMainCityHackerToolbarChildWindowController* OLJNIKNHCLN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIANLMBDEG__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIANLMBDEG_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LIIANLMBDEG_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIANLMBDEG_PGGAOMNFHJI_OFFSET))(this);
	}

	::MoleMole::UIMainCityHackerToolbarChildWindowController* CCPALGEMJIK()
	{
		return ((::MoleMole::UIMainCityHackerToolbarChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIANLMBDEG_CCPALGEMJIK_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIANLMBDEG_MBDFANLLCHK_OFFSET))(this);
	}
};
