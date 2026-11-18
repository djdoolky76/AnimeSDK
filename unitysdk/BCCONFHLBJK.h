#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define BCCONFHLBJK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6F2210)

inline static constexpr unsigned int BCCONFHLBJK_TypeDefinitionIndex = 87474;

struct alignas(4) BCCONFHLBJK
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCCONFHLBJK_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
