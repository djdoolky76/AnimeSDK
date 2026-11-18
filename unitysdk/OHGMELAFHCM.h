#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDNMDBKPDOE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OHGMELAFHCM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C0A2CD0)
#define OHGMELAFHCM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C0A2CC0)
#define OHGMELAFHCM_ILILIJELLDC_OFFSET UNITYSDK_OFFSET(0x1C0A2DC0)
#define OHGMELAFHCM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C0A2CB0)
#define OHGMELAFHCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A2CA0)

inline static constexpr unsigned int OHGMELAFHCM_TypeDefinitionIndex = 9914;

class OHGMELAFHCM : public ::System::Object
{
public:
	::JDNMDBKPDOE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* EADLJGNHHFN; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::JDNMDBKPDOE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JDNMDBKPDOE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OHGMELAFHCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGMELAFHCM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHGMELAFHCM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGMELAFHCM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* ILILIJELLDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGMELAFHCM_ILILIJELLDC_OFFSET))(this);
	}
};
