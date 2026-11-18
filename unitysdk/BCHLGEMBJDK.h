#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGAOOEFHBBL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BCHLGEMBJDK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A530170)
#define BCHLGEMBJDK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A530160)
#define BCHLGEMBJDK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A530260)
#define BCHLGEMBJDK_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x1A530020)
#define BCHLGEMBJDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A530010)

inline static constexpr unsigned int BCHLGEMBJDK_TypeDefinitionIndex = 12473;

class BCHLGEMBJDK : public ::System::Object
{
public:
	::KGAOOEFHBBL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 JOFDJHMPKHJ; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::KGAOOEFHBBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KGAOOEFHBBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BCHLGEMBJDK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHLGEMBJDK_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCHLGEMBJDK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHLGEMBJDK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHLGEMBJDK_LJANCIBECFG_OFFSET))(this);
	}
};
