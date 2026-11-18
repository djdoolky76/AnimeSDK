#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COLHDKKCIDK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OGAEPFIIOGD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCFAE10)
#define OGAEPFIIOGD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCFAF00)
#define OGAEPFIIOGD_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1CCFB030)
#define OGAEPFIIOGD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCFB020)
#define OGAEPFIIOGD_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x1CCFAF10)
#define OGAEPFIIOGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFAE00)

inline static constexpr unsigned int OGAEPFIIOGD_TypeDefinitionIndex = 9851;

class OGAEPFIIOGD : public ::System::Object
{
public:
	::System::String* EOALHEEBMKM; // 0x10
	::COLHDKKCIDK HBDPAIKANDB; // 0x18
	::System::String* NFFPNFDEDBN; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::COLHDKKCIDK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::COLHDKKCIDK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGAEPFIIOGD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAEPFIIOGD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGAEPFIIOGD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAEPFIIOGD_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAEPFIIOGD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAEPFIIOGD_IFDIOIOCGDP_OFFSET))(this);
	}
};
