#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PONCHKKAEAG__CTOR_OFFSET UNITYSDK_OFFSET(0x409320)

inline static constexpr unsigned int PONCHKKAEAG_TypeDefinitionIndex = 72923;

struct alignas(4) PONCHKKAEAG
{
	::System::Single KIADGHJNLAC; // 0x10
	::System::Single KHMMANBNPII; // 0x14

	::System::Void _ctor(::System::Single KIADGHJNLAC, ::System::Single KHMMANBNPII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PONCHKKAEAG__CTOR_OFFSET))(this, KIADGHJNLAC, KHMMANBNPII);
	}
};
