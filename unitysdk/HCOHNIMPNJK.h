#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDAPIMIAHFF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HCOHNIMPNJK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BAB980)
#define HCOHNIMPNJK_DECINHCJBGF_OFFSET UNITYSDK_OFFSET(0x18BAB860)
#define HCOHNIMPNJK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BAB970)
#define HCOHNIMPNJK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BAB850)
#define HCOHNIMPNJK_MNIPADHHFDP_OFFSET UNITYSDK_OFFSET(0x18BABA70)
#define HCOHNIMPNJK__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAB840)

inline static constexpr unsigned int HCOHNIMPNJK_TypeDefinitionIndex = 10967;

class HCOHNIMPNJK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HDAPIMIAHFF HBDPAIKANDB; // 0x18
	::System::String* KODOBKEHFPE; // 0x28
	::System::String* IGHJNOOIKJI; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::HDAPIMIAHFF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HDAPIMIAHFF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HCOHNIMPNJK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHNIMPNJK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DECINHCJBGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHNIMPNJK_DECINHCJBGF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCOHNIMPNJK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHNIMPNJK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MNIPADHHFDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOHNIMPNJK_MNIPADHHFDP_OFFSET))(this);
	}
};
