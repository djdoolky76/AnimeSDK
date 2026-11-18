#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLFJHDFPPOJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EGNINPECEJA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B0FB530)
#define EGNINPECEJA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B0FB520)
#define EGNINPECEJA_JBCOCAJJMHI_OFFSET UNITYSDK_OFFSET(0x1B0FB620)
#define EGNINPECEJA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B0FB840)
#define EGNINPECEJA_PGHKGNNICIN_OFFSET UNITYSDK_OFFSET(0x1B0FB730)
#define EGNINPECEJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FB510)

inline static constexpr unsigned int EGNINPECEJA_TypeDefinitionIndex = 12030;

class EGNINPECEJA : public ::System::Object
{
public:
	::System::String* GHPNJKABCBJ; // 0x10
	::System::String* JJFCBFCMJAB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::KLFJHDFPPOJ HBDPAIKANDB; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::KLFJHDFPPOJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KLFJHDFPPOJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EGNINPECEJA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGNINPECEJA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNINPECEJA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* JBCOCAJJMHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNINPECEJA_JBCOCAJJMHI_OFFSET))(this);
	}

	::System::String* PGHKGNNICIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNINPECEJA_PGHKGNNICIN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNINPECEJA_LJANCIBECFG_OFFSET))(this);
	}
};
