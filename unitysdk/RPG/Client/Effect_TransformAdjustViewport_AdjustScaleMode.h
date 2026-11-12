#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformAdjustViewport_AdjustScaleMode_TypeDefinitionIndex = 72547;

	enum class Effect_TransformAdjustViewport_AdjustScaleMode : ::System::Int32
	{
		None = 0,
		ByWidth = 1,
		ByHeight = 2,
		ByMin = 3,
		ByMax = 4,
	};
}
