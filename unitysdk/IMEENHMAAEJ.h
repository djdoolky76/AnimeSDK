#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPJBDHIKDEB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IMEENHMAAEJ_BFFMEAELHHI_OFFSET UNITYSDK_OFFSET(0x195431C0)
#define IMEENHMAAEJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195432F0)
#define IMEENHMAAEJ_EFMCBDANGJD_OFFSET UNITYSDK_OFFSET(0x19543080)
#define IMEENHMAAEJ_EONHCLBGJOA_OFFSET UNITYSDK_OFFSET(0x19542E00)
#define IMEENHMAAEJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195432E0)
#define IMEENHMAAEJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195432D0)
#define IMEENHMAAEJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19542F40)
#define IMEENHMAAEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19542DF0)

inline static constexpr unsigned int IMEENHMAAEJ_TypeDefinitionIndex = 16184;

class IMEENHMAAEJ : public ::System::Object
{
public:
	::MPJBDHIKDEB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* PDCLOICDNBC; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 JKEAJLNIHNP; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 NOFJMLLEJMK; // 0x3C
	::System::Int32 MFOKMKPJODC; // 0x40

	::System::Void _ctor(::MPJBDHIKDEB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MPJBDHIKDEB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMEENHMAAEJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 EONHCLBGJOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEENHMAAEJ_EONHCLBGJOA_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEENHMAAEJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 EFMCBDANGJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEENHMAAEJ_EFMCBDANGJD_OFFSET))(this);
	}

	::System::String* BFFMEAELHHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEENHMAAEJ_BFFMEAELHHI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEENHMAAEJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMEENHMAAEJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEENHMAAEJ_COFGIJJOFLP_OFFSET))(this);
	}
};
