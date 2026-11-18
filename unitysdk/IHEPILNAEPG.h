#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLHLOFOFLEJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IHEPILNAEPG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152E6E10)
#define IHEPILNAEPG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152E6E00)
#define IHEPILNAEPG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152E6CE0)
#define IHEPILNAEPG_PKKHFLMGNHG_OFFSET UNITYSDK_OFFSET(0x152E6CF0)
#define IHEPILNAEPG__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6CD0)

inline static constexpr unsigned int IHEPILNAEPG_TypeDefinitionIndex = 15315;

class IHEPILNAEPG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CLHLOFOFLEJ HBDPAIKANDB; // 0x18
	::System::String* BOLMKCPHBLN; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::CLHLOFOFLEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CLHLOFOFLEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHEPILNAEPG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEPILNAEPG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PKKHFLMGNHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEPILNAEPG_PKKHFLMGNHG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHEPILNAEPG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEPILNAEPG_COFGIJJOFLP_OFFSET))(this);
	}
};
