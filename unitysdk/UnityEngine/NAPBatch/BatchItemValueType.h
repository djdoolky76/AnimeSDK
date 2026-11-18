#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPBatch
{
	inline static constexpr unsigned int BatchItemValueType_TypeDefinitionIndex = 6138;

	enum class BatchItemValueType : ::System::Int32
	{
		SingleFloat = 0,
		Vector4 = 1,
		Color = 2,
		Texture = 3,
		Matrix4x4 = 4,
	};
}
