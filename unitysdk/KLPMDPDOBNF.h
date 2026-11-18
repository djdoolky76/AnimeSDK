#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIFEGFFDEHM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KLPMDPDOBNF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DEAD90)
#define KLPMDPDOBNF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DEAF90)
#define KLPMDPDOBNF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DEAFA0)
#define KLPMDPDOBNF_NKKCIOOCACB_OFFSET UNITYSDK_OFFSET(0x18DEAE80)
#define KLPMDPDOBNF__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEAD80)

inline static constexpr unsigned int KLPMDPDOBNF_TypeDefinitionIndex = 12889;

class KLPMDPDOBNF : public ::System::Object
{
public:
	::CIFEGFFDEHM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* HLAKLJIAHBD; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::CIFEGFFDEHM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CIFEGFFDEHM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KLPMDPDOBNF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPMDPDOBNF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NKKCIOOCACB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPMDPDOBNF_NKKCIOOCACB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLPMDPDOBNF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPMDPDOBNF_LJANCIBECFG_OFFSET))(this);
	}
};
