#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFCCKNLIDBN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LKLEBPHOGBG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1956C260)
#define LKLEBPHOGBG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1956C360)
#define LKLEBPHOGBG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1956C350)
#define LKLEBPHOGBG_LNMNIPIOLCP_OFFSET UNITYSDK_OFFSET(0x1956C370)
#define LKLEBPHOGBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1956C250)

inline static constexpr unsigned int LKLEBPHOGBG_TypeDefinitionIndex = 10565;

class LKLEBPHOGBG : public ::System::Object
{
public:
	::System::String* AOHKJGCNKBG; // 0x10
	::FFCCKNLIDBN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::FFCCKNLIDBN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FFCCKNLIDBN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LKLEBPHOGBG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEBPHOGBG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEBPHOGBG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKLEBPHOGBG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LNMNIPIOLCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEBPHOGBG_LNMNIPIOLCP_OFFSET))(this);
	}
};
