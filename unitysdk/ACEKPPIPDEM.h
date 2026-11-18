#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLNFGJEDBKH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ACEKPPIPDEM_BJACBMEHNKD_OFFSET UNITYSDK_OFFSET(0x18769B90)
#define ACEKPPIPDEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18769E10)
#define ACEKPPIPDEM_EGFCGJNIICG_OFFSET UNITYSDK_OFFSET(0x18769A50)
#define ACEKPPIPDEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18769F00)
#define ACEKPPIPDEM_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x18769CD0)
#define ACEKPPIPDEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18769A40)
#define ACEKPPIPDEM_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x18769930)
#define ACEKPPIPDEM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x187697F0)
#define ACEKPPIPDEM__CTOR_OFFSET UNITYSDK_OFFSET(0x187697E0)

inline static constexpr unsigned int ACEKPPIPDEM_TypeDefinitionIndex = 14562;

class ACEKPPIPDEM : public ::System::Object
{
public:
	::LLNFGJEDBKH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* NFFPNFDEDBN; // 0x28
	::System::Int32 KLJFKFENHJB; // 0x30
	::System::Int32 EDOEPHPBJHH; // 0x34
	::System::Int32 MFAAMEMILEM; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::LLNFGJEDBKH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LLNFGJEDBKH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ACEKPPIPDEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 EGFCGJNIICG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_EGFCGJNIICG_OFFSET))(this);
	}

	::System::Int32 BJACBMEHNKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_BJACBMEHNKD_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEKPPIPDEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
