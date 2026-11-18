#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFKJFGKPGLL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NMMFGMLPGLP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19122620)
#define NMMFGMLPGLP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19122720)
#define NMMFGMLPGLP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19122710)
#define NMMFGMLPGLP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19122730)
#define NMMFGMLPGLP__CTOR_OFFSET UNITYSDK_OFFSET(0x19122610)

inline static constexpr unsigned int NMMFGMLPGLP_TypeDefinitionIndex = 9658;

class NMMFGMLPGLP : public ::System::Object
{
public:
	::GFKJFGKPGLL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C

	::System::Void _ctor(::GFKJFGKPGLL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GFKJFGKPGLL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NMMFGMLPGLP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFGMLPGLP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFGMLPGLP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMMFGMLPGLP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMFGMLPGLP_PPIFNHNGCGO_OFFSET))(this);
	}
};
