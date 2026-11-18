#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFELOGHMKKB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JKAAKLNNBAG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16118D20)
#define JKAAKLNNBAG_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x16118F60)
#define JKAAKLNNBAG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16118F50)
#define JKAAKLNNBAG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16119070)
#define JKAAKLNNBAG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x16118E10)
#define JKAAKLNNBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x16118D10)

inline static constexpr unsigned int JKAAKLNNBAG_TypeDefinitionIndex = 11148;

class JKAAKLNNBAG : public ::System::Object
{
public:
	::DFELOGHMKKB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* DDGJJGPDFFD; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::DFELOGHMKKB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DFELOGHMKKB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JKAAKLNNBAG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAAKLNNBAG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAAKLNNBAG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKAAKLNNBAG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAAKLNNBAG_FBMIEJIGIED_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAAKLNNBAG_LJANCIBECFG_OFFSET))(this);
	}
};
