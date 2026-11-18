#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMOAMPECMOE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PDKBAPBCFBJ_ANHFFDONAAE_OFFSET UNITYSDK_OFFSET(0x1C1A6510)
#define PDKBAPBCFBJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C1A6410)
#define PDKBAPBCFBJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C1A6400)
#define PDKBAPBCFBJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C1A6500)
#define PDKBAPBCFBJ_PICOJEPEHGH_OFFSET UNITYSDK_OFFSET(0x1C1A6620)
#define PDKBAPBCFBJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C1A6730)
#define PDKBAPBCFBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A63F0)

inline static constexpr unsigned int PDKBAPBCFBJ_TypeDefinitionIndex = 10859;

class PDKBAPBCFBJ : public ::System::Object
{
public:
	::IMOAMPECMOE HBDPAIKANDB; // 0x10
	::System::String* CNKJPPDBADI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* FJHOOKELLHH; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::IMOAMPECMOE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IMOAMPECMOE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PDKBAPBCFBJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDKBAPBCFBJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBAPBCFBJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBAPBCFBJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ANHFFDONAAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBAPBCFBJ_ANHFFDONAAE_OFFSET))(this);
	}

	::System::String* PICOJEPEHGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBAPBCFBJ_PICOJEPEHGH_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBAPBCFBJ_PPIFNHNGCGO_OFFSET))(this);
	}
};
