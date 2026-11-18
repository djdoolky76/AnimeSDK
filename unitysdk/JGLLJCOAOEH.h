#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBCPFDNNLBC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JGLLJCOAOEH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1935B420)
#define JGLLJCOAOEH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1935B400)
#define JGLLJCOAOEH_GEHOBGNLFEK_OFFSET UNITYSDK_OFFSET(0x1935B2C0)
#define JGLLJCOAOEH_JHHPFGMDEPA_OFFSET UNITYSDK_OFFSET(0x1935B180)
#define JGLLJCOAOEH_KKHBDKDLIBF_OFFSET UNITYSDK_OFFSET(0x1935B510)
#define JGLLJCOAOEH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1935B410)
#define JGLLJCOAOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1935B170)

inline static constexpr unsigned int JGLLJCOAOEH_TypeDefinitionIndex = 10783;

class JGLLJCOAOEH : public ::System::Object
{
public:
	::EBCPFDNNLBC HBDPAIKANDB; // 0x10
	::System::String* BOCCPGHLGJI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 EBNDHFDECMJ; // 0x30
	::System::Int32 FICANMPMOGC; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte GCHCDJCFCEG; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte ACIOBDEBDNK; // 0x3B
	::System::Int32 PJOLCAHCPKI; // 0x3C
	::System::Int32 BPMMNELACLA; // 0x40
	::System::Int32 LENMLOCDMHB; // 0x44
	::System::Int32 ECKNDGFFDPB; // 0x48
	::System::Int32 HCHIOHMOONH; // 0x4C
	::System::Int32 APMFDNELAIH; // 0x50

	::System::Void _ctor(::EBCPFDNNLBC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EBCPFDNNLBC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JGLLJCOAOEH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JHHPFGMDEPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLLJCOAOEH_JHHPFGMDEPA_OFFSET))(this);
	}

	::System::Int32 GEHOBGNLFEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLLJCOAOEH_GEHOBGNLFEK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGLLJCOAOEH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLLJCOAOEH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLLJCOAOEH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KKHBDKDLIBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLLJCOAOEH_KKHBDKDLIBF_OFFSET))(this);
	}
};
