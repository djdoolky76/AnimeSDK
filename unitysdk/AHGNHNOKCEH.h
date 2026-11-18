#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDKFMPABABD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AHGNHNOKCEH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F0CE00)
#define AHGNHNOKCEH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F0D2C0)
#define AHGNHNOKCEH_GCOLPNNOBMM_OFFSET UNITYSDK_OFFSET(0x19F0D2D0)
#define AHGNHNOKCEH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F0D2B0)
#define AHGNHNOKCEH_LPHAIELJIEF_OFFSET UNITYSDK_OFFSET(0x19F0D170)
#define AHGNHNOKCEH_MHKEMJDFLIJ_OFFSET UNITYSDK_OFFSET(0x19F0D030)
#define AHGNHNOKCEH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19F0CEF0)
#define AHGNHNOKCEH__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0CDF0)

inline static constexpr unsigned int AHGNHNOKCEH_TypeDefinitionIndex = 11328;

class AHGNHNOKCEH : public ::System::Object
{
public:
	::KDKFMPABABD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 DGNAGDGBKIE; // 0x2C
	::System::Int32 JEDEMPHDCAK; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 AGOJGLDHINI; // 0x38
	::System::Int32 KJICEOMCCML; // 0x3C

	::System::Void _ctor(::KDKFMPABABD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KDKFMPABABD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AHGNHNOKCEH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGNHNOKCEH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGNHNOKCEH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 MHKEMJDFLIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGNHNOKCEH_MHKEMJDFLIJ_OFFSET))(this);
	}

	::System::Int32 LPHAIELJIEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGNHNOKCEH_LPHAIELJIEF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGNHNOKCEH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHGNHNOKCEH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GCOLPNNOBMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGNHNOKCEH_GCOLPNNOBMM_OFFSET))(this);
	}
};
