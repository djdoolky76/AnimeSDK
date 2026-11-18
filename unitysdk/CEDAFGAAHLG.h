#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMAKGKECNJP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CEDAFGAAHLG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADB9660)
#define CEDAFGAAHLG_DLCPPNGCPDP_OFFSET UNITYSDK_OFFSET(0x1ADB93D0)
#define CEDAFGAAHLG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADB9750)
#define CEDAFGAAHLG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADB9510)
#define CEDAFGAAHLG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADB9520)
#define CEDAFGAAHLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB93C0)

inline static constexpr unsigned int CEDAFGAAHLG_TypeDefinitionIndex = 15322;

class CEDAFGAAHLG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FMAKGKECNJP HBDPAIKANDB; // 0x18
	::System::Int32 DOLBKKCCCON; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30

	::System::Void _ctor(::FMAKGKECNJP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMAKGKECNJP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CEDAFGAAHLG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DLCPPNGCPDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDAFGAAHLG_DLCPPNGCPDP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDAFGAAHLG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDAFGAAHLG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDAFGAAHLG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEDAFGAAHLG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
