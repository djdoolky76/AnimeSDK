#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class BPKFEDANDOE_MFDFMLALGAJ;
namespace MoleMole { class UIInLevelSkillButtonZiplineChangeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonZiplineTurnBackChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define BPKFEDANDOE_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14C5D100)
#define BPKFEDANDOE_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14C5D0F0)
#define BPKFEDANDOE_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x14C5D570)
#define BPKFEDANDOE_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x14C5D1C0)
#define BPKFEDANDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5D560)

inline static constexpr unsigned int BPKFEDANDOE_TypeDefinitionIndex = 42253;

class BPKFEDANDOE : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelSkillButtonZiplineTurnBackChildWindowController* OGNAGLAIDIA; // 0x28
	::BPKFEDANDOE_MFDFMLALGAJ* OBGBFHGKILC; // 0x30
	::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController* CAIOLKGPPCE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKFEDANDOE__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKFEDANDOE_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BPKFEDANDOE_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKFEDANDOE_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKFEDANDOE_MBDFANLLCHK_OFFSET))(this);
	}
};
