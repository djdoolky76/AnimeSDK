#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJJIFMDJKCN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HHGKPFFKMEC_ACEFNBBHDOB_OFFSET UNITYSDK_OFFSET(0x1B87B760)
#define HHGKPFFKMEC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B87B660)
#define HHGKPFFKMEC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B87B750)
#define HHGKPFFKMEC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B87B8A0)
#define HHGKPFFKMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87B650)

inline static constexpr unsigned int HHGKPFFKMEC_TypeDefinitionIndex = 15032;

class HHGKPFFKMEC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LJJIFMDJKCN HBDPAIKANDB; // 0x18
	::System::Int32 FFFPMHIMDBO; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::LJJIFMDJKCN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LJJIFMDJKCN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HHGKPFFKMEC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGKPFFKMEC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHGKPFFKMEC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ACEFNBBHDOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGKPFFKMEC_ACEFNBBHDOB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGKPFFKMEC_LJANCIBECFG_OFFSET))(this);
	}
};
