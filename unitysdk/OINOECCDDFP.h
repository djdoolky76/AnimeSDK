#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABCDECFOPP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OINOECCDDFP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DCE820)
#define OINOECCDDFP_DCAMONJGNHG_OFFSET UNITYSDK_OFFSET(0x19DCE570)
#define OINOECCDDFP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DCE560)
#define OINOECCDDFP_HCCLHAJODOF_OFFSET UNITYSDK_OFFSET(0x19DCE6C0)
#define OINOECCDDFP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DCE6B0)
#define OINOECCDDFP_NCPMMEKADBH_OFFSET UNITYSDK_OFFSET(0x19DCE420)
#define OINOECCDDFP__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCE410)

inline static constexpr unsigned int OINOECCDDFP_TypeDefinitionIndex = 14513;

class OINOECCDDFP : public ::System::Object
{
public:
	::BABCDECFOPP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 MNBNMLDLKCL; // 0x28
	::System::Int32 ILNNCPPFBFB; // 0x2C
	::System::Boolean FPPMFPGABJE; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte CNIAANMNOCF; // 0x33

	::System::Void _ctor(::BABCDECFOPP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BABCDECFOPP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OINOECCDDFP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NCPMMEKADBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINOECCDDFP_NCPMMEKADBH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OINOECCDDFP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DCAMONJGNHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINOECCDDFP_DCAMONJGNHG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OINOECCDDFP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean HCCLHAJODOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OINOECCDDFP_HCCLHAJODOF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINOECCDDFP_COFGIJJOFLP_OFFSET))(this);
	}
};
