#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NDBEJLBPCED_OIAAJDEGMMO_OFFSET UNITYSDK_OFFSET(0x6E9820)

inline static constexpr unsigned int NDBEJLBPCED_TypeDefinitionIndex = 50546;

struct alignas(4) NDBEJLBPCED
{
	static ::NDBEJLBPCED* StaticGet_BPKHJMHNPJK()
	{
		return (::NDBEJLBPCED*)Il2CppClass::FromTypeDefinitionIndex(NDBEJLBPCED_TypeDefinitionIndex)->GetStaticField(0x143A0);
	}
	::System::UInt32 NLFCMCFEFLI; // 0x10
	::System::UInt32 FEFDLKDGCJD; // 0x14
	::System::UInt32 IMMMODJABOJ; // 0x18

	::System::Boolean OIAAJDEGMMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBEJLBPCED_OIAAJDEGMMO_OFFSET))(this);
	}
};
