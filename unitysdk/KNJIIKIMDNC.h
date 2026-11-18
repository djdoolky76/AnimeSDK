#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJJNIIDBHIF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KNJIIKIMDNC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7E8460)
#define KNJIIKIMDNC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7E8450)
#define KNJIIKIMDNC_KAANGLODPNE_OFFSET UNITYSDK_OFFSET(0x1B7E8330)
#define KNJIIKIMDNC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7E8440)
#define KNJIIKIMDNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E8320)

inline static constexpr unsigned int KNJIIKIMDNC_TypeDefinitionIndex = 17120;

class KNJIIKIMDNC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* DIKEHKIAEMF; // 0x18
	::PJJNIIDBHIF HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::PJJNIIDBHIF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PJJNIIDBHIF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KNJIIKIMDNC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KAANGLODPNE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJIIKIMDNC_KAANGLODPNE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJIIKIMDNC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNJIIKIMDNC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJIIKIMDNC_COFGIJJOFLP_OFFSET))(this);
	}
};
