#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class OJFBIMJGCPP_HFJEBGLOFEA;
namespace MoleMole { class UIMultiInteractionTargetListChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }

#define OJFBIMJGCPP_CBPEFGGHBMA_OFFSET UNITYSDK_OFFSET(0x13685700)
#define OJFBIMJGCPP_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x13685530)
#define OJFBIMJGCPP_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x13685520)
#define OJFBIMJGCPP_HGNPINPHOLG_OFFSET UNITYSDK_OFFSET(0x13685980)
#define OJFBIMJGCPP_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x136858F0)
#define OJFBIMJGCPP_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x136855F0)
#define OJFBIMJGCPP__CTOR_OFFSET UNITYSDK_OFFSET(0x136856F0)

inline static constexpr unsigned int OJFBIMJGCPP_TypeDefinitionIndex = 59011;

class OJFBIMJGCPP : public ::DDHEGIHEKLH
{
public:
	::OJFBIMJGCPP_HFJEBGLOFEA* OBGBFHGKILC; // 0x28
	::MoleMole::UIMultiInteractionTargetListChildWindowController* MEKOBGMKLGH; // 0x30
	::System::Boolean GMOGALHANAG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBIMJGCPP__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void CBPEFGGHBMA(::System::EventArgs* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_CBPEFGGHBMA_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void HGNPINPHOLG(::System::Boolean JHHGNJHIKBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_HGNPINPHOLG_OFFSET))(this, JHHGNJHIKBL);
	}
};
