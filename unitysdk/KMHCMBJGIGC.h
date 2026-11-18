#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFOJJEIOODH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KMHCMBJGIGC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19582450)
#define KMHCMBJGIGC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19582540)
#define KMHCMBJGIGC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19582300)
#define KMHCMBJGIGC_OFDHBMPOCPM_OFFSET UNITYSDK_OFFSET(0x19582310)
#define KMHCMBJGIGC__CTOR_OFFSET UNITYSDK_OFFSET(0x195822F0)

inline static constexpr unsigned int KMHCMBJGIGC_TypeDefinitionIndex = 15058;

class KMHCMBJGIGC : public ::System::Object
{
public:
	::LFOJJEIOODH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 HMNEPJGNLIE; // 0x2C

	::System::Void _ctor(::LFOJJEIOODH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LFOJJEIOODH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KMHCMBJGIGC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHCMBJGIGC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OFDHBMPOCPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHCMBJGIGC_OFDHBMPOCPM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHCMBJGIGC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMHCMBJGIGC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
