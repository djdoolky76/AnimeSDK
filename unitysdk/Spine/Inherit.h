#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int Inherit_TypeDefinitionIndex = 32982;

	enum class Inherit : ::System::Int32
	{
		Normal = 0,
		OnlyTranslation = 1,
		NoRotationOrReflection = 2,
		NoScale = 3,
		NoScaleOrReflection = 4,
	};
}
