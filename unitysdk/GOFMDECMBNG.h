#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/KBKLCGKKIPI.h"

namespace System { class String; }

#define GOFMDECMBNG_CGJEHFNPKBM_1_OFFSET UNITYSDK_OFFSET(0x1F356060)
#define GOFMDECMBNG_CGJEHFNPKBM_OFFSET UNITYSDK_OFFSET(0x1F355ED0)
#define GOFMDECMBNG_CLLIALEDACK_1_OFFSET UNITYSDK_OFFSET(0x1F355FD0)
#define GOFMDECMBNG_CLLIALEDACK_OFFSET UNITYSDK_OFFSET(0x1F355D00)
#define GOFMDECMBNG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x968940)
#define GOFMDECMBNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x968930)
#define GOFMDECMBNG__CTOR_OFFSET UNITYSDK_OFFSET(0x759E10)

inline static constexpr unsigned int GOFMDECMBNG_TypeDefinitionIndex = 28911;

struct alignas(4) GOFMDECMBNG
{
	::System::Single HAAEBCOBKFF; // 0x10
	::System::Single BFMMEICFNCD; // 0x14
	::System::Single GNHOCNHLCCA; // 0x18
	::System::Single ALPANKAJAGK; // 0x1C

	::System::Void _ctor(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD, ::System::Single GNHOCNHLCCA, ::System::Single ALPANKAJAGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GOFMDECMBNG__CTOR_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA, ALPANKAJAGK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFMDECMBNG_TOSTRING_OFFSET))(this);
	}

	static ::System::Boolean CLLIALEDACK(::KBKLCGKKIPI BAHAJDKBKNK, ::System::Single IKIPLKPEBFL, ::System::Single BBHDLKFFEJH, ::KBKLCGKKIPI EKEKDCOJKLD, ::System::Single NKLODNEHFPG, ::System::Single CKCDIHFNGHA)
	{
		return ((::System::Boolean(*)(::KBKLCGKKIPI, ::System::Single, ::System::Single, ::KBKLCGKKIPI, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GOFMDECMBNG_CLLIALEDACK_OFFSET))(BAHAJDKBKNK, IKIPLKPEBFL, BBHDLKFFEJH, EKEKDCOJKLD, NKLODNEHFPG, CKCDIHFNGHA);
	}

	/*
	static ::GOFMDECMBNG CGJEHFNPKBM(::KBKLCGKKIPI MPLDDNMCECG, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH)
	{
		return ((::GOFMDECMBNG(*)(::KBKLCGKKIPI, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GOFMDECMBNG_CGJEHFNPKBM_OFFSET))(MPLDDNMCECG, JBGLCAFPGHK, KKAMDFNMMJH);
	}
	*/

	/*
	static ::GOFMDECMBNG CGJEHFNPKBM_1(::JGLIFHIAIEH MPLDDNMCECG, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH)
	{
		return ((::GOFMDECMBNG(*)(::JGLIFHIAIEH, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GOFMDECMBNG_CGJEHFNPKBM_1_OFFSET))(MPLDDNMCECG, JBGLCAFPGHK, KKAMDFNMMJH);
	}
	*/

	/*
	static ::System::Boolean CLLIALEDACK_1(::GOFMDECMBNG HBKDEOFOAPB, ::GOFMDECMBNG NMEEEHMFGOH)
	{
		return ((::System::Boolean(*)(::GOFMDECMBNG, ::GOFMDECMBNG))((::PBYTE)hIl2Cpp + GOFMDECMBNG_CLLIALEDACK_1_OFFSET))(HBKDEOFOAPB, NMEEEHMFGOH);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFMDECMBNG_DPIHOJBBGLA_OFFSET))(this);
	}
};
