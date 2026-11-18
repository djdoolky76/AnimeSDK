#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIIGHGLCBDB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DIIPEHBGFKI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19C06F90)
#define DIIPEHBGFKI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19C07090)
#define DIIPEHBGFKI_GNLBPCGFALA_OFFSET UNITYSDK_OFFSET(0x19C070A0)
#define DIIPEHBGFKI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19C07080)
#define DIIPEHBGFKI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C06F80)

inline static constexpr unsigned int DIIPEHBGFKI_TypeDefinitionIndex = 15799;

class DIIPEHBGFKI : public ::System::Object
{
public:
	::System::String* DDCILKOBDHM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::KIIGHGLCBDB HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::KIIGHGLCBDB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KIIGHGLCBDB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DIIPEHBGFKI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPEHBGFKI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPEHBGFKI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIIPEHBGFKI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GNLBPCGFALA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPEHBGFKI_GNLBPCGFALA_OFFSET))(this);
	}
};
