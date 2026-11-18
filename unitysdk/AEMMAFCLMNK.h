#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPILLCBDLDK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AEMMAFCLMNK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1876BCA0)
#define AEMMAFCLMNK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1876BEE0)
#define AEMMAFCLMNK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1876BD90)
#define AEMMAFCLMNK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1876BDA0)
#define AEMMAFCLMNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1876BC90)

inline static constexpr unsigned int AEMMAFCLMNK_TypeDefinitionIndex = 9299;

class AEMMAFCLMNK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JPILLCBDLDK HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::JPILLCBDLDK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JPILLCBDLDK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AEMMAFCLMNK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMMAFCLMNK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMMAFCLMNK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMMAFCLMNK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEMMAFCLMNK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
