#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJFEIEDPJDL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DNCNOIOLNDH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A558810)
#define DNCNOIOLNDH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A558460)
#define DNCNOIOLNDH_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1A558700)
#define DNCNOIOLNDH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A558470)
#define DNCNOIOLNDH_MBJIJBEEMHD_OFFSET UNITYSDK_OFFSET(0x1A558480)
#define DNCNOIOLNDH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A5585C0)
#define DNCNOIOLNDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A558450)

inline static constexpr unsigned int DNCNOIOLNDH_TypeDefinitionIndex = 15489;

class DNCNOIOLNDH : public ::System::Object
{
public:
	::BJFEIEDPJDL HBDPAIKANDB; // 0x10
	::System::String* EOALHEEBMKM; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 NLCDENLKOPM; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 PNHIMPBNMIH; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E

	::System::Void _ctor(::BJFEIEDPJDL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BJFEIEDPJDL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DNCNOIOLNDH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNCNOIOLNDH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCNOIOLNDH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MBJIJBEEMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCNOIOLNDH_MBJIJBEEMHD_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCNOIOLNDH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCNOIOLNDH_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCNOIOLNDH_COFGIJJOFLP_OFFSET))(this);
	}
};
