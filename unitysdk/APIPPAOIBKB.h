#pragma once
#include "unitysdk/unitysdk.h"

#define APIPPAOIBKB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3E00230)

inline static constexpr unsigned int APIPPAOIBKB_TypeDefinitionIndex = 73080;

	struct alignas(4) APIPPAOIBKB
	{
		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIPPAOIBKB_EXECUTE_OFFSET))(this);
		}

	};
