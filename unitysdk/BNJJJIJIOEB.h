#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKPCOHDOBMC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BNJJJIJIOEB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15785B50)
#define BNJJJIJIOEB_EJKOOOPPILE_OFFSET UNITYSDK_OFFSET(0x15785C40)
#define BNJJJIJIOEB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15785D50)
#define BNJJJIJIOEB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15785B40)
#define BNJJJIJIOEB_NENKPEGHOPF_OFFSET UNITYSDK_OFFSET(0x15785A30)
#define BNJJJIJIOEB__CTOR_OFFSET UNITYSDK_OFFSET(0x15785A20)

inline static constexpr unsigned int BNJJJIJIOEB_TypeDefinitionIndex = 10621;

class BNJJJIJIOEB : public ::System::Object
{
public:
	::MKPCOHDOBMC HBDPAIKANDB; // 0x10
	::System::String* CELAAOCAMOJ; // 0x20
	::System::String* ALCKNLEFIOE; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCHMNNKDADI; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::MKPCOHDOBMC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MKPCOHDOBMC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BNJJJIJIOEB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NENKPEGHOPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJJJIJIOEB_NENKPEGHOPF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJJJIJIOEB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJJJIJIOEB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* EJKOOOPPILE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJJJIJIOEB_EJKOOOPPILE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNJJJIJIOEB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
