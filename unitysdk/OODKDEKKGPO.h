#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKPHNFEGOLG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OODKDEKKGPO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195CA3C0)
#define OODKDEKKGPO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195CA290)
#define OODKDEKKGPO_GINEEIKHJOE_OFFSET UNITYSDK_OFFSET(0x195CA2A0)
#define OODKDEKKGPO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195CA3B0)
#define OODKDEKKGPO__CTOR_OFFSET UNITYSDK_OFFSET(0x195CA280)

inline static constexpr unsigned int OODKDEKKGPO_TypeDefinitionIndex = 9511;

class OODKDEKKGPO : public ::System::Object
{
public:
	::System::String* ONBIDJCIAAM; // 0x10
	::GKPHNFEGOLG HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::GKPHNFEGOLG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GKPHNFEGOLG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OODKDEKKGPO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OODKDEKKGPO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GINEEIKHJOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODKDEKKGPO_GINEEIKHJOE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OODKDEKKGPO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODKDEKKGPO_COFGIJJOFLP_OFFSET))(this);
	}
};
