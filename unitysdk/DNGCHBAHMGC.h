#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHOAKNGHNP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DNGCHBAHMGC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1661D6B0)
#define DNGCHBAHMGC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1661D690)
#define DNGCHBAHMGC_KCIJKLNKKJH_OFFSET UNITYSDK_OFFSET(0x1661D7A0)
#define DNGCHBAHMGC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1661D6A0)
#define DNGCHBAHMGC_PBJHIAOGPHD_OFFSET UNITYSDK_OFFSET(0x1661D8B0)
#define DNGCHBAHMGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1661D680)

inline static constexpr unsigned int DNGCHBAHMGC_TypeDefinitionIndex = 11242;

class DNGCHBAHMGC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BBLEMDMEDNJ; // 0x18
	::DPHOAKNGHNP HBDPAIKANDB; // 0x20
	::System::Int32 BPEHIDJFLFA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::DPHOAKNGHNP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DPHOAKNGHNP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DNGCHBAHMGC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNGCHBAHMGC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGCHBAHMGC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGCHBAHMGC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* KCIJKLNKKJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGCHBAHMGC_KCIJKLNKKJH_OFFSET))(this);
	}

	::System::Int32 PBJHIAOGPHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGCHBAHMGC_PBJHIAOGPHD_OFFSET))(this);
	}
};
