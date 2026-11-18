#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCOBKDLJEEJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CEMJEGODLOD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17767460)
#define CEMJEGODLOD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17767300)
#define CEMJEGODLOD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17767450)
#define CEMJEGODLOD_NFHBKDMLCEE_OFFSET UNITYSDK_OFFSET(0x17767310)
#define CEMJEGODLOD__CTOR_OFFSET UNITYSDK_OFFSET(0x177672F0)

inline static constexpr unsigned int CEMJEGODLOD_TypeDefinitionIndex = 11598;

class CEMJEGODLOD : public ::System::Object
{
public:
	::LCOBKDLJEEJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 AADHJODCEPG; // 0x2C

	::System::Void _ctor(::LCOBKDLJEEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LCOBKDLJEEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CEMJEGODLOD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEMJEGODLOD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NFHBKDMLCEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMJEGODLOD_NFHBKDMLCEE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMJEGODLOD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMJEGODLOD_COFGIJJOFLP_OFFSET))(this);
	}
};
