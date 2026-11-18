#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLCILBHPLAE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IHBKFHFGMIL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B625760)
#define IHBKFHFGMIL_DLJPIDNDNOE_OFFSET UNITYSDK_OFFSET(0x1B625600)
#define IHBKFHFGMIL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B625750)
#define IHBKFHFGMIL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B625740)
#define IHBKFHFGMIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6255F0)

inline static constexpr unsigned int IHBKFHFGMIL_TypeDefinitionIndex = 17623;

class IHBKFHFGMIL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FLCILBHPLAE HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 AIAHLFMLKNP; // 0x2C

	::System::Void _ctor(::FLCILBHPLAE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FLCILBHPLAE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHBKFHFGMIL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DLJPIDNDNOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBKFHFGMIL_DLJPIDNDNOE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBKFHFGMIL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHBKFHFGMIL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBKFHFGMIL_COFGIJJOFLP_OFFSET))(this);
	}
};
