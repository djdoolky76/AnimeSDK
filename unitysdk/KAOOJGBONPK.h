#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHGECKJKDHJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KAOOJGBONPK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152FCCD0)
#define KAOOJGBONPK_EDBIIAJKCPN_OFFSET UNITYSDK_OFFSET(0x152FD1A0)
#define KAOOJGBONPK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152FD050)
#define KAOOJGBONPK_IIBDCIPKOHL_OFFSET UNITYSDK_OFFSET(0x152FCDC0)
#define KAOOJGBONPK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152FD040)
#define KAOOJGBONPK_PNJOCJGNGCJ_OFFSET UNITYSDK_OFFSET(0x152FCF00)
#define KAOOJGBONPK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x152FD060)
#define KAOOJGBONPK__CTOR_OFFSET UNITYSDK_OFFSET(0x152FCCC0)

inline static constexpr unsigned int KAOOJGBONPK_TypeDefinitionIndex = 14322;

class KAOOJGBONPK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MHGECKJKDHJ HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 AEOGEKCDOLK; // 0x30
	::System::Int32 CAGEEFFCDMM; // 0x34
	::System::Int32 ODPCHCKPHAD; // 0x38

	::System::Void _ctor(::MHGECKJKDHJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MHGECKJKDHJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KAOOJGBONPK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOJGBONPK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IIBDCIPKOHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOJGBONPK_IIBDCIPKOHL_OFFSET))(this);
	}

	::System::Int32 PNJOCJGNGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOJGBONPK_PNJOCJGNGCJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOJGBONPK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAOOJGBONPK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOJGBONPK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 EDBIIAJKCPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOOJGBONPK_EDBIIAJKCPN_OFFSET))(this);
	}
};
