#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFJILIKEIKB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FIDNHNJOGNA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A75360)
#define FIDNHNJOGNA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A75100)
#define FIDNHNJOGNA_HGCLMLEIGLC_OFFSET UNITYSDK_OFFSET(0x15A75450)
#define FIDNHNJOGNA_HNFIJFPNEAP_OFFSET UNITYSDK_OFFSET(0x15A75570)
#define FIDNHNJOGNA_JOEFKNAIDOF_OFFSET UNITYSDK_OFFSET(0x15A75680)
#define FIDNHNJOGNA_LACJOALKGMI_OFFSET UNITYSDK_OFFSET(0x15A75220)
#define FIDNHNJOGNA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A75560)
#define FIDNHNJOGNA_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x15A75110)
#define FIDNHNJOGNA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15A74FC0)
#define FIDNHNJOGNA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A74FB0)

inline static constexpr unsigned int FIDNHNJOGNA_TypeDefinitionIndex = 13637;

class FIDNHNJOGNA : public ::System::Object
{
public:
	::System::String* NOGGGDOGCDH; // 0x10
	::BFJILIKEIKB HBDPAIKANDB; // 0x18
	::System::String* EENLAMAIAJI; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* PBJLNCHLBOH; // 0x38
	::System::Int32 NKHEPLMMJHH; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 AMGGLJEDCHO; // 0x4C

	::System::Void _ctor(::BFJILIKEIKB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BFJILIKEIKB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FIDNHNJOGNA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 LACJOALKGMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_LACJOALKGMI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HGCLMLEIGLC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_HGCLMLEIGLC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HNFIJFPNEAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_HNFIJFPNEAP_OFFSET))(this);
	}

	::System::Int32 JOEFKNAIDOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDNHNJOGNA_JOEFKNAIDOF_OFFSET))(this);
	}
};
