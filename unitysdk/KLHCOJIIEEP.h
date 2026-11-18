#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIGKOCIOLLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KLHCOJIIEEP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B644330)
#define KLHCOJIIEEP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B6441D0)
#define KLHCOJIIEEP_GCJEHAPDEMH_OFFSET UNITYSDK_OFFSET(0x1B6441F0)
#define KLHCOJIIEEP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B6441E0)
#define KLHCOJIIEEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6441C0)

inline static constexpr unsigned int KLHCOJIIEEP_TypeDefinitionIndex = 11772;

class KLHCOJIIEEP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PIGKOCIOLLM HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 KABGOKDBLBG; // 0x2C

	::System::Void _ctor(::PIGKOCIOLLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PIGKOCIOLLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KLHCOJIIEEP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLHCOJIIEEP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCOJIIEEP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GCJEHAPDEMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCOJIIEEP_GCJEHAPDEMH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCOJIIEEP_COFGIJJOFLP_OFFSET))(this);
	}
};
