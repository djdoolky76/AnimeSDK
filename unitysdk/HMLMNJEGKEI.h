#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMMLFDLJKJM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HMLMNJEGKEI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BB2440)
#define HMLMNJEGKEI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BB2430)
#define HMLMNJEGKEI_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x18BB2540)
#define HMLMNJEGKEI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BB2530)
#define HMLMNJEGKEI__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB2420)

inline static constexpr unsigned int HMLMNJEGKEI_TypeDefinitionIndex = 15891;

class HMLMNJEGKEI : public ::System::Object
{
public:
	::System::String* HMCEMPIOHNM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JMMLFDLJKJM HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::JMMLFDLJKJM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JMMLFDLJKJM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HMLMNJEGKEI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMLMNJEGKEI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMNJEGKEI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMNJEGKEI_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HMPFPCCBKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMNJEGKEI_HMPFPCCBKMJ_OFFSET))(this);
	}
};
