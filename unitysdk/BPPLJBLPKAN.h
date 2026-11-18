#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKPMPACDNKO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BPPLJBLPKAN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157889D0)
#define BPPLJBLPKAN_EODEBMONMEL_OFFSET UNITYSDK_OFFSET(0x15788730)
#define BPPLJBLPKAN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157889C0)
#define BPPLJBLPKAN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157889B0)
#define BPPLJBLPKAN_OCLGGOFNJIH_OFFSET UNITYSDK_OFFSET(0x15788870)
#define BPPLJBLPKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x15788720)

inline static constexpr unsigned int BPPLJBLPKAN_TypeDefinitionIndex = 12646;

class BPPLJBLPKAN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OKPMPACDNKO HBDPAIKANDB; // 0x18
	::System::Int32 IFFNBEMLANB; // 0x28
	::System::Int32 OHGHNIINJNA; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::OKPMPACDNKO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OKPMPACDNKO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BPPLJBLPKAN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 EODEBMONMEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPLJBLPKAN_EODEBMONMEL_OFFSET))(this);
	}

	::System::Int32 OCLGGOFNJIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPLJBLPKAN_OCLGGOFNJIH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPLJBLPKAN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPPLJBLPKAN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPLJBLPKAN_COFGIJJOFLP_OFFSET))(this);
	}
};
