#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEBMMADFIFF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LAIIKEPEBHC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DA14B0)
#define LAIIKEPEBHC_CPINLDEPLBO_OFFSET UNITYSDK_OFFSET(0x19DA1980)
#define LAIIKEPEBHC_DFBLPPHHOMD_OFFSET UNITYSDK_OFFSET(0x19DA1370)
#define LAIIKEPEBHC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DA1970)
#define LAIIKEPEBHC_JLKBAFLNNLD_OFFSET UNITYSDK_OFFSET(0x19DA16E0)
#define LAIIKEPEBHC_KDCEHGIFDKE_OFFSET UNITYSDK_OFFSET(0x19DA1830)
#define LAIIKEPEBHC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DA1820)
#define LAIIKEPEBHC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19DA15A0)
#define LAIIKEPEBHC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA1360)

inline static constexpr unsigned int LAIIKEPEBHC_TypeDefinitionIndex = 15418;

class LAIIKEPEBHC : public ::System::Object
{
public:
	::DEBMMADFIFF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 DFKNDNEPMEH; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 EMFBGEHIMED; // 0x34
	::System::Int32 LPPAOOCCBCN; // 0x38
	::System::Int32 IFOEDKHANNF; // 0x3C

	::System::Void _ctor(::DEBMMADFIFF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DEBMMADFIFF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LAIIKEPEBHC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DFBLPPHHOMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_DFBLPPHHOMD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 JLKBAFLNNLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_JLKBAFLNNLD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KDCEHGIFDKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_KDCEHGIFDKE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CPINLDEPLBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIIKEPEBHC_CPINLDEPLBO_OFFSET))(this);
	}
};
