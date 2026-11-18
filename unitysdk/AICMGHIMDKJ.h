#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEMILFLDJFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AICMGHIMDKJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x194EA9E0)
#define AICMGHIMDKJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x194EAAD0)
#define AICMGHIMDKJ_GBPFFLDIHLD_OFFSET UNITYSDK_OFFSET(0x194EA620)
#define AICMGHIMDKJ_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x194EA760)
#define AICMGHIMDKJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x194EA610)
#define AICMGHIMDKJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x194EA8A0)
#define AICMGHIMDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x194EA600)

inline static constexpr unsigned int AICMGHIMDKJ_TypeDefinitionIndex = 13074;

class AICMGHIMDKJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KEMILFLDJFP HBDPAIKANDB; // 0x18
	::System::Int32 OMBOLPCJPMP; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 PMLIMFIBIFO; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::KEMILFLDJFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KEMILFLDJFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AICMGHIMDKJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AICMGHIMDKJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GBPFFLDIHLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AICMGHIMDKJ_GBPFFLDIHLD_OFFSET))(this);
	}

	::System::Int32 IGLFKIBEGGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AICMGHIMDKJ_IGLFKIBEGGH_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AICMGHIMDKJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICMGHIMDKJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AICMGHIMDKJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
