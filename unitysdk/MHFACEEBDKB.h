#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPDADFHJKGO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MHFACEEBDKB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DB3080)
#define MHFACEEBDKB_CPECHIIBNIK_OFFSET UNITYSDK_OFFSET(0x19DB2E20)
#define MHFACEEBDKB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DB2F30)
#define MHFACEEBDKB_LADCFPCGOPA_OFFSET UNITYSDK_OFFSET(0x19DB2F40)
#define MHFACEEBDKB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DB2E10)
#define MHFACEEBDKB__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB2E00)

inline static constexpr unsigned int MHFACEEBDKB_TypeDefinitionIndex = 10396;

class MHFACEEBDKB : public ::System::Object
{
public:
	::System::String* FHBMPDABJHA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::MPDADFHJKGO HBDPAIKANDB; // 0x20
	::System::Int32 JLAGMILENPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::MPDADFHJKGO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MPDADFHJKGO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHFACEEBDKB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFACEEBDKB_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CPECHIIBNIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFACEEBDKB_CPECHIIBNIK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHFACEEBDKB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LADCFPCGOPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFACEEBDKB_LADCFPCGOPA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFACEEBDKB_COFGIJJOFLP_OFFSET))(this);
	}
};
