#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ParticleSystemJobs
{
	inline static constexpr unsigned int NativeParticleData_Array3_TypeDefinitionIndex = 5297;

	struct alignas(8) NativeParticleData_Array3
	{
		::PVOID x; // 0x10
		::PVOID y; // 0x18
		::PVOID z; // 0x20
	};
}
