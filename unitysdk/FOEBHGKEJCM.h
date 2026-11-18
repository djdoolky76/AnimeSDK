#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOEBHGKEJCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8CF580)
#define FOEBHGKEJCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x8CF530)
#define FOEBHGKEJCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CF590)
#define FOEBHGKEJCM_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8CF5E0)
#define FOEBHGKEJCM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8CF640)
#define FOEBHGKEJCM__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int FOEBHGKEJCM_TypeDefinitionIndex = 93496;

struct alignas(4) FOEBHGKEJCM
{
	::System::Int32 OICKCBPMPIG; // 0x10

	::System::Void _ctor(::System::Int32 ANNOJCFNHIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOEBHGKEJCM__CTOR_OFFSET))(this, ANNOJCFNHIO);
	}

	/*
	::System::Boolean Equals(::FOEBHGKEJCM LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FOEBHGKEJCM))((::PBYTE)hIl2Cpp + FOEBHGKEJCM_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOEBHGKEJCM_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBHGKEJCM_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBHGKEJCM_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOEBHGKEJCM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
