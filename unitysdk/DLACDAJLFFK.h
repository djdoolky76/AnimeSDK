#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class DLACDAJLFFK_JOGHHCGKHNH;
namespace MoleMole { class UIInLevelSkillButtonHackChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonHackLittleRobotInteractChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonLittleRobotChangeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonLittleRobotSkillChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define DLACDAJLFFK_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x12BB53A0)
#define DLACDAJLFFK_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x12BB5390)
#define DLACDAJLFFK_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x12BB56D0)
#define DLACDAJLFFK_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x12BB5460)
#define DLACDAJLFFK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB56C0)

inline static constexpr unsigned int DLACDAJLFFK_TypeDefinitionIndex = 92566;

class DLACDAJLFFK : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelSkillButtonHackChildWindowController* PPEKDAFPGCF; // 0x28
	::MoleMole::UIInLevelSkillButtonHackLittleRobotInteractChildWindowController* GKFCEKBHNAD; // 0x30
	::DLACDAJLFFK_JOGHHCGKHNH* OBGBFHGKILC; // 0x38
	::MoleMole::UIInLevelSkillButtonLittleRobotSkillChildWindowController* NJDIGGFGMNN; // 0x40
	::MoleMole::UIInLevelSkillButtonLittleRobotChangeChildWindowController* HOMFPAJANLO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLACDAJLFFK__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + DLACDAJLFFK_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + DLACDAJLFFK_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLACDAJLFFK_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLACDAJLFFK_MBDFANLLCHK_OFFSET))(this);
	}
};
