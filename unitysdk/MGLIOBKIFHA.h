#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAHKEFCOJFI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MGLIOBKIFHA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B3151B0)
#define MGLIOBKIFHA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B3153E0)
#define MGLIOBKIFHA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B3151A0)
#define MGLIOBKIFHA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B3152A0)
#define MGLIOBKIFHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B315190)

inline static constexpr unsigned int MGLIOBKIFHA_TypeDefinitionIndex = 14284;

class MGLIOBKIFHA : public ::System::Object
{
public:
	::LAHKEFCOJFI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::LAHKEFCOJFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LAHKEFCOJFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MGLIOBKIFHA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLIOBKIFHA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLIOBKIFHA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLIOBKIFHA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGLIOBKIFHA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
