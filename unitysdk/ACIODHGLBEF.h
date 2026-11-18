#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMABALPLECJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ACIODHGLBEF_BPHODGOMLKC_OFFSET UNITYSDK_OFFSET(0x1ADA02C0)
#define ACIODHGLBEF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADA0400)
#define ACIODHGLBEF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADA02B0)
#define ACIODHGLBEF_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1ADA0500)
#define ACIODHGLBEF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADA04F0)
#define ACIODHGLBEF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADA0170)
#define ACIODHGLBEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA0160)

inline static constexpr unsigned int ACIODHGLBEF_TypeDefinitionIndex = 10262;

class ACIODHGLBEF : public ::System::Object
{
public:
	::FMABALPLECJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 MFAAMEMILEM; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 FKEPPPPMPBF; // 0x34

	::System::Void _ctor(::FMABALPLECJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMABALPLECJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ACIODHGLBEF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIODHGLBEF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACIODHGLBEF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BPHODGOMLKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIODHGLBEF_BPHODGOMLKC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIODHGLBEF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIODHGLBEF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIODHGLBEF_KCFBOPKOLKI_OFFSET))(this);
	}
};
