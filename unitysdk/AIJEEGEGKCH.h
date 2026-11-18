#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHAMHAJDKNL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AIJEEGEGKCH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1876D6E0)
#define AIJEEGEGKCH_DHAPAPEGKCL_OFFSET UNITYSDK_OFFSET(0x1876D560)
#define AIJEEGEGKCH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1876D6C0)
#define AIJEEGEGKCH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1876D6D0)
#define AIJEEGEGKCH_PCIEGJOCGFP_OFFSET UNITYSDK_OFFSET(0x1876D420)
#define AIJEEGEGKCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1876D410)

inline static constexpr unsigned int AIJEEGEGKCH_TypeDefinitionIndex = 12406;

class AIJEEGEGKCH : public ::System::Object
{
public:
	::CHAMHAJDKNL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Boolean OLIILBEDJBP; // 0x2A
	::System::Byte ACIOBDEBDNK; // 0x2B
	::System::Int32 BKLJPIHEHAC; // 0x2C

	::System::Void _ctor(::CHAMHAJDKNL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CHAMHAJDKNL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AIJEEGEGKCH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PCIEGJOCGFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJEEGEGKCH_PCIEGJOCGFP_OFFSET))(this);
	}

	::System::Boolean DHAPAPEGKCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJEEGEGKCH_DHAPAPEGKCL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIJEEGEGKCH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJEEGEGKCH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJEEGEGKCH_COFGIJJOFLP_OFFSET))(this);
	}
};
