#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define IFMDDCPMGKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8F8BA0)
#define IFMDDCPMGKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x8F8B90)
#define IFMDDCPMGKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8F8C80)
#define IFMDDCPMGKC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8F8D00)
#define IFMDDCPMGKC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8F8C90)
#define IFMDDCPMGKC__CTOR_OFFSET UNITYSDK_OFFSET(0x358800)

inline static constexpr unsigned int IFMDDCPMGKC_TypeDefinitionIndex = 94204;

struct alignas(4) IFMDDCPMGKC
{
	::System::Single MLEEKAMODAB; // 0x10

	::System::Void _ctor(::System::Single PFDEICFIHDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFMDDCPMGKC__CTOR_OFFSET))(this, PFDEICFIHDC);
	}

	/*
	::System::Boolean Equals(::IFMDDCPMGKC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::IFMDDCPMGKC))((::PBYTE)hIl2Cpp + IFMDDCPMGKC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFMDDCPMGKC_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDDCPMGKC_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFMDDCPMGKC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDDCPMGKC_HLPHPBAODIF_OFFSET))(this);
	}
};
