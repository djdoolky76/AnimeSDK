#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMGFANCCNPH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JIBNBECGOIK_CBCIALMNMLN_OFFSET UNITYSDK_OFFSET(0x1748BAF0)
#define JIBNBECGOIK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1748B9E0)
#define JIBNBECGOIK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1748BAE0)
#define JIBNBECGOIK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1748BAD0)
#define JIBNBECGOIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1748B9D0)

inline static constexpr unsigned int JIBNBECGOIK_TypeDefinitionIndex = 15743;

class JIBNBECGOIK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::AMGFANCCNPH HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PLCJLPLEMFG; // 0x2C

	::System::Void _ctor(::AMGFANCCNPH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AMGFANCCNPH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JIBNBECGOIK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBNBECGOIK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBNBECGOIK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIBNBECGOIK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CBCIALMNMLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBNBECGOIK_CBCIALMNMLN_OFFSET))(this);
	}
};
