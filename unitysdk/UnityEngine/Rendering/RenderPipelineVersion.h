#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineVersion_TypeDefinitionIndex = 26518;

	enum class RenderPipelineVersion : ::System::Int32
	{
		OB1_2 = 2,
		ClientCG = 9999,
		OB1_5 = 5,
		CB3 = 0,
		OB1_0 = 1,
		NotSet = -1,
		OB2_0 = 6,
		OB1_3 = 3,
		OB1_4 = 4,
	};
}
