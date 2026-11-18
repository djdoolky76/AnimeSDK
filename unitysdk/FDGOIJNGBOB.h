#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class FDGOIJNGBOB_IEJIJHBKDNA;
namespace MoleMole { class UIEtherEyesInteractBtnChildWindowController; }
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIInLevelSKillButtonZenkovInteractChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonInteractChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define FDGOIJNGBOB_FLNLHAHOOPF_OFFSET UNITYSDK_OFFSET(0x116A7070)
#define FDGOIJNGBOB_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x116A6C80)
#define FDGOIJNGBOB_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x116A6C70)
#define FDGOIJNGBOB_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x116A6FE0)
#define FDGOIJNGBOB_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x116A6D40)
#define FDGOIJNGBOB__CTOR_OFFSET UNITYSDK_OFFSET(0x116A6FD0)

inline static constexpr unsigned int FDGOIJNGBOB_TypeDefinitionIndex = 64923;

class FDGOIJNGBOB : public ::DDHEGIHEKLH
{
public:
	::FDGOIJNGBOB_IEJIJHBKDNA* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelSKillButtonZenkovInteractChildWindowController* DOBDCLEOEPG; // 0x30
	::MoleMole::UIEtherEyesInteractBtnChildWindowController* CFMCBGHOHGD; // 0x38
	::MoleMole::UIGeneralInteractingContainerController* HAEGGCLCEJG; // 0x40
	::MoleMole::UIInLevelSkillButtonInteractChildWindowController* GKFCEKBHNAD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOIJNGBOB__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOIJNGBOB_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + FDGOIJNGBOB_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOIJNGBOB_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOIJNGBOB_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void FLNLHAHOOPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOIJNGBOB_FLNLHAHOOPF_OFFSET))(this);
	}
};
