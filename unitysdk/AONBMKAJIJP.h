#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKACIOBLNBM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AONBMKAJIJP_CHBOEJLHCOP_OFFSET UNITYSDK_OFFSET(0x1A5731D0)
#define AONBMKAJIJP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A572E90)
#define AONBMKAJIJP_DCBNBLOIDHM_OFFSET UNITYSDK_OFFSET(0x1A572AD0)
#define AONBMKAJIJP_ECFMFBDACFH_OFFSET UNITYSDK_OFFSET(0x1A572C10)
#define AONBMKAJIJP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A572AC0)
#define AONBMKAJIJP_IBCOOHFHJCC_OFFSET UNITYSDK_OFFSET(0x1A5733F0)
#define AONBMKAJIJP_JOEFJDJOGPJ_OFFSET UNITYSDK_OFFSET(0x1A573090)
#define AONBMKAJIJP_LJAJKEDFMML_OFFSET UNITYSDK_OFFSET(0x1A572D50)
#define AONBMKAJIJP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A573500)
#define AONBMKAJIJP_MAFBKKFBGFA_OFFSET UNITYSDK_OFFSET(0x1A572F80)
#define AONBMKAJIJP_PLEBDFEFCNE_OFFSET UNITYSDK_OFFSET(0x1A5732E0)
#define AONBMKAJIJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A572AB0)

inline static constexpr unsigned int AONBMKAJIJP_TypeDefinitionIndex = 10447;

class AONBMKAJIJP : public ::System::Object
{
public:
	::System::String* BALGJMJMKCH; // 0x10
	::System::String* CHMIKMOHFAP; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* OEAPKPJKCHH; // 0x28
	::System::String* MDHKDLMAJFE; // 0x30
	::IKACIOBLNBM HBDPAIKANDB; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte GCHCDJCFCEG; // 0x4B
	::System::Int32 HNOCKOGANGA; // 0x4C
	::System::Int32 FKBABFJDILG; // 0x50
	::System::Int32 FLAEGLBGEOI; // 0x54
	::System::Int32 LPLFBIHNMHK; // 0x58

	::System::Void _ctor(::IKACIOBLNBM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IKACIOBLNBM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AONBMKAJIJP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AONBMKAJIJP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DCBNBLOIDHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_DCBNBLOIDHM_OFFSET))(this);
	}

	::System::Int32 ECFMFBDACFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_ECFMFBDACFH_OFFSET))(this);
	}

	::System::Int32 LJAJKEDFMML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_LJAJKEDFMML_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MAFBKKFBGFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_MAFBKKFBGFA_OFFSET))(this);
	}

	::System::Int32 JOEFJDJOGPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_JOEFJDJOGPJ_OFFSET))(this);
	}

	::System::String* CHBOEJLHCOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_CHBOEJLHCOP_OFFSET))(this);
	}

	::System::String* PLEBDFEFCNE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_PLEBDFEFCNE_OFFSET))(this);
	}

	::System::String* IBCOOHFHJCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_IBCOOHFHJCC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBMKAJIJP_LJANCIBECFG_OFFSET))(this);
	}
};
