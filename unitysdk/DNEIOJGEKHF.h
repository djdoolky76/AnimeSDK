#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMMGDLLKGPA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DNEIOJGEKHF_BCOGCADNCHN_OFFSET UNITYSDK_OFFSET(0x19ADF2D0)
#define DNEIOJGEKHF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ADF1E0)
#define DNEIOJGEKHF_FNFKGGMBPOK_OFFSET UNITYSDK_OFFSET(0x19ADF4F0)
#define DNEIOJGEKHF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ADF1D0)
#define DNEIOJGEKHF_GGNLHJNPPAK_OFFSET UNITYSDK_OFFSET(0x19ADF3E0)
#define DNEIOJGEKHF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ADF630)
#define DNEIOJGEKHF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19ADF640)
#define DNEIOJGEKHF__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADF1C0)

inline static constexpr unsigned int DNEIOJGEKHF_TypeDefinitionIndex = 15934;

class DNEIOJGEKHF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* ADILEJGJMJK; // 0x18
	::IMMGDLLKGPA HBDPAIKANDB; // 0x20
	::System::String* OCGDGNGMBHL; // 0x30
	::System::Int32 NIOMDIPBGFP; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::IMMGDLLKGPA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IMMGDLLKGPA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DNEIOJGEKHF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNEIOJGEKHF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEIOJGEKHF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* BCOGCADNCHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEIOJGEKHF_BCOGCADNCHN_OFFSET))(this);
	}

	::System::String* GGNLHJNPPAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEIOJGEKHF_GGNLHJNPPAK_OFFSET))(this);
	}

	::System::Int32 FNFKGGMBPOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEIOJGEKHF_FNFKGGMBPOK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEIOJGEKHF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEIOJGEKHF_PPIFNHNGCGO_OFFSET))(this);
	}
};
