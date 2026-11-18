#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDBGIKCGHLI.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJBMMEKAHJH_JLNHPLPFOCN_OFFSET UNITYSDK_OFFSET(0x172922A0)
#define NJBMMEKAHJH_JMABBOOMBHA_OFFSET UNITYSDK_OFFSET(0x172918B0)
#define NJBMMEKAHJH_KFNMKPNIDMG_OFFSET UNITYSDK_OFFSET(0x17291BA0)
#define NJBMMEKAHJH_OJALCEANPJO_OFFSET UNITYSDK_OFFSET(0x17291D60)
#define NJBMMEKAHJH_PMMICFBIGOB_OFFSET UNITYSDK_OFFSET(0x17292330)
#define NJBMMEKAHJH__CTOR_OFFSET UNITYSDK_OFFSET(0x17291C30)

inline static constexpr unsigned int NJBMMEKAHJH_TypeDefinitionIndex = 47149;

class NJBMMEKAHJH : public ::IDBGIKCGHLI
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* LDNMMPBFOIH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMMEKAHJH__CTOR_OFFSET))(this);
	}

	::System::Void JMABBOOMBHA(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NJBMMEKAHJH_JMABBOOMBHA_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Void KFNMKPNIDMG(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NJBMMEKAHJH_KFNMKPNIDMG_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* OJALCEANPJO()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMMEKAHJH_OJALCEANPJO_OFFSET))(this);
	}

	::System::Void JLNHPLPFOCN(::MoleMole::UIWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NJBMMEKAHJH_JLNHPLPFOCN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PMMICFBIGOB(::MoleMole::UIWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NJBMMEKAHJH_PMMICFBIGOB_OFFSET))(this, MIALFKCCCPI);
	}
};
