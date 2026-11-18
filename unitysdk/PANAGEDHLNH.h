#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class PANAGEDHLNH_AHMLJJOKEMD;
namespace MoleMole { class UIInLevelSkillButtonReviveChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonWatchSwitchChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define PANAGEDHLNH_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x15523D30)
#define PANAGEDHLNH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x15523FC0)
#define PANAGEDHLNH_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x15523D20)
#define PANAGEDHLNH_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x15523F60)
#define PANAGEDHLNH_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x15524090)
#define PANAGEDHLNH_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x15523DF0)
#define PANAGEDHLNH__CTOR_OFFSET UNITYSDK_OFFSET(0x15524080)

inline static constexpr unsigned int PANAGEDHLNH_TypeDefinitionIndex = 51613;

class PANAGEDHLNH : public ::DDHEGIHEKLH
{
public:
	::PANAGEDHLNH_AHMLJJOKEMD* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelSkillButtonReviveChildWindowController* FPDFLJIEFDD; // 0x30
	::MoleMole::UIInLevelSkillButtonWatchSwitchChildWindowController* NOHGJKJBFMO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PANAGEDHLNH_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH_MBDFANLLCHK_OFFSET))(this);
	}
};
