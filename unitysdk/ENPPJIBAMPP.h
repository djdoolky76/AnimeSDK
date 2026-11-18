#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHDJKNIMHFC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ENPPJIBAMPP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B100AA0)
#define ENPPJIBAMPP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B100950)
#define ENPPJIBAMPP_JOPIMBKNJFC_OFFSET UNITYSDK_OFFSET(0x1B100960)
#define ENPPJIBAMPP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B100B90)
#define ENPPJIBAMPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B100940)

inline static constexpr unsigned int ENPPJIBAMPP_TypeDefinitionIndex = 10283;

class ENPPJIBAMPP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::AHDJKNIMHFC HBDPAIKANDB; // 0x18
	::System::Int32 MDHALBBDODH; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::AHDJKNIMHFC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AHDJKNIMHFC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ENPPJIBAMPP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENPPJIBAMPP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JOPIMBKNJFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPPJIBAMPP_JOPIMBKNJFC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPPJIBAMPP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPPJIBAMPP_LJANCIBECFG_OFFSET))(this);
	}
};
