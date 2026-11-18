#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDKCEPAJNDJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JGNKLMDEBEJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B13B130)
#define JGNKLMDEBEJ_DHIBMENPJBG_OFFSET UNITYSDK_OFFSET(0x1B13AEC0)
#define JGNKLMDEBEJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B13B000)
#define JGNKLMDEBEJ_HOKOIHJIMKN_OFFSET UNITYSDK_OFFSET(0x1B13B220)
#define JGNKLMDEBEJ_KEGOAOBDLIK_OFFSET UNITYSDK_OFFSET(0x1B13B010)
#define JGNKLMDEBEJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B13B120)
#define JGNKLMDEBEJ_OOJHLJJKMKC_OFFSET UNITYSDK_OFFSET(0x1B13B360)
#define JGNKLMDEBEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13AEB0)

inline static constexpr unsigned int JGNKLMDEBEJ_TypeDefinitionIndex = 17523;

class JGNKLMDEBEJ : public ::System::Object
{
public:
	::System::String* HEBAGKAGLEL; // 0x10
	::NDKCEPAJNDJ HBDPAIKANDB; // 0x18
	::System::String* INGAFNNMIHD; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 GPMOKBFCNEA; // 0x38
	::System::Int32 JOCELBAMOLG; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::NDKCEPAJNDJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDKCEPAJNDJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DHIBMENPJBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ_DHIBMENPJBG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KEGOAOBDLIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ_KEGOAOBDLIK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HOKOIHJIMKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ_HOKOIHJIMKN_OFFSET))(this);
	}

	::System::String* OOJHLJJKMKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNKLMDEBEJ_OOJHLJJKMKC_OFFSET))(this);
	}
};
