#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIGBFEHOCNJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CEIBPLKEJJN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A53D4A0)
#define CEIBPLKEJJN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A53D490)
#define CEIBPLKEJJN_GDOOGBHNLLH_OFFSET UNITYSDK_OFFSET(0x1A53D350)
#define CEIBPLKEJJN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A53D590)
#define CEIBPLKEJJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53D340)

inline static constexpr unsigned int CEIBPLKEJJN_TypeDefinitionIndex = 14947;

class CEIBPLKEJJN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IIGBFEHOCNJ HBDPAIKANDB; // 0x18
	::System::Int32 ABMGPEBGLIB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::IIGBFEHOCNJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IIGBFEHOCNJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CEIBPLKEJJN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GDOOGBHNLLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIBPLKEJJN_GDOOGBHNLLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEIBPLKEJJN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIBPLKEJJN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIBPLKEJJN_LJANCIBECFG_OFFSET))(this);
	}
};
