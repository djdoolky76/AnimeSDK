#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDBGIKCGHLI_GIJFNPLLKBO_OFFSET UNITYSDK_OFFSET(0x16F5CCF0)
#define IDBGIKCGHLI_JEBMONHDFGN_OFFSET UNITYSDK_OFFSET(0x16F5CF90)
#define IDBGIKCGHLI_JMABBOOMBHA_OFFSET UNITYSDK_OFFSET(0x16F5CE70)
#define IDBGIKCGHLI_KFNMKPNIDMG_OFFSET UNITYSDK_OFFSET(0x16F5CEC0)
#define IDBGIKCGHLI_MIDOHGHKMFF_OFFSET UNITYSDK_OFFSET(0x16F5D0C0)
#define IDBGIKCGHLI_NPOOKDMGPAB_OFFSET UNITYSDK_OFFSET(0x16F5D000)
#define IDBGIKCGHLI_OABMLECEOEF_OFFSET UNITYSDK_OFFSET(0x16F5D070)
#define IDBGIKCGHLI_OBGEHJEKBEP_OFFSET UNITYSDK_OFFSET(0x16F5D080)
#define IDBGIKCGHLI_OEAFBNIBEKJ_OFFSET UNITYSDK_OFFSET(0x16F5D010)
#define IDBGIKCGHLI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16F5D0D0)
#define IDBGIKCGHLI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5CF10)

inline static constexpr unsigned int IDBGIKCGHLI_TypeDefinitionIndex = 71358;

class IDBGIKCGHLI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* OMBEBGMCDAK; // 0x10
	::System::Boolean _PFBFGADKNLC_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBGIKCGHLI__CTOR_OFFSET))(this);
	}

	::System::Void GIJFNPLLKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_GIJFNPLLKBO_OFFSET))(this);
	}

	::System::Void JMABBOOMBHA(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_JMABBOOMBHA_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Void KFNMKPNIDMG(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_KFNMKPNIDMG_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Void JEBMONHDFGN(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_JEBMONHDFGN_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* NPOOKDMGPAB()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_NPOOKDMGPAB_OFFSET))(this);
	}

	::System::Void OEAFBNIBEKJ(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_OEAFBNIBEKJ_OFFSET))(this, DJNCALKEFCH);
	}

	::System::Void OABMLECEOEF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_OABMLECEOEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OBGEHJEKBEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_OBGEHJEKBEP_OFFSET))(this);
	}

	::System::Boolean MIDOHGHKMFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_MIDOHGHKMFF_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBGIKCGHLI_PHOADBJGFBE_OFFSET))(this);
	}
};
