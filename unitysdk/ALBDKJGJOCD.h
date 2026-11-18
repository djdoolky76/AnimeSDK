#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGKLGMDIBMI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ALBDKJGJOCD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C509A30)
#define ALBDKJGJOCD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C509DA0)
#define ALBDKJGJOCD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C509EF0)
#define ALBDKJGJOCD_MPIFBCFCGDI_OFFSET UNITYSDK_OFFSET(0x1C509B20)
#define ALBDKJGJOCD_NGBHOLFPMFP_OFFSET UNITYSDK_OFFSET(0x1C509DB0)
#define ALBDKJGJOCD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C509C60)
#define ALBDKJGJOCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C509A20)

inline static constexpr unsigned int ALBDKJGJOCD_TypeDefinitionIndex = 9666;

class ALBDKJGJOCD : public ::System::Object
{
public:
	::JGKLGMDIBMI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 GDIIMANPKBC; // 0x28
	::System::Int32 AEKKOJBEMKK; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::JGKLGMDIBMI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JGKLGMDIBMI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALBDKJGJOCD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBDKJGJOCD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MPIFBCFCGDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBDKJGJOCD_MPIFBCFCGDI_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBDKJGJOCD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALBDKJGJOCD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NGBHOLFPMFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBDKJGJOCD_NGBHOLFPMFP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBDKJGJOCD_LJANCIBECFG_OFFSET))(this);
	}
};
