#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ParticleInstancingBatchCount_TypeDefinitionIndex = 26236;

	enum class ParticleInstancingBatchCount : ::System::Int32
	{
		Middle = 150,
		High = 250,
		Low = 50,
	};
}
