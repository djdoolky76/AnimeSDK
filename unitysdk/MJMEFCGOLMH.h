#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPCIBEDODKE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MJMEFCGOLMH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C08A1E0)
#define MJMEFCGOLMH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C08A410)
#define MJMEFCGOLMH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C08A420)
#define MJMEFCGOLMH_LLDNJDCDGFG_OFFSET UNITYSDK_OFFSET(0x1C08A2D0)
#define MJMEFCGOLMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08A1D0)

inline static constexpr unsigned int MJMEFCGOLMH_TypeDefinitionIndex = 14713;

class MJMEFCGOLMH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EPCIBEDODKE HBDPAIKANDB; // 0x18
	::System::Int32 JEAKCPKGLNO; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::EPCIBEDODKE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPCIBEDODKE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MJMEFCGOLMH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMEFCGOLMH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LLDNJDCDGFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMEFCGOLMH_LLDNJDCDGFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJMEFCGOLMH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMEFCGOLMH_LJANCIBECFG_OFFSET))(this);
	}
};
