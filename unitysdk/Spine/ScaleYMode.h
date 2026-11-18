#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int ScaleYMode_TypeDefinitionIndex = 32988;

	enum class ScaleYMode : ::System::Int32
	{
		None = 0,
		Uniform = 1,
		Volume = 2,
	};
}
