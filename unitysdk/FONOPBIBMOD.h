#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FONOPBIBMOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x775CB0)

inline static constexpr unsigned int FONOPBIBMOD_TypeDefinitionIndex = 61711;

struct alignas(4) FONOPBIBMOD
{
	::System::Int32 ABHBKFJKINO; // 0x10
	::System::Boolean HKNFPNGJAEM; // 0x14

	/*
	::System::Boolean Equals(::FONOPBIBMOD LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FONOPBIBMOD))((::PBYTE)hIl2Cpp + FONOPBIBMOD_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
