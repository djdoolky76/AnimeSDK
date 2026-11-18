#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MBDDPHPODAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x76D010)
#define MBDDPHPODAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x76CF90)
#define MBDDPHPODAN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x76D020)

inline static constexpr unsigned int MBDDPHPODAN_TypeDefinitionIndex = 69243;

struct alignas(4) MBDDPHPODAN
{
	::System::Int32 JBMMGBOMDCO; // 0x10
	::System::Int32 BFJKMPCCBDO; // 0x14
	::System::Int32 FHEMFMDHNAG; // 0x18
	::System::Int32 NHGIEIPFAFC; // 0x1C

	/*
	::System::Boolean Equals(::MBDDPHPODAN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MBDDPHPODAN))((::PBYTE)hIl2Cpp + MBDDPHPODAN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBDDPHPODAN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBDDPHPODAN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
