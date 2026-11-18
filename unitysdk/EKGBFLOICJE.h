#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLNMAOLKGLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EKGBFLOICJE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157B3140)
#define EKGBFLOICJE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157B2FF0)
#define EKGBFLOICJE_HEDHHPDOPOF_OFFSET UNITYSDK_OFFSET(0x157B2EA0)
#define EKGBFLOICJE_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x157B3000)
#define EKGBFLOICJE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157B2FE0)
#define EKGBFLOICJE_NEOPHKKEIJP_OFFSET UNITYSDK_OFFSET(0x157B3230)
#define EKGBFLOICJE__CTOR_OFFSET UNITYSDK_OFFSET(0x157B2E90)

inline static constexpr unsigned int EKGBFLOICJE_TypeDefinitionIndex = 16791;

class EKGBFLOICJE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HLNMAOLKGLM HBDPAIKANDB; // 0x18
	::System::String* ACBDJCNFLOB; // 0x28
	::System::Int32 BIMEFBCFOOF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 MFAAMEMILEM; // 0x38

	::System::Void _ctor(::HLNMAOLKGLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLNMAOLKGLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EKGBFLOICJE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HEDHHPDOPOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGBFLOICJE_HEDHHPDOPOF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGBFLOICJE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKGBFLOICJE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGBFLOICJE_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGBFLOICJE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NEOPHKKEIJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGBFLOICJE_NEOPHKKEIJP_OFFSET))(this);
	}
};
