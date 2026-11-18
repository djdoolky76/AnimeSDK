#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIAAHKAGMEM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OHABIJINEHA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195C48E0)
#define OHABIJINEHA_DENBGHPAMIL_OFFSET UNITYSDK_OFFSET(0x195C4690)
#define OHABIJINEHA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195C4540)
#define OHABIJINEHA_KACFKIIMCAO_OFFSET UNITYSDK_OFFSET(0x195C47A0)
#define OHABIJINEHA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195C49D0)
#define OHABIJINEHA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x195C4550)
#define OHABIJINEHA__CTOR_OFFSET UNITYSDK_OFFSET(0x195C4530)

inline static constexpr unsigned int OHABIJINEHA_TypeDefinitionIndex = 15581;

class OHABIJINEHA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HIAAHKAGMEM HBDPAIKANDB; // 0x18
	::System::String* MKHIJNBONPD; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 KPNOLLJCMFO; // 0x38

	::System::Void _ctor(::HIAAHKAGMEM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HIAAHKAGMEM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OHABIJINEHA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHABIJINEHA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABIJINEHA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* DENBGHPAMIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABIJINEHA_DENBGHPAMIL_OFFSET))(this);
	}

	::System::Int32 KACFKIIMCAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABIJINEHA_KACFKIIMCAO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABIJINEHA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABIJINEHA_LJANCIBECFG_OFFSET))(this);
	}
};
