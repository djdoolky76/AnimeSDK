#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBKAFNDHBHE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PJHIFHNBFOJ_BPADCIMJKBE_OFFSET UNITYSDK_OFFSET(0x1BAC6040)
#define PJHIFHNBFOJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAC6160)
#define PJHIFHNBFOJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAC6150)
#define PJHIFHNBFOJ_IAFMEJABPMH_OFFSET UNITYSDK_OFFSET(0x1BAC5F30)
#define PJHIFHNBFOJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAC5F20)
#define PJHIFHNBFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC5F10)

inline static constexpr unsigned int PJHIFHNBFOJ_TypeDefinitionIndex = 11146;

class PJHIFHNBFOJ : public ::System::Object
{
public:
	::EBKAFNDHBHE HBDPAIKANDB; // 0x10
	::System::String* ADAEKLNKBNG; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* IPFBEILPLIF; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::EBKAFNDHBHE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EBKAFNDHBHE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PJHIFHNBFOJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHIFHNBFOJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IAFMEJABPMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHIFHNBFOJ_IAFMEJABPMH_OFFSET))(this);
	}

	::System::String* BPADCIMJKBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHIFHNBFOJ_BPADCIMJKBE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJHIFHNBFOJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHIFHNBFOJ_COFGIJJOFLP_OFFSET))(this);
	}
};
