#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKIKENNLLLE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JCAMPFLDNOE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19546400)
#define JCAMPFLDNOE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19546190)
#define JCAMPFLDNOE_INKFFFABICA_OFFSET UNITYSDK_OFFSET(0x195462C0)
#define JCAMPFLDNOE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195462B0)
#define JCAMPFLDNOE_OAEINDCMELP_OFFSET UNITYSDK_OFFSET(0x195461A0)
#define JCAMPFLDNOE__CTOR_OFFSET UNITYSDK_OFFSET(0x19546180)

inline static constexpr unsigned int JCAMPFLDNOE_TypeDefinitionIndex = 11653;

class JCAMPFLDNOE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IJDMDNHHECL; // 0x18
	::MKIKENNLLLE HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 DIIPGDPALDL; // 0x34

	::System::Void _ctor(::MKIKENNLLLE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MKIKENNLLLE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JCAMPFLDNOE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCAMPFLDNOE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* OAEINDCMELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAMPFLDNOE_OAEINDCMELP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAMPFLDNOE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 INKFFFABICA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAMPFLDNOE_INKFFFABICA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAMPFLDNOE_COFGIJJOFLP_OFFSET))(this);
	}
};
