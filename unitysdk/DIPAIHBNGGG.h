#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DIPAIHBNGGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7436A0)
#define DIPAIHBNGGG__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int DIPAIHBNGGG_TypeDefinitionIndex = 73468;

struct alignas(4) DIPAIHBNGGG
{
	::System::Int32 JBLONBEIBNP; // 0x10

	::System::Void _ctor(::System::Int32 ADPHEEPLLBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIPAIHBNGGG__CTOR_OFFSET))(this, ADPHEEPLLBP);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPAIHBNGGG_DISPOSE_OFFSET))(this);
	}
};
