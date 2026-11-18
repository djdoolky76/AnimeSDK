#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAGEIKJBNIG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LKGNBMBAEFO_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x1AD60540)
#define LKGNBMBAEFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD60680)
#define LKGNBMBAEFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD60770)
#define LKGNBMBAEFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD60780)
#define LKGNBMBAEFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD60530)

inline static constexpr unsigned int LKGNBMBAEFO_TypeDefinitionIndex = 10093;

class LKGNBMBAEFO : public ::System::Object
{
public:
	::HAGEIKJBNIG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 NEFBELMIONO; // 0x2C

	::System::Void _ctor(::HAGEIKJBNIG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HAGEIKJBNIG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LKGNBMBAEFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGNBMBAEFO_ADBAHILIPIH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGNBMBAEFO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGNBMBAEFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGNBMBAEFO_LJANCIBECFG_OFFSET))(this);
	}
};
