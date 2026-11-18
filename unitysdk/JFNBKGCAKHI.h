#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOCOPPDJNJH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JFNBKGCAKHI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1935A980)
#define JFNBKGCAKHI_EENLNNFKBOP_OFFSET UNITYSDK_OFFSET(0x1935AA80)
#define JFNBKGCAKHI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1935AA70)
#define JFNBKGCAKHI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1935AB90)
#define JFNBKGCAKHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1935A970)

inline static constexpr unsigned int JFNBKGCAKHI_TypeDefinitionIndex = 9230;

class JFNBKGCAKHI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* KNEDJPPOKOP; // 0x18
	::IOCOPPDJNJH HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::IOCOPPDJNJH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IOCOPPDJNJH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JFNBKGCAKHI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBKGCAKHI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFNBKGCAKHI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EENLNNFKBOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBKGCAKHI_EENLNNFKBOP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBKGCAKHI_LJANCIBECFG_OFFSET))(this);
	}
};
