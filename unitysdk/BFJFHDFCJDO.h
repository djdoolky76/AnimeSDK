#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPEMFJPDHGD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BFJFHDFCJDO_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1ADB2090)
#define BFJFHDFCJDO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADB1D00)
#define BFJFHDFCJDO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADB2080)
#define BFJFHDFCJDO_HOEBGOBIKNC_OFFSET UNITYSDK_OFFSET(0x1ADB21D0)
#define BFJFHDFCJDO_KAJDMBFLPDD_OFFSET UNITYSDK_OFFSET(0x1ADB1DF0)
#define BFJFHDFCJDO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADB1F30)
#define BFJFHDFCJDO_MEFLDBOCAIO_OFFSET UNITYSDK_OFFSET(0x1ADB1BC0)
#define BFJFHDFCJDO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADB1F40)
#define BFJFHDFCJDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB1BB0)

inline static constexpr unsigned int BFJFHDFCJDO_TypeDefinitionIndex = 16673;

class BFJFHDFCJDO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OPEMFJPDHGD HBDPAIKANDB; // 0x18
	::System::Int32 GBGGAJOOKBJ; // 0x28
	::System::Int32 OHABFHAHJMF; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 AICFILHLIPF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 FLKIPIBHJED; // 0x3C

	::System::Void _ctor(::OPEMFJPDHGD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OPEMFJPDHGD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BFJFHDFCJDO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MEFLDBOCAIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_MEFLDBOCAIO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KAJDMBFLPDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_KAJDMBFLPDD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_BNKPNGANFDN_OFFSET))(this);
	}

	::System::Int32 HOEBGOBIKNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJFHDFCJDO_HOEBGOBIKNC_OFFSET))(this);
	}
};
