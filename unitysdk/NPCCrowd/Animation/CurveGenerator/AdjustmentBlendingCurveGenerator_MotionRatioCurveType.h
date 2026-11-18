#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CurveGenerator
{
	inline static constexpr unsigned int AdjustmentBlendingCurveGenerator_MotionRatioCurveType_TypeDefinitionIndex = 60976;

	enum class AdjustmentBlendingCurveGenerator_MotionRatioCurveType : ::System::Int32
	{
		TranslationZ = 2,
		TranslationY = 1,
		Angle = 3,
		TranslationX = 0,
	};
}
