#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BDAAPIMJMPG_HBHHOBLAFDB;
class BHECBBCIMBF;
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIWindowController; }

#define BDAAPIMJMPG_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14C34E20)
#define BDAAPIMJMPG_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14C34E10)
#define BDAAPIMJMPG_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x14C35080)
#define BDAAPIMJMPG_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x14C34EE0)
#define BDAAPIMJMPG__CTOR_OFFSET UNITYSDK_OFFSET(0x14C35070)

inline static constexpr unsigned int BDAAPIMJMPG_TypeDefinitionIndex = 92388;

class BDAAPIMJMPG : public ::DDHEGIHEKLH
{
public:
	::BDAAPIMJMPG_HBHHOBLAFDB* OBGBFHGKILC; // 0x28
	::MoleMole::UIGeneralInteractingContainerController* HAEGGCLCEJG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAAPIMJMPG__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAAPIMJMPG_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BDAAPIMJMPG_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAAPIMJMPG_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAAPIMJMPG_MBDFANLLCHK_OFFSET))(this);
	}
};
