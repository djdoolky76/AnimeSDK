#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IHBHKBGJNHK_PJFOKFGFHNA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6F7FC0)

inline static constexpr unsigned int IHBHKBGJNHK_PJFOKFGFHNA_TypeDefinitionIndex = 90781;

struct alignas(4) IHBHKBGJNHK_PJFOKFGFHNA
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHBHKBGJNHK_PJFOKFGFHNA_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
