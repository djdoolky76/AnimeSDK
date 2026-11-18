#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOEKGJBCDIF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CMBFAPGEEGC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x157925B0)
#define CMBFAPGEEGC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15792800)
#define CMBFAPGEEGC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15792B40)
#define CMBFAPGEEGC_GPEGJNMAJAA_OFFSET UNITYSDK_OFFSET(0x157926F0)
#define CMBFAPGEEGC_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x15792A30)
#define CMBFAPGEEGC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15792B50)
#define CMBFAPGEEGC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x157928F0)
#define CMBFAPGEEGC__CTOR_OFFSET UNITYSDK_OFFSET(0x157925A0)

inline static constexpr unsigned int CMBFAPGEEGC_TypeDefinitionIndex = 11996;

class CMBFAPGEEGC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::DOEKGJBCDIF HBDPAIKANDB; // 0x20
	::System::String* PLLOLMBABKH; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 NLCDENLKOPM; // 0x40

	::System::Void _ctor(::DOEKGJBCDIF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DOEKGJBCDIF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CMBFAPGEEGC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFAPGEEGC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* GPEGJNMAJAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFAPGEEGC_GPEGJNMAJAA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFAPGEEGC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFAPGEEGC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFAPGEEGC_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMBFAPGEEGC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBFAPGEEGC_LJANCIBECFG_OFFSET))(this);
	}
};
