#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKMNLPJOBEK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JHMJKCAHBAE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19549CC0)
#define JHMJKCAHBAE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19549EC0)
#define JHMJKCAHBAE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19549ED0)
#define JHMJKCAHBAE_PCJNBHIFMAJ_OFFSET UNITYSDK_OFFSET(0x19549DB0)
#define JHMJKCAHBAE__CTOR_OFFSET UNITYSDK_OFFSET(0x19549CB0)

inline static constexpr unsigned int JHMJKCAHBAE_TypeDefinitionIndex = 16916;

class JHMJKCAHBAE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OKMNLPJOBEK HBDPAIKANDB; // 0x18
	::System::String* FMHEDFCELOM; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::OKMNLPJOBEK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OKMNLPJOBEK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JHMJKCAHBAE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMJKCAHBAE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* PCJNBHIFMAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMJKCAHBAE_PCJNBHIFMAJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHMJKCAHBAE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMJKCAHBAE_LJANCIBECFG_OFFSET))(this);
	}
};
