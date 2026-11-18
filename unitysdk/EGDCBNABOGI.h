#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDJHMPKOJGC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define EGDCBNABOGI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A59B9B0)
#define EGDCBNABOGI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A59B9A0)
#define EGDCBNABOGI_GGJKAOHOFLA_OFFSET UNITYSDK_OFFSET(0x1A59B860)
#define EGDCBNABOGI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A59BAA0)
#define EGDCBNABOGI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A59B720)
#define EGDCBNABOGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A59B710)

inline static constexpr unsigned int EGDCBNABOGI_TypeDefinitionIndex = 12083;

class EGDCBNABOGI : public ::System::Object
{
public:
	::NDJHMPKOJGC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 FGHAAHJABEO; // 0x30

	::System::Void _ctor(::NDJHMPKOJGC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDJHMPKOJGC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EGDCBNABOGI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDCBNABOGI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 GGJKAOHOFLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDCBNABOGI_GGJKAOHOFLA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGDCBNABOGI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDCBNABOGI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDCBNABOGI_LJANCIBECFG_OFFSET))(this);
	}
};
