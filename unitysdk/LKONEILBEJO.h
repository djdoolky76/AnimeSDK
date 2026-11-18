#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class LKONEILBEJO_NCDBDMGMNAO;
namespace MoleMole { class UIMainCityMiniMenuWidgetController; }
namespace MoleMole { class UIWindowController; }

#define LKONEILBEJO_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x12592E30)
#define LKONEILBEJO_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x12592E20)
#define LKONEILBEJO_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x12592FC0)
#define LKONEILBEJO_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x12592EF0)
#define LKONEILBEJO__CTOR_OFFSET UNITYSDK_OFFSET(0x12592FB0)

inline static constexpr unsigned int LKONEILBEJO_TypeDefinitionIndex = 82998;

class LKONEILBEJO : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIMainCityMiniMenuWidgetController* FGIAAADPENK; // 0x28
	::LKONEILBEJO_NCDBDMGMNAO* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKONEILBEJO__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LKONEILBEJO_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LKONEILBEJO_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKONEILBEJO_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKONEILBEJO_MBDFANLLCHK_OFFSET))(this);
	}
};
