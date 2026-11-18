#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGHKIHCDOFB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DAIPJEMIHDD_ABOLFPGHBOF_OFFSET UNITYSDK_OFFSET(0x18795880)
#define DAIPJEMIHDD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18795790)
#define DAIPJEMIHDD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x187959C0)
#define DAIPJEMIHDD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x187959D0)
#define DAIPJEMIHDD__CTOR_OFFSET UNITYSDK_OFFSET(0x18795780)

inline static constexpr unsigned int DAIPJEMIHDD_TypeDefinitionIndex = 13856;

class DAIPJEMIHDD : public ::System::Object
{
public:
	::CGHKIHCDOFB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 KLKOBIDCKLP; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::CGHKIHCDOFB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CGHKIHCDOFB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DAIPJEMIHDD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPJEMIHDD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 ABOLFPGHBOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPJEMIHDD_ABOLFPGHBOF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIPJEMIHDD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIPJEMIHDD_LJANCIBECFG_OFFSET))(this);
	}
};
