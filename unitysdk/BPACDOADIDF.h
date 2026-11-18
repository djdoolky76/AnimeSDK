#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJPKOOMNIDD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BPACDOADIDF_CCDBAOOFMFA_OFFSET UNITYSDK_OFFSET(0x1B994FB0)
#define BPACDOADIDF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B995350)
#define BPACDOADIDF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B995550)
#define BPACDOADIDF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1B994E70)
#define BPACDOADIDF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9950C0)
#define BPACDOADIDF_OAEOELMJIIE_OFFSET UNITYSDK_OFFSET(0x1B995440)
#define BPACDOADIDF_OGNMEDNMNHE_OFFSET UNITYSDK_OFFSET(0x1B995210)
#define BPACDOADIDF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B9950D0)
#define BPACDOADIDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B994E60)

inline static constexpr unsigned int BPACDOADIDF_TypeDefinitionIndex = 15915;

class BPACDOADIDF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* GFPFFDANFKD; // 0x18
	::LJPKOOMNIDD HBDPAIKANDB; // 0x20
	::System::String* GFPLKBDCIPE; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 POKJNGILNLB; // 0x40
	::System::Int32 JFIENNOHHDO; // 0x44

	::System::Void _ctor(::LJPKOOMNIDD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LJPKOOMNIDD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BPACDOADIDF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACDOADIDF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* CCDBAOOFMFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACDOADIDF_CCDBAOOFMFA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACDOADIDF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACDOADIDF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 OGNMEDNMNHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACDOADIDF_OGNMEDNMNHE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACDOADIDF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* OAEOELMJIIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPACDOADIDF_OAEOELMJIIE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPACDOADIDF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
