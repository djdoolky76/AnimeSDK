#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHEILAFDEFF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HEMMEMLGACH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BAEC60)
#define HEMMEMLGACH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BAEE60)
#define HEMMEMLGACH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BAEC50)
#define HEMMEMLGACH_NPAFPHDAPMI_OFFSET UNITYSDK_OFFSET(0x18BAED50)
#define HEMMEMLGACH__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAEC40)

inline static constexpr unsigned int HEMMEMLGACH_TypeDefinitionIndex = 16854;

class HEMMEMLGACH : public ::System::Object
{
public:
	::LHEILAFDEFF HBDPAIKANDB; // 0x10
	::System::String* BDGOJFFEBOP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::LHEILAFDEFF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHEILAFDEFF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HEMMEMLGACH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMMEMLGACH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMMEMLGACH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NPAFPHDAPMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMMEMLGACH_NPAFPHDAPMI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEMMEMLGACH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
