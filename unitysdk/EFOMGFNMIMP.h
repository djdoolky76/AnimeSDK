#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EFOMGFNMIMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8F87F0)
#define EFOMGFNMIMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x8F87A0)
#define EFOMGFNMIMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8F8800)
#define EFOMGFNMIMP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8F8850)
#define EFOMGFNMIMP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8F88B0)
#define EFOMGFNMIMP__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int EFOMGFNMIMP_TypeDefinitionIndex = 94081;

struct alignas(4) EFOMGFNMIMP
{
	::System::Int32 IECAKACODNB; // 0x10

	::System::Void _ctor(::System::Int32 PIJIFFFPPEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFOMGFNMIMP__CTOR_OFFSET))(this, PIJIFFFPPEE);
	}

	/*
	::System::Boolean Equals(::EFOMGFNMIMP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EFOMGFNMIMP))((::PBYTE)hIl2Cpp + EFOMGFNMIMP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFOMGFNMIMP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOMGFNMIMP_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOMGFNMIMP_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFOMGFNMIMP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
