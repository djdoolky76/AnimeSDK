#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCFPJCEGJLD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KFAKPPAFNIK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B144DD0)
#define KFAKPPAFNIK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B144C70)
#define KFAKPPAFNIK_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x1B144C80)
#define KFAKPPAFNIK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B144DC0)
#define KFAKPPAFNIK_PJNJAAEDAED_OFFSET UNITYSDK_OFFSET(0x1B144B30)
#define KFAKPPAFNIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B112080)

inline static constexpr unsigned int KFAKPPAFNIK_TypeDefinitionIndex = 9700;

class KFAKPPAFNIK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LCFPJCEGJLD HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 AMBOKAPILGM; // 0x2C
	::System::Int32 OCGIOHPBCIK; // 0x30

	::System::Void _ctor(::LCFPJCEGJLD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LCFPJCEGJLD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KFAKPPAFNIK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PJNJAAEDAED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAKPPAFNIK_PJNJAAEDAED_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFAKPPAFNIK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAKPPAFNIK_HJFCIELMJPA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAKPPAFNIK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAKPPAFNIK_COFGIJJOFLP_OFFSET))(this);
	}
};
