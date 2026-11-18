#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBPBGHEIGHO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HHIIJEEABFL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B123880)
#define HHIIJEEABFL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B123730)
#define HHIIJEEABFL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B123720)
#define HHIIJEEABFL_OPLNBOBGBGJ_OFFSET UNITYSDK_OFFSET(0x1B123740)
#define HHIIJEEABFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B123710)

inline static constexpr unsigned int HHIIJEEABFL_TypeDefinitionIndex = 11984;

class HHIIJEEABFL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FBPBGHEIGHO HBDPAIKANDB; // 0x18
	::System::Int32 BOCNPOICECN; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::FBPBGHEIGHO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FBPBGHEIGHO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HHIIJEEABFL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIIJEEABFL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHIIJEEABFL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OPLNBOBGBGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIIJEEABFL_OPLNBOBGBGJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIIJEEABFL_COFGIJJOFLP_OFFSET))(this);
	}
};
