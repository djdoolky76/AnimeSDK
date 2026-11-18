#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOLPIDFMDKK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BGBKEDLKOGA_BIENLHEKMCD_OFFSET UNITYSDK_OFFSET(0x1ADB2460)
#define BGBKEDLKOGA_CJHFDKEPJMC_OFFSET UNITYSDK_OFFSET(0x1ADB2900)
#define BGBKEDLKOGA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADB2570)
#define BGBKEDLKOGA_FIPPPBLHIAI_OFFSET UNITYSDK_OFFSET(0x1ADB27B0)
#define BGBKEDLKOGA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADB28F0)
#define BGBKEDLKOGA_FPFCCDJEDEM_OFFSET UNITYSDK_OFFSET(0x1ADB2320)
#define BGBKEDLKOGA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADB27A0)
#define BGBKEDLKOGA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADB2660)
#define BGBKEDLKOGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB2310)

inline static constexpr unsigned int BGBKEDLKOGA_TypeDefinitionIndex = 17160;

class BGBKEDLKOGA : public ::System::Object
{
public:
	::System::String* LEFBFFIHJCE; // 0x10
	::EOLPIDFMDKK HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 AMDFKKJOMOF; // 0x34
	::System::Int32 ALNKDDJFLGK; // 0x38
	::System::Int32 NPDBGNJMOEN; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40

	::System::Void _ctor(::EOLPIDFMDKK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EOLPIDFMDKK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BGBKEDLKOGA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 FPFCCDJEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_FPFCCDJEDEM_OFFSET))(this);
	}

	::System::String* BIENLHEKMCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_BIENLHEKMCD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FIPPPBLHIAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_FIPPPBLHIAI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CJHFDKEPJMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGBKEDLKOGA_CJHFDKEPJMC_OFFSET))(this);
	}
};
