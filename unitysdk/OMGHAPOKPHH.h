#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JONLCNPBKFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OMGHAPOKPHH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B341540)
#define OMGHAPOKPHH_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x1B341770)
#define OMGHAPOKPHH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B341520)
#define OMGHAPOKPHH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B341530)
#define OMGHAPOKPHH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1B341630)
#define OMGHAPOKPHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B341510)

inline static constexpr unsigned int OMGHAPOKPHH_TypeDefinitionIndex = 13424;

class OMGHAPOKPHH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JONLCNPBKFP HBDPAIKANDB; // 0x18
	::System::Int32 JEDEMPHDCAK; // 0x28
	::System::Int32 COHJGPCKEIH; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::JONLCNPBKFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JONLCNPBKFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OMGHAPOKPHH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMGHAPOKPHH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGHAPOKPHH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGHAPOKPHH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGHAPOKPHH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGHAPOKPHH_DPCDIABPPEE_OFFSET))(this);
	}
};
