#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPDKBBGGFHP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CEIIPCLKOGB_CHGMFEJOFOF_OFFSET UNITYSDK_OFFSET(0x17A84F60)
#define CEIIPCLKOGB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A84E70)
#define CEIIPCLKOGB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A84E60)
#define CEIIPCLKOGB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A84D10)
#define CEIIPCLKOGB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A84D20)
#define CEIIPCLKOGB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A84D00)

inline static constexpr unsigned int CEIIPCLKOGB_TypeDefinitionIndex = 16026;

class CEIIPCLKOGB : public ::System::Object
{
public:
	::OPDKBBGGFHP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 BNGBCBNPCPG; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::OPDKBBGGFHP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OPDKBBGGFHP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CEIIPCLKOGB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIIPCLKOGB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIIPCLKOGB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEIIPCLKOGB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIIPCLKOGB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 CHGMFEJOFOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIIPCLKOGB_CHGMFEJOFOF_OFFSET))(this);
	}
};
