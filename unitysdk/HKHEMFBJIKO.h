#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCMMOHEMLHD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HKHEMFBJIKO_BDGCAOBNDHJ_OFFSET UNITYSDK_OFFSET(0x17477350)
#define HKHEMFBJIKO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x174776B0)
#define HKHEMFBJIKO_EJOPDFPAHNA_OFFSET UNITYSDK_OFFSET(0x17477490)
#define HKHEMFBJIKO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17477340)
#define HKHEMFBJIKO_LAFDAPPOBGL_OFFSET UNITYSDK_OFFSET(0x174777A0)
#define HKHEMFBJIKO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17477330)
#define HKHEMFBJIKO_PMJHGHDJEAJ_OFFSET UNITYSDK_OFFSET(0x174775A0)
#define HKHEMFBJIKO__CTOR_OFFSET UNITYSDK_OFFSET(0x17477320)

inline static constexpr unsigned int HKHEMFBJIKO_TypeDefinitionIndex = 12043;

class HKHEMFBJIKO : public ::System::Object
{
public:
	::System::String* AHLIFMJDEON; // 0x10
	::System::String* CFAGGNALAAL; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::HCMMOHEMLHD HBDPAIKANDB; // 0x28
	::System::Int32 MJBBLOAPCGB; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 BJJLIIONAAO; // 0x40

	::System::Void _ctor(::HCMMOHEMLHD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCMMOHEMLHD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HKHEMFBJIKO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEMFBJIKO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKHEMFBJIKO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BDGCAOBNDHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEMFBJIKO_BDGCAOBNDHJ_OFFSET))(this);
	}

	::System::String* EJOPDFPAHNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEMFBJIKO_EJOPDFPAHNA_OFFSET))(this);
	}

	::System::String* PMJHGHDJEAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEMFBJIKO_PMJHGHDJEAJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEMFBJIKO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LAFDAPPOBGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHEMFBJIKO_LAFDAPPOBGL_OFFSET))(this);
	}
};
