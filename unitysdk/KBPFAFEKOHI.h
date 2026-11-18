#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMFKBEKGLGH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KBPFAFEKOHI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BD4180)
#define KBPFAFEKOHI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BD4030)
#define KBPFAFEKOHI_HKAOPLLNEAE_OFFSET UNITYSDK_OFFSET(0x18BD4040)
#define KBPFAFEKOHI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BD4270)
#define KBPFAFEKOHI__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD4020)

inline static constexpr unsigned int KBPFAFEKOHI_TypeDefinitionIndex = 16867;

class KBPFAFEKOHI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MMFKBEKGLGH HBDPAIKANDB; // 0x18
	::System::Int32 LFJPAINMOIM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::MMFKBEKGLGH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MMFKBEKGLGH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KBPFAFEKOHI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBPFAFEKOHI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKAOPLLNEAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPFAFEKOHI_HKAOPLLNEAE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPFAFEKOHI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPFAFEKOHI_LJANCIBECFG_OFFSET))(this);
	}
};
