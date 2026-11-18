#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIDMOLNPIOC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GKLJJDJDKEG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x160E7650)
#define GKLJJDJDKEG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x160E7C20)
#define GKLJJDJDKEG_HCPKDCOCEHI_OFFSET UNITYSDK_OFFSET(0x160E7860)
#define GKLJJDJDKEG_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x160E7750)
#define GKLJJDJDKEG_IPPNLAFOIJK_OFFSET UNITYSDK_OFFSET(0x160E7AE0)
#define GKLJJDJDKEG_LILFKKNDABH_OFFSET UNITYSDK_OFFSET(0x160E72A0)
#define GKLJJDJDKEG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x160E7740)
#define GKLJJDJDKEG_NCAEPBCFALD_OFFSET UNITYSDK_OFFSET(0x160E7400)
#define GKLJJDJDKEG_PCFOBOBKPDK_OFFSET UNITYSDK_OFFSET(0x160E7510)
#define GKLJJDJDKEG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x160E79A0)
#define GKLJJDJDKEG__CTOR_OFFSET UNITYSDK_OFFSET(0x160E7290)

inline static constexpr unsigned int GKLJJDJDKEG_TypeDefinitionIndex = 12682;

class GKLJJDJDKEG : public ::System::Object
{
public:
	::GIDMOLNPIOC HBDPAIKANDB; // 0x10
	::System::String* EOALHEEBMKM; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* GHMCIOLCCHD; // 0x30
	::System::Int32 GDAJJOCLLCD; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 DBCGOICOCLE; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean CPENLMJHHPM; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x47
	::System::Int32 PLOIEPJJECG; // 0x48

	::System::Void _ctor(::GIDMOLNPIOC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GIDMOLNPIOC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GKLJJDJDKEG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LILFKKNDABH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_LILFKKNDABH_OFFSET))(this);
	}

	::System::String* NCAEPBCFALD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_NCAEPBCFALD_OFFSET))(this);
	}

	::System::Int32 PCFOBOBKPDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_PCFOBOBKPDK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 HCPKDCOCEHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_HCPKDCOCEHI_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 IPPNLAFOIJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_IPPNLAFOIJK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKLJJDJDKEG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
