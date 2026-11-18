#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKEIOHDPP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IDCEFGKNJIK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B12A8D0)
#define IDCEFGKNJIK_DBDCNFIMEKA_OFFSET UNITYSDK_OFFSET(0x1B12A770)
#define IDCEFGKNJIK_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x1B12A630)
#define IDCEFGKNJIK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B12A8C0)
#define IDCEFGKNJIK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B12A8B0)
#define IDCEFGKNJIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B12A620)

inline static constexpr unsigned int IDCEFGKNJIK_TypeDefinitionIndex = 13049;

class IDCEFGKNJIK : public ::System::Object
{
public:
	::CBIKEIOHDPP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 FIEFFNIOMHA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 GAAEEJAGKMG; // 0x30

	::System::Void _ctor(::CBIKEIOHDPP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CBIKEIOHDPP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IDCEFGKNJIK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DKNEFMDCANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEFGKNJIK_DKNEFMDCANB_OFFSET))(this);
	}

	::System::Int32 DBDCNFIMEKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEFGKNJIK_DBDCNFIMEKA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEFGKNJIK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCEFGKNJIK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEFGKNJIK_COFGIJJOFLP_OFFSET))(this);
	}
};
