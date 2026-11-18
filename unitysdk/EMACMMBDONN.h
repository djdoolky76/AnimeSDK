#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class EMACMMBDONN_HCPJEKADGEB;
namespace MoleMole { class UIGeneralReturnUpToolbarChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonQteDoorInteractChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole { class UIZenkovUnLockedGameWidgetController; }

#define EMACMMBDONN_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x11CB7FC0)
#define EMACMMBDONN_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x11CB7FB0)
#define EMACMMBDONN_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x11CB8220)
#define EMACMMBDONN_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x11CB84B0)
#define EMACMMBDONN_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x11CB8540)
#define EMACMMBDONN_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x11CB8080)
#define EMACMMBDONN__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB84A0)

inline static constexpr unsigned int EMACMMBDONN_TypeDefinitionIndex = 86577;

class EMACMMBDONN : public ::DDHEGIHEKLH
{
public:
	::EMACMMBDONN_HCPJEKADGEB* OBGBFHGKILC; // 0x28
	::MoleMole::UIZenkovUnLockedGameWidgetController* IEPJOMEBFIO; // 0x30
	::MoleMole::UIInLevelSkillButtonQteDoorInteractChildWindowController* ENACANHLIMO; // 0x38
	::MoleMole::UIGeneralReturnUpToolbarChildWindowController* OLJNIKNHCLN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + EMACMMBDONN_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACMMBDONN_MBDFANLLCHK_OFFSET))(this);
	}
};
