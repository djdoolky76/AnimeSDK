#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEHABKADDPJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MCFDGHNNOHB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19104990)
#define MCFDGHNNOHB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19104E20)
#define MCFDGHNNOHB_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x19104BA0)
#define MCFDGHNNOHB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19104B90)
#define MCFDGHNNOHB_LKCBMOKGOAB_OFFSET UNITYSDK_OFFSET(0x19104A80)
#define MCFDGHNNOHB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19104CE0)
#define MCFDGHNNOHB__CTOR_OFFSET UNITYSDK_OFFSET(0x19104980)

inline static constexpr unsigned int MCFDGHNNOHB_TypeDefinitionIndex = 16642;

class MCFDGHNNOHB : public ::System::Object
{
public:
	::GEHABKADDPJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* KKEELNLIOFH; // 0x28
	::System::Int32 BKGOMDBILLM; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::GEHABKADDPJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GEHABKADDPJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCFDGHNNOHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFDGHNNOHB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LKCBMOKGOAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFDGHNNOHB_LKCBMOKGOAB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFDGHNNOHB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HDAGGDKMDAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFDGHNNOHB_HDAGGDKMDAI_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFDGHNNOHB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCFDGHNNOHB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
