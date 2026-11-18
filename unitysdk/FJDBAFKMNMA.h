#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAHOMBOJMBP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FJDBAFKMNMA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B862270)
#define FJDBAFKMNMA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B862360)
#define FJDBAFKMNMA_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B862370)
#define FJDBAFKMNMA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B862260)
#define FJDBAFKMNMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B862250)

inline static constexpr unsigned int FJDBAFKMNMA_TypeDefinitionIndex = 17262;

class FJDBAFKMNMA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IAHOMBOJMBP HBDPAIKANDB; // 0x18
	::System::Int32 OKBBGPGIODD; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::IAHOMBOJMBP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IAHOMBOJMBP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJDBAFKMNMA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDBAFKMNMA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDBAFKMNMA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJDBAFKMNMA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDBAFKMNMA_GKAMCMIJFHJ_OFFSET))(this);
	}
};
