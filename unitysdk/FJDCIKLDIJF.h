#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFCLMCGLMOP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FJDCIKLDIJF_AGHFCJEPDMJ_OFFSET UNITYSDK_OFFSET(0x1B106A80)
#define FJDCIKLDIJF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B106620)
#define FJDCIKLDIJF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B106390)
#define FJDCIKLDIJF_GAPFKOEALLP_OFFSET UNITYSDK_OFFSET(0x1B106830)
#define FJDCIKLDIJF_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1B1064E0)
#define FJDCIKLDIJF_HPGEDFOEOIO_OFFSET UNITYSDK_OFFSET(0x1B106970)
#define FJDCIKLDIJF_INOMCCJAEBN_OFFSET UNITYSDK_OFFSET(0x1B106710)
#define FJDCIKLDIJF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B106820)
#define FJDCIKLDIJF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B1063A0)
#define FJDCIKLDIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B106380)

inline static constexpr unsigned int FJDCIKLDIJF_TypeDefinitionIndex = 17091;

class FJDCIKLDIJF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* FMDLDEKJPFF; // 0x18
	::System::String* EDBNMCEPLON; // 0x20
	::BFCLMCGLMOP HBDPAIKANDB; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 ONPMJGJBNOA; // 0x3C
	::System::Int32 IDPJCJHMPAP; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 FNKGOMBDKHF; // 0x48

	::System::Void _ctor(::BFCLMCGLMOP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BFCLMCGLMOP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJDCIKLDIJF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* INOMCCJAEBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_INOMCCJAEBN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GAPFKOEALLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_GAPFKOEALLP_OFFSET))(this);
	}

	::System::String* HPGEDFOEOIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_HPGEDFOEOIO_OFFSET))(this);
	}

	::System::Int32 AGHFCJEPDMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDCIKLDIJF_AGHFCJEPDMJ_OFFSET))(this);
	}
};
