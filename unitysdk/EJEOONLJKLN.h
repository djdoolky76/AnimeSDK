#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJEBNDANNG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define EJEOONLJKLN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F2C3E0)
#define EJEOONLJKLN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F2C4D0)
#define EJEOONLJKLN_KACFKIIMCAO_OFFSET UNITYSDK_OFFSET(0x17F2C2A0)
#define EJEOONLJKLN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F2C290)
#define EJEOONLJKLN__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2C280)

inline static constexpr unsigned int EJEOONLJKLN_TypeDefinitionIndex = 16233;

class EJEOONLJKLN : public ::System::Object
{
public:
	::DJJEBNDANNG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 KPNOLLJCMFO; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::DJJEBNDANNG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DJJEBNDANNG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EJEOONLJKLN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEOONLJKLN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KACFKIIMCAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEOONLJKLN_KACFKIIMCAO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEOONLJKLN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJEOONLJKLN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
