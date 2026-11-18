#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_CurveBinding_BoneParamType_TypeDefinitionIndex = 38007;

	enum class ClipShapeManager_CurveBinding_BoneParamType : ::System::Int32
	{
		None = 0,
		BoneRotY = 5,
		BonePosZ = 3,
		BoneRotX = 4,
		BonePosX = 1,
		BonePosY = 2,
		BoneRotZ = 6,
	};
}
