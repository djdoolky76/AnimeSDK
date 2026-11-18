#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIGCFGOEAIE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define GLDLMMLNHBM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x160E91F0)
#define GLDLMMLNHBM_DCAMKMBAFBD_OFFSET UNITYSDK_OFFSET(0x160E90B0)
#define GLDLMMLNHBM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x160E8CD0)
#define GLDLMMLNHBM_HPKIHJABBFP_OFFSET UNITYSDK_OFFSET(0x160E8E30)
#define GLDLMMLNHBM_JOFBFJNNMFG_OFFSET UNITYSDK_OFFSET(0x160E8CF0)
#define GLDLMMLNHBM_KGPIFDINPNC_OFFSET UNITYSDK_OFFSET(0x160E8F70)
#define GLDLMMLNHBM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x160E8CE0)
#define GLDLMMLNHBM_PGOOCKILDII_OFFSET UNITYSDK_OFFSET(0x160E92E0)
#define GLDLMMLNHBM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x160E8B90)
#define GLDLMMLNHBM__CTOR_OFFSET UNITYSDK_OFFSET(0x160E8B80)

inline static constexpr unsigned int GLDLMMLNHBM_TypeDefinitionIndex = 14436;

class GLDLMMLNHBM : public ::System::Object
{
public:
	::EIGCFGOEAIE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 BDJKCCOJIME; // 0x28
	::System::Int32 LEOEBNELFOM; // 0x2C
	::System::Int32 PFIAFKOCDJI; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 HIFLJFIMMBD; // 0x38
	::System::Int32 GGPMGIJDHDG; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40

	::System::Void _ctor(::EIGCFGOEAIE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EIGCFGOEAIE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GLDLMMLNHBM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JOFBFJNNMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_JOFBFJNNMFG_OFFSET))(this);
	}

	::System::Int32 HPKIHJABBFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_HPKIHJABBFP_OFFSET))(this);
	}

	::System::Int32 KGPIFDINPNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_KGPIFDINPNC_OFFSET))(this);
	}

	::System::Int32 DCAMKMBAFBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_DCAMKMBAFBD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PGOOCKILDII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDLMMLNHBM_PGOOCKILDII_OFFSET))(this);
	}
};
