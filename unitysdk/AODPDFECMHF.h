#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLLOHEOGLLG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AODPDFECMHF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADABA70)
#define AODPDFECMHF_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1ADAB940)
#define AODPDFECMHF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADABA60)
#define AODPDFECMHF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADABA50)
#define AODPDFECMHF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADABB60)
#define AODPDFECMHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAB930)

inline static constexpr unsigned int AODPDFECMHF_TypeDefinitionIndex = 10525;

class AODPDFECMHF : public ::System::Object
{
public:
	::PLLOHEOGLLG HBDPAIKANDB; // 0x10
	::System::String* IENCBDEPMFJ; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::PLLOHEOGLLG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PLLOHEOGLLG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AODPDFECMHF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPDFECMHF_DECMGICKDLH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPDFECMHF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AODPDFECMHF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPDFECMHF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AODPDFECMHF_PPIFNHNGCGO_OFFSET))(this);
	}
};
