#pragma once
#include "unitysdk/unitysdk.h"

#define MJANLEMBNMK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3E5C0C0)

inline static constexpr unsigned int MJANLEMBNMK_TypeDefinitionIndex = 73083;

	struct alignas(4) MJANLEMBNMK
	{
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MJANLEMBNMK_EXECUTE_OFFSET))(this, a1);
		}

	};
