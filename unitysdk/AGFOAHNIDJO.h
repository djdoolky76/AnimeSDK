#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FABBBJBNKAL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AGFOAHNIDJO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADA5640)
#define AGFOAHNIDJO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADA5730)
#define AGFOAHNIDJO_LENCEGIELFL_OFFSET UNITYSDK_OFFSET(0x1ADA5750)
#define AGFOAHNIDJO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADA5740)
#define AGFOAHNIDJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA5630)

inline static constexpr unsigned int AGFOAHNIDJO_TypeDefinitionIndex = 15318;

class AGFOAHNIDJO : public ::System::Object
{
public:
	::FABBBJBNKAL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* JKPGPKFPBJN; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::FABBBJBNKAL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FABBBJBNKAL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AGFOAHNIDJO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFOAHNIDJO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGFOAHNIDJO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFOAHNIDJO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LENCEGIELFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFOAHNIDJO_LENCEGIELFL_OFFSET))(this);
	}
};
