#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class CGMJNELECEM_BBJLJHIHHPE;
namespace MoleMole { class UIMainCityCameraBtnWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CGMJNELECEM_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x139C5230)
#define CGMJNELECEM_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x139C5220)
#define CGMJNELECEM_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x139C5400)
#define CGMJNELECEM_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x139C52F0)
#define CGMJNELECEM__CTOR_OFFSET UNITYSDK_OFFSET(0x139C53F0)

inline static constexpr unsigned int CGMJNELECEM_TypeDefinitionIndex = 92099;

class CGMJNELECEM : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIMainCityCameraBtnWidgetController* OPGIAIECCHL; // 0x28
	::CGMJNELECEM_BBJLJHIHHPE* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMJNELECEM__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMJNELECEM_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CGMJNELECEM_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMJNELECEM_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMJNELECEM_MBDFANLLCHK_OFFSET))(this);
	}
};
