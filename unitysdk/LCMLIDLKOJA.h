#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDBGIKCGHLI.h"

namespace MoleMole { class UIWindowController; }

#define LCMLIDLKOJA_EMLAMDDJEFN_OFFSET UNITYSDK_OFFSET(0x18655EA0)
#define LCMLIDLKOJA_GIJFNPLLKBO_OFFSET UNITYSDK_OFFSET(0x18655A60)
#define LCMLIDLKOJA_JLNHPLPFOCN_OFFSET UNITYSDK_OFFSET(0x18655E10)
#define LCMLIDLKOJA_JMABBOOMBHA_OFFSET UNITYSDK_OFFSET(0x18655710)
#define LCMLIDLKOJA_KFNMKPNIDMG_OFFSET UNITYSDK_OFFSET(0x18655C30)
#define LCMLIDLKOJA_PMMICFBIGOB_OFFSET UNITYSDK_OFFSET(0x18655D80)
#define LCMLIDLKOJA__CTOR_OFFSET UNITYSDK_OFFSET(0x18655D00)

inline static constexpr unsigned int LCMLIDLKOJA_TypeDefinitionIndex = 63754;

class LCMLIDLKOJA : public ::IDBGIKCGHLI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMLIDLKOJA__CTOR_OFFSET))(this);
	}

	::System::Void JMABBOOMBHA(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LCMLIDLKOJA_JMABBOOMBHA_OFFSET))(this, KCAAHHAOKLC);
	}

	::System::Void GIJFNPLLKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMLIDLKOJA_GIJFNPLLKBO_OFFSET))(this);
	}

	::System::Void KFNMKPNIDMG(::MoleMole::UIWindowController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LCMLIDLKOJA_KFNMKPNIDMG_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void PMMICFBIGOB(::MoleMole::UIWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LCMLIDLKOJA_PMMICFBIGOB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JLNHPLPFOCN(::MoleMole::UIWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + LCMLIDLKOJA_JLNHPLPFOCN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EMLAMDDJEFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMLIDLKOJA_EMLAMDDJEFN_OFFSET))(this);
	}
};
