#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFKBHIEGJCP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LCIIAGGMCOC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1612D710)
#define LCIIAGGMCOC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1612D800)
#define LCIIAGGMCOC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1612D480)
#define LCIIAGGMCOC_OOAMMDCDIGF_OFFSET UNITYSDK_OFFSET(0x1612D490)
#define LCIIAGGMCOC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1612D5D0)
#define LCIIAGGMCOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1612D470)

inline static constexpr unsigned int LCIIAGGMCOC_TypeDefinitionIndex = 17053;

class LCIIAGGMCOC : public ::System::Object
{
public:
	::EFKBHIEGJCP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 KAKLAAPGOKN; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30

	::System::Void _ctor(::EFKBHIEGJCP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFKBHIEGJCP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LCIIAGGMCOC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIIAGGMCOC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OOAMMDCDIGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIIAGGMCOC_OOAMMDCDIGF_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIIAGGMCOC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIIAGGMCOC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCIIAGGMCOC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
