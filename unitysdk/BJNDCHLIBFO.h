#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPDGHLJKHJG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BJNDCHLIBFO_CLNLNKACNDG_OFFSET UNITYSDK_OFFSET(0x17EF4F50)
#define BJNDCHLIBFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EF51A0)
#define BJNDCHLIBFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EF5290)
#define BJNDCHLIBFO_FPHJKODMMMN_OFFSET UNITYSDK_OFFSET(0x17EF5090)
#define BJNDCHLIBFO_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x17EF4E30)
#define BJNDCHLIBFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EF4F40)
#define BJNDCHLIBFO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17EF4CF0)
#define BJNDCHLIBFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF4CE0)

inline static constexpr unsigned int BJNDCHLIBFO_TypeDefinitionIndex = 16439;

class BJNDCHLIBFO : public ::System::Object
{
public:
	::System::String* JBFMBNFEEAO; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* CILEDOPGLKC; // 0x20
	::MPDGHLJKHJG HBDPAIKANDB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 HFGDGOKLGMH; // 0x40

	::System::Void _ctor(::MPDGHLJKHJG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MPDGHLJKHJG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BJNDCHLIBFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNDCHLIBFO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNDCHLIBFO_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNDCHLIBFO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CLNLNKACNDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNDCHLIBFO_CLNLNKACNDG_OFFSET))(this);
	}

	::System::String* FPHJKODMMMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNDCHLIBFO_FPHJKODMMMN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNDCHLIBFO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BJNDCHLIBFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
