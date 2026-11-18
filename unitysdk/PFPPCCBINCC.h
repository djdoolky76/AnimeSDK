#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class PFPPCCBINCC_DAFJPOEJPGK;
namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define PFPPCCBINCC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x178C50D0)
#define PFPPCCBINCC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x178C50C0)
#define PFPPCCBINCC_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x178C53E0)
#define PFPPCCBINCC_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x178C5190)
#define PFPPCCBINCC__CTOR_OFFSET UNITYSDK_OFFSET(0x178C53D0)

inline static constexpr unsigned int PFPPCCBINCC_TypeDefinitionIndex = 71937;

class PFPPCCBINCC : public ::DDHEGIHEKLH
{
public:
	::PFPPCCBINCC_DAFJPOEJPGK* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelGuideChildWindowController* KOAEEHOFHFO; // 0x30
	::MoleMole::UIInLevelGuideChildWindowController* JGHLDPKAMNG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPCCBINCC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPCCBINCC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PFPPCCBINCC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPCCBINCC_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPCCBINCC_MBDFANLLCHK_OFFSET))(this);
	}
};
