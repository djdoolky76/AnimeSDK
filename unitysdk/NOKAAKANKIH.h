#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMBKLFKHNDK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NOKAAKANKIH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFEF770)
#define NOKAAKANKIH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFEF9B0)
#define NOKAAKANKIH_GHPPFKIONJD_OFFSET UNITYSDK_OFFSET(0x1CFEF860)
#define NOKAAKANKIH_HPFFFMHAPPH_OFFSET UNITYSDK_OFFSET(0x1CFEFB00)
#define NOKAAKANKIH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFEF9A0)
#define NOKAAKANKIH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1CFEF9C0)
#define NOKAAKANKIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEF760)

inline static constexpr unsigned int NOKAAKANKIH_TypeDefinitionIndex = 9198;

class NOKAAKANKIH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NMBKLFKHNDK HBDPAIKANDB; // 0x18
	::System::String* GPPENEAMKCJ; // 0x28
	::System::String* OAEGGICAFFK; // 0x30
	::System::String* JKHJDEHALCL; // 0x38
	::System::String* AOMCIOGKFMO; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 BAPOFMLANLC; // 0x4C
	::System::Int32 PCMOJLNOPPM; // 0x50

	::System::Void _ctor(::NMBKLFKHNDK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NMBKLFKHNDK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOKAAKANKIH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKAAKANKIH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GHPPFKIONJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKAAKANKIH_GHPPFKIONJD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKAAKANKIH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOKAAKANKIH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKAAKANKIH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* HPFFFMHAPPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKAAKANKIH_HPFFFMHAPPH_OFFSET))(this);
	}
};
