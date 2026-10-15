#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class UniformType : ::System::Byte
	{
		Float = 0,
		Int = 1,
		Bool = 2,
		Vector2 = 3,
		Vector3 = 4,
		Vector4 = 5,
		Color = 6,
		Enum = 7,
		String = 8,
	};
}
