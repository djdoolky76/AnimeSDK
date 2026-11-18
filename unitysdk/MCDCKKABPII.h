#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEHKIIBFNEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MCDCKKABPII_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7F66B0)
#define MCDCKKABPII_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7F66A0)
#define MCDCKKABPII_GKJBNCMGEME_OFFSET UNITYSDK_OFFSET(0x1B7F67A0)
#define MCDCKKABPII_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7F6690)
#define MCDCKKABPII__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F6680)

inline static constexpr unsigned int MCDCKKABPII_TypeDefinitionIndex = 17719;

class MCDCKKABPII : public ::System::Object
{
public:
	::FEHKIIBFNEH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 KNBGFBBKBGE; // 0x2C

	::System::Void _ctor(::FEHKIIBFNEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FEHKIIBFNEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCDCKKABPII__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDCKKABPII_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCDCKKABPII_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDCKKABPII_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GKJBNCMGEME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDCKKABPII_GKJBNCMGEME_OFFSET))(this);
	}
};
