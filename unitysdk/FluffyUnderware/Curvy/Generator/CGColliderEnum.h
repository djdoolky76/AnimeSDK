#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGColliderEnum_TypeDefinitionIndex = 37482;

	enum class CGColliderEnum : ::System::Int32
	{
		Mesh = 1,
		Box = 2,
		Sphere = 3,
		Capsule = 4,
		None = 0,
	};
}
