#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OICHLEJEENN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KIIJHLBFKOJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BDCA20)
#define KIIJHLBFKOJ_FFHMLMKHFOP_OFFSET UNITYSDK_OFFSET(0x18BDC8E0)
#define KIIJHLBFKOJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BDC8D0)
#define KIIJHLBFKOJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BDCB10)
#define KIIJHLBFKOJ_PPONEKNFGBD_OFFSET UNITYSDK_OFFSET(0x18BDC790)
#define KIIJHLBFKOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDC780)

inline static constexpr unsigned int KIIJHLBFKOJ_TypeDefinitionIndex = 13828;

class KIIJHLBFKOJ : public ::System::Object
{
public:
	::OICHLEJEENN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 CEBPOGDMAAF; // 0x2C
	::System::Int32 HILFENAHCPH; // 0x30

	::System::Void _ctor(::OICHLEJEENN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OICHLEJEENN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KIIJHLBFKOJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPONEKNFGBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIJHLBFKOJ_PPONEKNFGBD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIIJHLBFKOJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FFHMLMKHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIJHLBFKOJ_FFHMLMKHFOP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIJHLBFKOJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIJHLBFKOJ_LJANCIBECFG_OFFSET))(this);
	}
};
