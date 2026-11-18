#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OMOJFLMBLOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A4E00)
#define OMOJFLMBLOC__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int OMOJFLMBLOC_TypeDefinitionIndex = 59005;

struct alignas(4) OMOJFLMBLOC
{
	::System::Int32 HKHHHJHCGKL; // 0x10

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMOJFLMBLOC__CTOR_OFFSET))(this, HKHHHJHCGKL);
	}

	/*
	::System::Boolean Equals(::OMOJFLMBLOC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMOJFLMBLOC))((::PBYTE)hIl2Cpp + OMOJFLMBLOC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
