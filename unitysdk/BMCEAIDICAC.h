#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFPDLNNAOOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BMCEAIDICAC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AC8F20)
#define BMCEAIDICAC_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x19AC8C80)
#define BMCEAIDICAC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AC8DC0)
#define BMCEAIDICAC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AC8DD0)
#define BMCEAIDICAC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19AC8DE0)
#define BMCEAIDICAC__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC8C70)

inline static constexpr unsigned int BMCEAIDICAC_TypeDefinitionIndex = 17240;

class BMCEAIDICAC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JFPDLNNAOOD HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 COHJGPCKEIH; // 0x30

	::System::Void _ctor(::JFPDLNNAOOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JFPDLNNAOOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BMCEAIDICAC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCEAIDICAC_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMCEAIDICAC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCEAIDICAC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCEAIDICAC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCEAIDICAC_COFGIJJOFLP_OFFSET))(this);
	}
};
