#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOAILIPINKG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JHHGPOJBJNP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1935BA10)
#define JHHGPOJBJNP_EPBFBIKDJOM_OFFSET UNITYSDK_OFFSET(0x1935B7C0)
#define JHHGPOJBJNP_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1935B8D0)
#define JHHGPOJBJNP_FKAOANDANHI_OFFSET UNITYSDK_OFFSET(0x1935BB00)
#define JHHGPOJBJNP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1935B660)
#define JHHGPOJBJNP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1935B670)
#define JHHGPOJBJNP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1935B680)
#define JHHGPOJBJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1935B650)

inline static constexpr unsigned int JHHGPOJBJNP_TypeDefinitionIndex = 15927;

class JHHGPOJBJNP : public ::System::Object
{
public:
	::LOAILIPINKG HBDPAIKANDB; // 0x10
	::System::String* GJMFNIFGBFG; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* KMJGHMGENKK; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 JKLCALGBGJP; // 0x40

	::System::Void _ctor(::LOAILIPINKG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LOAILIPINKG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JHHGPOJBJNP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHHGPOJBJNP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHGPOJBJNP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHGPOJBJNP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* EPBFBIKDJOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHGPOJBJNP_EPBFBIKDJOM_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHGPOJBJNP_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHGPOJBJNP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FKAOANDANHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHGPOJBJNP_FKAOANDANHI_OFFSET))(this);
	}
};
