#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHMCCOPJDAB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HJCDBLFBINI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C02F80)
#define HJCDBLFBINI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C03070)
#define HJCDBLFBINI_LHMLHJBGIPC_OFFSET UNITYSDK_OFFSET(0x17C02BB0)
#define HJCDBLFBINI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C02F70)
#define HJCDBLFBINI_PAJNCLDHEOO_OFFSET UNITYSDK_OFFSET(0x17C02CF0)
#define HJCDBLFBINI_PICELPLFICI_OFFSET UNITYSDK_OFFSET(0x17C02E30)
#define HJCDBLFBINI__CTOR_OFFSET UNITYSDK_OFFSET(0x17C02BA0)

inline static constexpr unsigned int HJCDBLFBINI_TypeDefinitionIndex = 15415;

class HJCDBLFBINI : public ::System::Object
{
public:
	::FHMCCOPJDAB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 GPPNCEIOPBD; // 0x28
	::System::Int32 GMKFCPLFCFE; // 0x2C
	::System::Int32 LDHFCGHCONC; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::FHMCCOPJDAB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FHMCCOPJDAB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HJCDBLFBINI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LHMLHJBGIPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCDBLFBINI_LHMLHJBGIPC_OFFSET))(this);
	}

	::System::Int32 PAJNCLDHEOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCDBLFBINI_PAJNCLDHEOO_OFFSET))(this);
	}

	::System::Int32 PICELPLFICI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCDBLFBINI_PICELPLFICI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCDBLFBINI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCDBLFBINI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJCDBLFBINI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
