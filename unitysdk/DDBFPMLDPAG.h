#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELENHPEGALH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DDBFPMLDPAG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A54EB00)
#define DDBFPMLDPAG_FFEKIKLHOJD_OFFSET UNITYSDK_OFFSET(0x1A54E9F0)
#define DDBFPMLDPAG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A54EBF0)
#define DDBFPMLDPAG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A54EC00)
#define DDBFPMLDPAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A54E9E0)

inline static constexpr unsigned int DDBFPMLDPAG_TypeDefinitionIndex = 11562;

class DDBFPMLDPAG : public ::System::Object
{
public:
	::ELENHPEGALH HBDPAIKANDB; // 0x10
	::System::String* KMJJGMHCKBN; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::ELENHPEGALH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ELENHPEGALH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DDBFPMLDPAG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FFEKIKLHOJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBFPMLDPAG_FFEKIKLHOJD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBFPMLDPAG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDBFPMLDPAG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBFPMLDPAG_LJANCIBECFG_OFFSET))(this);
	}
};
