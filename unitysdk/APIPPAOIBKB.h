#pragma once
#include "unitysdk/unitysdk.h"

#define APIPPAOIBKB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2E7D8F0)

inline static constexpr unsigned int APIPPAOIBKB_TypeDefinitionIndex = 71097;

	struct alignas(4) APIPPAOIBKB
	{
		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIPPAOIBKB_EXECUTE_OFFSET))(this);
		}

	};
