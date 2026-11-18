#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKFAIPPHKPB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MADBKIMNLKH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1733CFA0)
#define MADBKIMNLKH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1733CF90)
#define MADBKIMNLKH_LEPAFHIMGMM_OFFSET UNITYSDK_OFFSET(0x1733CE80)
#define MADBKIMNLKH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1733CE70)
#define MADBKIMNLKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1733CE60)

inline static constexpr unsigned int MADBKIMNLKH_TypeDefinitionIndex = 10035;

class MADBKIMNLKH : public ::System::Object
{
public:
	::IKFAIPPHKPB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* FCKNFNGNBIF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::IKFAIPPHKPB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IKFAIPPHKPB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MADBKIMNLKH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBKIMNLKH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LEPAFHIMGMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBKIMNLKH_LEPAFHIMGMM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MADBKIMNLKH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBKIMNLKH_COFGIJJOFLP_OFFSET))(this);
	}
};
