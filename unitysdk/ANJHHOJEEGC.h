#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOCLHJMKM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ANJHHOJEEGC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A731D0)
#define ANJHHOJEEGC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A732D0)
#define ANJHHOJEEGC_IBGCBFAGKLJ_OFFSET UNITYSDK_OFFSET(0x17A730C0)
#define ANJHHOJEEGC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A732C0)
#define ANJHHOJEEGC__CTOR_OFFSET UNITYSDK_OFFSET(0x17A730B0)

inline static constexpr unsigned int ANJHHOJEEGC_TypeDefinitionIndex = 13477;

class ANJHHOJEEGC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BBLAOPHINGI; // 0x18
	::GPLOCLHJMKM HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::GPLOCLHJMKM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GPLOCLHJMKM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ANJHHOJEEGC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IBGCBFAGKLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJHHOJEEGC_IBGCBFAGKLJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJHHOJEEGC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJHHOJEEGC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANJHHOJEEGC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
