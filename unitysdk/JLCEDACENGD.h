#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKLPBKHMKBG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JLCEDACENGD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15AAC010)
#define JLCEDACENGD_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x15AABEB0)
#define JLCEDACENGD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15AABFF0)
#define JLCEDACENGD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15AAC000)
#define JLCEDACENGD__CTOR_OFFSET UNITYSDK_OFFSET(0x15AABEA0)

inline static constexpr unsigned int JLCEDACENGD_TypeDefinitionIndex = 11732;

class JLCEDACENGD : public ::System::Object
{
public:
	::NKLPBKHMKBG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 COHJGPCKEIH; // 0x2C

	::System::Void _ctor(::NKLPBKHMKBG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NKLPBKHMKBG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JLCEDACENGD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCEDACENGD_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLCEDACENGD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCEDACENGD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCEDACENGD_COFGIJJOFLP_OFFSET))(this);
	}
};
