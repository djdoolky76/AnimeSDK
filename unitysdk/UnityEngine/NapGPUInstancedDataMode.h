#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapGPUInstancedDataMode_TypeDefinitionIndex = 95403;

	enum class NapGPUInstancedDataMode : ::System::Int32
	{
		CPUArray = 0,
		GPUBuffer = 1,
	};
}
