#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class CGKIDDDOMKI_LDKDNIMGKMO;
namespace MoleMole { class UIBangkovBagBtnWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CGKIDDDOMKI_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x145C26A0)
#define CGKIDDDOMKI_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x145C2690)
#define CGKIDDDOMKI_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x145C2850)
#define CGKIDDDOMKI_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x145C2760)
#define CGKIDDDOMKI__CTOR_OFFSET UNITYSDK_OFFSET(0x145C2840)

inline static constexpr unsigned int CGKIDDDOMKI_TypeDefinitionIndex = 42972;

class CGKIDDDOMKI : public ::DDHEGIHEKLH
{
public:
	::CGKIDDDOMKI_LDKDNIMGKMO* OBGBFHGKILC; // 0x28
	::MoleMole::UIBangkovBagBtnWidgetController* IOPGGNDLDOL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKIDDDOMKI__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKIDDDOMKI_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CGKIDDDOMKI_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKIDDDOMKI_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKIDDDOMKI_MBDFANLLCHK_OFFSET))(this);
	}
};
