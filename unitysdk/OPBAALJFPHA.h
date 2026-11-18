#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OPBAALJFPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int OPBAALJFPHA_TypeDefinitionIndex = 74330;

struct alignas(4) OPBAALJFPHA
{
	::System::Int32 KIADGHJNLAC; // 0x10
	::System::Int32 KHMMANBNPII; // 0x14

	::System::Void _ctor(::System::Int32 KIADGHJNLAC, ::System::Int32 KHMMANBNPII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OPBAALJFPHA__CTOR_OFFSET))(this, KIADGHJNLAC, KHMMANBNPII);
	}
};
