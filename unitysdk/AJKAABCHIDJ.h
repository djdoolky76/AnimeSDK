#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKNOFMIAIGM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AJKAABCHIDJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A70080)
#define AJKAABCHIDJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A70070)
#define AJKAABCHIDJ_JKCBKJPCDJM_OFFSET UNITYSDK_OFFSET(0x17A702C0)
#define AJKAABCHIDJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A70170)
#define AJKAABCHIDJ_MJEKGNJNEEO_OFFSET UNITYSDK_OFFSET(0x17A70180)
#define AJKAABCHIDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17A70060)

inline static constexpr unsigned int AJKAABCHIDJ_TypeDefinitionIndex = 16968;

class AJKAABCHIDJ : public ::System::Object
{
public:
	::NKNOFMIAIGM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 DCADPBEHDAN; // 0x2C
	::System::Int32 JGHBKOAIGCD; // 0x30

	::System::Void _ctor(::NKNOFMIAIGM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NKNOFMIAIGM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AJKAABCHIDJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJKAABCHIDJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKAABCHIDJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKAABCHIDJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MJEKGNJNEEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKAABCHIDJ_MJEKGNJNEEO_OFFSET))(this);
	}

	::System::Int32 JKCBKJPCDJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKAABCHIDJ_JKCBKJPCDJM_OFFSET))(this);
	}
};
