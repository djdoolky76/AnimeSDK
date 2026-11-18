#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLIACEPMOKB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CEFJCKEOAAA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A84C00)
#define CEFJCKEOAAA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A84CF0)
#define CEFJCKEOAAA_HCCNJNBJIAO_OFFSET UNITYSDK_OFFSET(0x17A84AF0)
#define CEFJCKEOAAA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A84AE0)
#define CEFJCKEOAAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A84AD0)

inline static constexpr unsigned int CEFJCKEOAAA_TypeDefinitionIndex = 15028;

class CEFJCKEOAAA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KLIACEPMOKB HBDPAIKANDB; // 0x18
	::System::String* DOMBCNEBKLN; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::KLIACEPMOKB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KLIACEPMOKB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CEFJCKEOAAA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFJCKEOAAA_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HCCNJNBJIAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFJCKEOAAA_HCCNJNBJIAO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFJCKEOAAA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEFJCKEOAAA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
