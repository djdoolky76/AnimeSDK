#pragma once
#include "unitysdk/unitysdk.h"

namespace Coffee::UIExtensions
{
	enum class AnimatableProperty_ShaderPropertyType : ::System::Int32
	{
		Color = 0,
		Vector = 1,
		Float = 2,
		Range = 3,
		Texture = 4,
	};
}
