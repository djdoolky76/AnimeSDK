#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define BFHKJABAPMA_KLHEAMGLIJN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7CEA20)

inline static constexpr unsigned int BFHKJABAPMA_KLHEAMGLIJN_TypeDefinitionIndex = 83141;

struct alignas(4) BFHKJABAPMA_KLHEAMGLIJN
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFHKJABAPMA_KLHEAMGLIJN_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
