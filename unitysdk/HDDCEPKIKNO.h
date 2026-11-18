#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBLFCPICMKB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HDDCEPKIKNO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16657160)
#define HDDCEPKIKNO_EGNLDHPCAJF_OFFSET UNITYSDK_OFFSET(0x16657270)
#define HDDCEPKIKNO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16657250)
#define HDDCEPKIKNO_IGPCIBDAFDA_OFFSET UNITYSDK_OFFSET(0x16657020)
#define HDDCEPKIKNO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16657260)
#define HDDCEPKIKNO__CTOR_OFFSET UNITYSDK_OFFSET(0x16657010)

inline static constexpr unsigned int HDDCEPKIKNO_TypeDefinitionIndex = 17627;

class HDDCEPKIKNO : public ::System::Object
{
public:
	::KBLFCPICMKB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PNOOIFCHCNO; // 0x2C
	::System::Int32 BAMOBNHMCLN; // 0x30

	::System::Void _ctor(::KBLFCPICMKB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KBLFCPICMKB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HDDCEPKIKNO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 IGPCIBDAFDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCEPKIKNO_IGPCIBDAFDA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCEPKIKNO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDDCEPKIKNO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCEPKIKNO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 EGNLDHPCAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDCEPKIKNO_EGNLDHPCAJF_OFFSET))(this);
	}
};
