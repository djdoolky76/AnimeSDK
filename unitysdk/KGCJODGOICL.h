#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class KGCJODGOICL_JHALNJPJLAH;
namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace MoleMole { class UIWindowController; }

#define KGCJODGOICL_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x17907E80)
#define KGCJODGOICL_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x17907E70)
#define KGCJODGOICL_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x17908020)
#define KGCJODGOICL_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x17907F40)
#define KGCJODGOICL__CTOR_OFFSET UNITYSDK_OFFSET(0x17908010)

inline static constexpr unsigned int KGCJODGOICL_TypeDefinitionIndex = 56552;

class KGCJODGOICL : public ::DDHEGIHEKLH
{
public:
	::KGCJODGOICL_JHALNJPJLAH* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelUpToolBarBossWidgetController* IBENCJHPLLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCJODGOICL__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCJODGOICL_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + KGCJODGOICL_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCJODGOICL_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCJODGOICL_MBDFANLLCHK_OFFSET))(this);
	}
};
