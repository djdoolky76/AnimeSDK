#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AALCDJDELNG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HLDCHGFLLFC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152DC8B0)
#define HLDCHGFLLFC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152DCAC0)
#define HLDCHGFLLFC_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x152DC9A0)
#define HLDCHGFLLFC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152DCAB0)
#define HLDCHGFLLFC__CTOR_OFFSET UNITYSDK_OFFSET(0x152DC8A0)

inline static constexpr unsigned int HLDCHGFLLFC_TypeDefinitionIndex = 12278;

class HLDCHGFLLFC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::AALCDJDELNG HBDPAIKANDB; // 0x18
	::System::String* HKKJIFGKKEH; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::AALCDJDELNG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AALCDJDELNG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HLDCHGFLLFC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDCHGFLLFC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDCHGFLLFC_IFOHJNHGHBK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDCHGFLLFC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLDCHGFLLFC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
