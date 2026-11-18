#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMKKOEINFKF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EKCJFLKBCFK_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x1A1A1FC0)
#define EKCJFLKBCFK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A1A20F0)
#define EKCJFLKBCFK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A1A20D0)
#define EKCJFLKBCFK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A1A20E0)
#define EKCJFLKBCFK_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x1A1A1EB0)
#define EKCJFLKBCFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A1EA0)

inline static constexpr unsigned int EKCJFLKBCFK_TypeDefinitionIndex = 15921;

class EKCJFLKBCFK : public ::System::Object
{
public:
	::System::String* CDEKJIPBECO; // 0x10
	::DMKKOEINFKF HBDPAIKANDB; // 0x18
	::System::String* BADBBCLNFDO; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::DMKKOEINFKF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DMKKOEINFKF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EKCJFLKBCFK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCJFLKBCFK_PBFKHLEHIGG_OFFSET))(this);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCJFLKBCFK_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKCJFLKBCFK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCJFLKBCFK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCJFLKBCFK_COFGIJJOFLP_OFFSET))(this);
	}
};
