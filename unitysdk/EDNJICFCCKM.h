#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIJPBFINKHN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define EDNJICFCCKM_AHLBLHIEIBO_OFFSET UNITYSDK_OFFSET(0x1778DD10)
#define EDNJICFCCKM_BILKNJGDEEM_OFFSET UNITYSDK_OFFSET(0x1778E210)
#define EDNJICFCCKM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1778E350)
#define EDNJICFCCKM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1778E440)
#define EDNJICFCCKM_KCCGIIJENEK_OFFSET UNITYSDK_OFFSET(0x1778DF90)
#define EDNJICFCCKM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1778E450)
#define EDNJICFCCKM_NABOMJPMBLC_OFFSET UNITYSDK_OFFSET(0x1778DE50)
#define EDNJICFCCKM_OFFEFJLMNHM_OFFSET UNITYSDK_OFFSET(0x1778E0D0)
#define EDNJICFCCKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1778DD00)

inline static constexpr unsigned int EDNJICFCCKM_TypeDefinitionIndex = 11494;

class EDNJICFCCKM : public ::System::Object
{
public:
	::KIJPBFINKHN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 OHHCGBLIAJH; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 BCLNMGLMAIF; // 0x30
	::System::Int32 DDJMIOHCEFM; // 0x34
	::System::Int32 EFGPPNGADHD; // 0x38
	::System::Int32 JFADHLJEPIB; // 0x3C

	::System::Void _ctor(::KIJPBFINKHN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KIJPBFINKHN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EDNJICFCCKM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 AHLBLHIEIBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNJICFCCKM_AHLBLHIEIBO_OFFSET))(this);
	}

	::System::Int32 NABOMJPMBLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNJICFCCKM_NABOMJPMBLC_OFFSET))(this);
	}

	::System::Int32 KCCGIIJENEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNJICFCCKM_KCCGIIJENEK_OFFSET))(this);
	}

	::System::Int32 OFFEFJLMNHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNJICFCCKM_OFFEFJLMNHM_OFFSET))(this);
	}

	::System::Int32 BILKNJGDEEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNJICFCCKM_BILKNJGDEEM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNJICFCCKM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDNJICFCCKM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNJICFCCKM_LJANCIBECFG_OFFSET))(this);
	}
};
