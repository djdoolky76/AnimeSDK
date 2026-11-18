#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIPBLDAAJBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define PLNOJKEBDGK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C1AFE40)
#define PLNOJKEBDGK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C1B0200)
#define PLNOJKEBDGK_INCIICDJMGJ_OFFSET UNITYSDK_OFFSET(0x1C1AFF40)
#define PLNOJKEBDGK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C1AFF30)
#define PLNOJKEBDGK_MNIIFNAONLJ_OFFSET UNITYSDK_OFFSET(0x1C1B00A0)
#define PLNOJKEBDGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AFE30)

inline static constexpr unsigned int PLNOJKEBDGK_TypeDefinitionIndex = 16772;

class PLNOJKEBDGK : public ::System::Object
{
public:
	::PIPBLDAAJBD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Single KJCGKKLAAKM; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Single AKHBOPNJJDP; // 0x30

	::System::Void _ctor(::PIPBLDAAJBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PIPBLDAAJBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PLNOJKEBDGK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNOJKEBDGK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNOJKEBDGK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Single INCIICDJMGJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNOJKEBDGK_INCIICDJMGJ_OFFSET))(this);
	}

	::System::Single MNIIFNAONLJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNOJKEBDGK_MNIIFNAONLJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLNOJKEBDGK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
