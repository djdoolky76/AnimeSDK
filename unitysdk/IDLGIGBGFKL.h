#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IDLGIGBGFKL__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int IDLGIGBGFKL_TypeDefinitionIndex = 83113;

struct alignas(4) IDLGIGBGFKL
{
	::System::Int32 GIAOKGFENJD; // 0x10
	::System::Int32 EIEGGNEDAPD; // 0x14

	::System::Void _ctor(::System::Int32 GIAOKGFENJD, ::System::Int32 EIEGGNEDAPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IDLGIGBGFKL__CTOR_OFFSET))(this, GIAOKGFENJD, EIEGGNEDAPD);
	}
};
