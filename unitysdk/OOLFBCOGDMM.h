#pragma once
#include "unitysdk/unitysdk.h"

#define OOLFBCOGDMM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3E3A130)

inline static constexpr unsigned int OOLFBCOGDMM_TypeDefinitionIndex = 73072;

	struct alignas(4) OOLFBCOGDMM
	{
		::System::Int32 MPAJJCGFAKP; // 0x10
		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLFBCOGDMM_EXECUTE_OFFSET))(this);
		}

	};
