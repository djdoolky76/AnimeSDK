#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGJNILMFCBO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IPCINAGOABO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152F09D0)
#define IPCINAGOABO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152F0AC0)
#define IPCINAGOABO_JEOGIHDDJBK_OFFSET UNITYSDK_OFFSET(0x152F0AD0)
#define IPCINAGOABO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152F0CF0)
#define IPCINAGOABO_PMHFFIAHOBA_OFFSET UNITYSDK_OFFSET(0x152F0BE0)
#define IPCINAGOABO__CTOR_OFFSET UNITYSDK_OFFSET(0x152F09C0)

inline static constexpr unsigned int IPCINAGOABO_TypeDefinitionIndex = 16627;

class IPCINAGOABO : public ::System::Object
{
public:
	::System::String* PHNCOIDCJPN; // 0x10
	::MGJNILMFCBO HBDPAIKANDB; // 0x18
	::System::String* CGBIDJCGKAE; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::MGJNILMFCBO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MGJNILMFCBO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IPCINAGOABO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCINAGOABO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IPCINAGOABO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* JEOGIHDDJBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCINAGOABO_JEOGIHDDJBK_OFFSET))(this);
	}

	::System::String* PMHFFIAHOBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCINAGOABO_PMHFFIAHOBA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCINAGOABO_LJANCIBECFG_OFFSET))(this);
	}
};
