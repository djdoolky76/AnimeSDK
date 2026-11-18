#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDBGIKCGHLI.h"

namespace MoleMole { class UIWindowController; }

#define JBCMDGIDPMA_JLNHPLPFOCN_OFFSET UNITYSDK_OFFSET(0x197F2240)
#define JBCMDGIDPMA_JMABBOOMBHA_OFFSET UNITYSDK_OFFSET(0x197F2010)
#define JBCMDGIDPMA_KFNMKPNIDMG_OFFSET UNITYSDK_OFFSET(0x197F20A0)
#define JBCMDGIDPMA_PMMICFBIGOB_OFFSET UNITYSDK_OFFSET(0x197F21B0)
#define JBCMDGIDPMA__CTOR_OFFSET UNITYSDK_OFFSET(0x197F2130)

inline static constexpr unsigned int JBCMDGIDPMA_TypeDefinitionIndex = 44471;

class JBCMDGIDPMA : public ::IDBGIKCGHLI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCMDGIDPMA__CTOR_OFFSET))(this);
	}

	::System::Void JMABBOOMBHA(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JBCMDGIDPMA_JMABBOOMBHA_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Void KFNMKPNIDMG(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JBCMDGIDPMA_KFNMKPNIDMG_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Void PMMICFBIGOB(::MoleMole::UIWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JBCMDGIDPMA_PMMICFBIGOB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JLNHPLPFOCN(::MoleMole::UIWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JBCMDGIDPMA_JLNHPLPFOCN_OFFSET))(this, MIALFKCCCPI);
	}
};
