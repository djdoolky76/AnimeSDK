#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleCanvasPass_TypeDefinitionIndex = 6021;

	enum class ParticleCanvasPass : ::System::Byte
	{
		Main = 0,
		Trail = 1,
	};
}
