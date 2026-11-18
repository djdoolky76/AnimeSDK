#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFBBEBJKMJF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LEFEFINKNNJ_BELNCMIINKG_OFFSET UNITYSDK_OFFSET(0x1AAF95C0)
#define LEFEFINKNNJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AAF97F0)
#define LEFEFINKNNJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AAF99F0)
#define LEFEFINKNNJ_JGJHKGBODHB_OFFSET UNITYSDK_OFFSET(0x1AAF96E0)
#define LEFEFINKNNJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AAF96D0)
#define LEFEFINKNNJ_NJGKCNDGKBA_OFFSET UNITYSDK_OFFSET(0x1AAF9A00)
#define LEFEFINKNNJ_PHEPBDPENBG_OFFSET UNITYSDK_OFFSET(0x1AAF98E0)
#define LEFEFINKNNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF95B0)

inline static constexpr unsigned int LEFEFINKNNJ_TypeDefinitionIndex = 13262;

class LEFEFINKNNJ : public ::System::Object
{
public:
	::System::String* GODMMOCGLBN; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* EKNMONGJLEP; // 0x20
	::System::String* KIABFHEFEJO; // 0x28
	::System::String* IALBNBGEMFO; // 0x30
	::NFBBEBJKMJF HBDPAIKANDB; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A

	::System::Void _ctor(::NFBBEBJKMJF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NFBBEBJKMJF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LEFEFINKNNJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* BELNCMIINKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFEFINKNNJ_BELNCMIINKG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFEFINKNNJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* JGJHKGBODHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFEFINKNNJ_JGJHKGBODHB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFEFINKNNJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* PHEPBDPENBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFEFINKNNJ_PHEPBDPENBG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEFEFINKNNJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* NJGKCNDGKBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFEFINKNNJ_NJGKCNDGKBA_OFFSET))(this);
	}
};
