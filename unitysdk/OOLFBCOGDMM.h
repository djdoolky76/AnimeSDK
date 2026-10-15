#pragma once
#include "unitysdk/unitysdk.h"

#define OOLFBCOGDMM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25B80)

inline static constexpr unsigned int OOLFBCOGDMM_TypeDefinitionIndex = 71089;

	struct alignas(4) OOLFBCOGDMM
	{
		::System::Int32 MPAJJCGFAKP; // 0x10
		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLFBCOGDMM_EXECUTE_OFFSET))(this);
		}

	};
