#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOOOIMGAEMP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HIEFLKMPLEA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5CA6A0)
#define HIEFLKMPLEA_ELLMJDLCBJB_OFFSET UNITYSDK_OFFSET(0x1A5CA2C0)
#define HIEFLKMPLEA_FFHGPBBEGEF_OFFSET UNITYSDK_OFFSET(0x1A5CA170)
#define HIEFLKMPLEA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5CA2B0)
#define HIEFLKMPLEA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5CA160)
#define HIEFLKMPLEA_MIFKBCHDOAP_OFFSET UNITYSDK_OFFSET(0x1A5CA400)
#define HIEFLKMPLEA_PANOHFGFIHN_OFFSET UNITYSDK_OFFSET(0x1A5CA000)
#define HIEFLKMPLEA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A5CA560)
#define HIEFLKMPLEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C9FF0)

inline static constexpr unsigned int HIEFLKMPLEA_TypeDefinitionIndex = 15494;

class HIEFLKMPLEA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JOOOIMGAEMP HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Boolean BAALKHDLEAP; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 COPMGBLOJGO; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 IDHDPCGABKN; // 0x34
	::System::Boolean MHBMBNBIDAD; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39

	::System::Void _ctor(::JOOOIMGAEMP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOOOIMGAEMP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HIEFLKMPLEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean PANOHFGFIHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_PANOHFGFIHN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FFHGPBBEGEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_FFHGPBBEGEF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ELLMJDLCBJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_ELLMJDLCBJB_OFFSET))(this);
	}

	::System::Boolean MIFKBCHDOAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_MIFKBCHDOAP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEFLKMPLEA_COFGIJJOFLP_OFFSET))(this);
	}
};
