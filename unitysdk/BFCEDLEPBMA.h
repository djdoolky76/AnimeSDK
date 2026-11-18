#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BFCEDLEPBMA_PKCEANAPNHB;
class BHECBBCIMBF;
namespace MoleMole { class UIHackDroneOutOfRangeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonDroneDownChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonDroneRechargeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonDroneUpChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonHackChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define BFCEDLEPBMA_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x12681C60)
#define BFCEDLEPBMA_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x12681C50)
#define BFCEDLEPBMA_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x12682000)
#define BFCEDLEPBMA_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x12681D20)
#define BFCEDLEPBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x12681FF0)

inline static constexpr unsigned int BFCEDLEPBMA_TypeDefinitionIndex = 55527;

class BFCEDLEPBMA : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelSkillButtonHackChildWindowController* PPEKDAFPGCF; // 0x28
	::BFCEDLEPBMA_PKCEANAPNHB* OBGBFHGKILC; // 0x30
	::MoleMole::UIInLevelSkillButtonDroneRechargeChildWindowController* FACDEENPMGI; // 0x38
	::MoleMole::UIInLevelSkillButtonDroneUpChildWindowController* BGJJIFEMKJK; // 0x40
	::MoleMole::UIInLevelSkillButtonDroneDownChildWindowController* DMIHFDLAHMI; // 0x48
	::MoleMole::UIHackDroneOutOfRangeChildWindowController* BCEMOCMJELA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEDLEPBMA__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEDLEPBMA_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BFCEDLEPBMA_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEDLEPBMA_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEDLEPBMA_MBDFANLLCHK_OFFSET))(this);
	}
};
