#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NOCIEEBMEJN_ONMLJAAJLGM;
namespace MoleMole { class UIInLevelSkillButtonBangBooAChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonBangbooBranchChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonBangbooDChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonBangbooJumpChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonUltBangBooChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }

#define NOCIEEBMEJN_ELCNKECEHJA_OFFSET UNITYSDK_OFFSET(0x10DAD840)
#define NOCIEEBMEJN_FGAEBAOEKMJ_OFFSET UNITYSDK_OFFSET(0x10DAD970)
#define NOCIEEBMEJN_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x10DAD3F0)
#define NOCIEEBMEJN_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x10DAD3E0)
#define NOCIEEBMEJN_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x10DAD8E0)
#define NOCIEEBMEJN_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x10DAD4B0)
#define NOCIEEBMEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x10DAD830)

inline static constexpr unsigned int NOCIEEBMEJN_TypeDefinitionIndex = 88860;

class NOCIEEBMEJN : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelSkillButtonBangbooBranchChildWindowController* MAAHDHPKOEG; // 0x28
	::MoleMole::UIInLevelSkillButtonBangbooDChildWindowController* HIPONMOMMHI; // 0x30
	::MoleMole::UIInLevelSkillButtonBangbooJumpChildWindowController* INOFDIFAHAE; // 0x38
	::NOCIEEBMEJN_ONMLJAAJLGM* OBGBFHGKILC; // 0x40
	::MoleMole::UIInLevelSkillButtonBangBooAChildWindowController* CFAFLOFIMHK; // 0x48
	::MoleMole::UIInLevelSkillButtonUltBangBooChildWindowController* COMGDILCFKB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCIEEBMEJN__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void ELCNKECEHJA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_ELCNKECEHJA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void FGAEBAOEKMJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_FGAEBAOEKMJ_OFFSET))(this, KOIBHLHLMFC);
	}
};
