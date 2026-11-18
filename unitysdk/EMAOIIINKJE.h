#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPANOCFFLAL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EMAOIIINKJE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A59E0B0)
#define EMAOIIINKJE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A59DF80)
#define EMAOIIINKJE_HOHEJCGOOJN_OFFSET UNITYSDK_OFFSET(0x1A59DD00)
#define EMAOIIINKJE_JOEFJDJOGPJ_OFFSET UNITYSDK_OFFSET(0x1A59DE40)
#define EMAOIIINKJE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A59E0A0)
#define EMAOIIINKJE_PJOKHDECFKD_OFFSET UNITYSDK_OFFSET(0x1A59DF90)
#define EMAOIIINKJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A59DCF0)

inline static constexpr unsigned int EMAOIIINKJE_TypeDefinitionIndex = 9677;

class EMAOIIINKJE : public ::System::Object
{
public:
	::System::String* FIHCCIBHJKC; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::IPANOCFFLAL HBDPAIKANDB; // 0x20
	::System::Int32 DACEONKGEMJ; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 HNOCKOGANGA; // 0x38

	::System::Void _ctor(::IPANOCFFLAL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IPANOCFFLAL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EMAOIIINKJE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HOHEJCGOOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOIIINKJE_HOHEJCGOOJN_OFFSET))(this);
	}

	::System::Int32 JOEFJDJOGPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOIIINKJE_JOEFJDJOGPJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMAOIIINKJE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PJOKHDECFKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOIIINKJE_PJOKHDECFKD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOIIINKJE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOIIINKJE_COFGIJJOFLP_OFFSET))(this);
	}
};
