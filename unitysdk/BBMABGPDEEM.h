#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDDMODOKLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BBMABGPDEEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A529DD0)
#define BBMABGPDEEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A529A80)
#define BBMABGPDEEM_IHEKKCIGPOF_OFFSET UNITYSDK_OFFSET(0x1A529CC0)
#define BBMABGPDEEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A529A90)
#define BBMABGPDEEM_MJOEEOOOFIP_OFFSET UNITYSDK_OFFSET(0x1A529BB0)
#define BBMABGPDEEM_NIKHNJEDBMK_OFFSET UNITYSDK_OFFSET(0x1A529AA0)
#define BBMABGPDEEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A529A70)

inline static constexpr unsigned int BBMABGPDEEM_TypeDefinitionIndex = 11595;

class BBMABGPDEEM : public ::System::Object
{
public:
	::System::String* IIAAPIMGHCH; // 0x10
	::HHDDMODOKLM HBDPAIKANDB; // 0x18
	::System::String* KCDEOFEODCH; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* OILBMCDJPKG; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::HHDDMODOKLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HHDDMODOKLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BBMABGPDEEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMABGPDEEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMABGPDEEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NIKHNJEDBMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMABGPDEEM_NIKHNJEDBMK_OFFSET))(this);
	}

	::System::String* MJOEEOOOFIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMABGPDEEM_MJOEEOOOFIP_OFFSET))(this);
	}

	::System::String* IHEKKCIGPOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMABGPDEEM_IHEKKCIGPOF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMABGPDEEM_COFGIJJOFLP_OFFSET))(this);
	}
};
