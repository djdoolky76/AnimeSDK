#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHCJJHFHMNK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KJKKGGICDJC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BDCD10)
#define KJKKGGICDJC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BDD090)
#define KJKKGGICDJC_INNJIGNGACN_OFFSET UNITYSDK_OFFSET(0x18BDCF40)
#define KJKKGGICDJC_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x18BDCE00)
#define KJKKGGICDJC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BDD080)
#define KJKKGGICDJC__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDCD00)

inline static constexpr unsigned int KJKKGGICDJC_TypeDefinitionIndex = 9675;

class KJKKGGICDJC : public ::System::Object
{
public:
	::HHCJJHFHMNK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 CKALBMAMAKP; // 0x2C
	::System::Int32 AAJIKDJJCHH; // 0x30

	::System::Void _ctor(::HHCJJHFHMNK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HHCJJHFHMNK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KJKKGGICDJC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKGGICDJC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKGGICDJC_LFGIDEIHCID_OFFSET))(this);
	}

	::System::Int32 INNJIGNGACN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKGGICDJC_INNJIGNGACN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKGGICDJC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJKKGGICDJC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
