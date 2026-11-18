#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHPHONLBICA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GGJAHDPENGO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4D4100)
#define GGJAHDPENGO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4D3FB0)
#define GGJAHDPENGO_GHNGINBAOGK_OFFSET UNITYSDK_OFFSET(0x1B4D3E90)
#define GGJAHDPENGO_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1B4D3B00)
#define GGJAHDPENGO_JFLNBJIALHD_OFFSET UNITYSDK_OFFSET(0x1B4D3FC0)
#define GGJAHDPENGO_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1B4D3C10)
#define GGJAHDPENGO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4D3FA0)
#define GGJAHDPENGO_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1B4D41F0)
#define GGJAHDPENGO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B4D3D50)
#define GGJAHDPENGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D3AF0)

inline static constexpr unsigned int GGJAHDPENGO_TypeDefinitionIndex = 14292;

class GGJAHDPENGO : public ::System::Object
{
public:
	::System::String* INMBJNCHHFO; // 0x10
	::LHPHONLBICA HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* GPNJCCHKLIP; // 0x30
	::System::Int32 KENMOOHJIHP; // 0x38
	::System::Int32 MFAAMEMILEM; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Int32 JABJBJHKDMH; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::LHPHONLBICA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHPHONLBICA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GGJAHDPENGO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* GHNGINBAOGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_GHNGINBAOGK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJAHDPENGO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JFLNBJIALHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_JFLNBJIALHD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJAHDPENGO_LNOBBAIGKJL_OFFSET))(this);
	}
};
