#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class JCDEOJIJKEF_APCFNBOFDGD;
namespace MoleMole { class UIMainCityMessageBtnWidgetController; }
namespace MoleMole { class UIWindowController; }

#define JCDEOJIJKEF_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1659A5B0)
#define JCDEOJIJKEF_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1659A5A0)
#define JCDEOJIJKEF_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1659A760)
#define JCDEOJIJKEF_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1659A670)
#define JCDEOJIJKEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1659A750)

inline static constexpr unsigned int JCDEOJIJKEF_TypeDefinitionIndex = 49243;

class JCDEOJIJKEF : public ::DDHEGIHEKLH
{
public:
	::JCDEOJIJKEF_APCFNBOFDGD* OBGBFHGKILC; // 0x28
	::MoleMole::UIMainCityMessageBtnWidgetController* FKHLKHKLJEA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDEOJIJKEF__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDEOJIJKEF_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JCDEOJIJKEF_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDEOJIJKEF_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDEOJIJKEF_MBDFANLLCHK_OFFSET))(this);
	}
};
