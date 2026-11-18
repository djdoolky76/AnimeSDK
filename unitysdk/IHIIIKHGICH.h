#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IHIIIKHGICH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x725DE0)

inline static constexpr unsigned int IHIIIKHGICH_TypeDefinitionIndex = 91223;

struct alignas(4) IHIIIKHGICH
{
	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHIIIKHGICH_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
