#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KONECBMJFMC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MLPPAMJMHFA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E10C70)
#define MLPPAMJMHFA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E10C60)
#define MLPPAMJMHFA_GHGFMPOFDGE_OFFSET UNITYSDK_OFFSET(0x18E10D60)
#define MLPPAMJMHFA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E10EA0)
#define MLPPAMJMHFA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18E10B20)
#define MLPPAMJMHFA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E10B10)

inline static constexpr unsigned int MLPPAMJMHFA_TypeDefinitionIndex = 10168;

class MLPPAMJMHFA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KONECBMJFMC HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 BLDEGCMNHJO; // 0x30

	::System::Void _ctor(::KONECBMJFMC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KONECBMJFMC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MLPPAMJMHFA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAMJMHFA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLPPAMJMHFA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAMJMHFA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GHGFMPOFDGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAMJMHFA_GHGFMPOFDGE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAMJMHFA_LJANCIBECFG_OFFSET))(this);
	}
};
