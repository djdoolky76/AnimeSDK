#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOIEFDPJCN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HKHOHEIFEKK_AONFBLPHCML_OFFSET UNITYSDK_OFFSET(0x1A4F1F70)
#define HKHOHEIFEKK_BCOGCADNCHN_OFFSET UNITYSDK_OFFSET(0x1A4F1E60)
#define HKHOHEIFEKK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4F1D60)
#define HKHOHEIFEKK_DJGJHOGEAGO_OFFSET UNITYSDK_OFFSET(0x1A4F1C50)
#define HKHOHEIFEKK_EKNOHKIHHGC_OFFSET UNITYSDK_OFFSET(0x1A4F20B0)
#define HKHOHEIFEKK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4F21F0)
#define HKHOHEIFEKK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4F1E50)
#define HKHOHEIFEKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F1C40)

inline static constexpr unsigned int HKHOHEIFEKK_TypeDefinitionIndex = 13982;

class HKHOHEIFEKK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NOOIEFDPJCN HBDPAIKANDB; // 0x18
	::System::String* GGBCNFAJDLF; // 0x28
	::System::String* OCGDGNGMBHL; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 GJMHAJDAIBH; // 0x3C
	::System::Int32 POPAHEOCIKC; // 0x40

	::System::Void _ctor(::NOOIEFDPJCN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NOOIEFDPJCN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HKHOHEIFEKK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DJGJHOGEAGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHOHEIFEKK_DJGJHOGEAGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHOHEIFEKK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHOHEIFEKK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* BCOGCADNCHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHOHEIFEKK_BCOGCADNCHN_OFFSET))(this);
	}

	::System::Int32 AONFBLPHCML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHOHEIFEKK_AONFBLPHCML_OFFSET))(this);
	}

	::System::Int32 EKNOHKIHHGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHOHEIFEKK_EKNOHKIHHGC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKHOHEIFEKK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
