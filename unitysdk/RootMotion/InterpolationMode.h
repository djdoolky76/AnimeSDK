#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int InterpolationMode_TypeDefinitionIndex = 36868;

	enum class InterpolationMode : ::System::Int32
	{
		BackInCubic = 25,
		OutBackCubic = 23,
		InCubic = 6,
		OutQuintic = 13,
		None = 0,
		InElasticBig = 10,
		InQuartic = 5,
		OutInCubic = 16,
		BackInQuartic = 26,
		OutBack = 22,
		OutElasticSmall = 19,
		InSine = 11,
		InOutCubic = 1,
		InElasticSmall = 9,
		OutCubic = 15,
		InQuadratic = 7,
		OutElasticBig = 20,
		InOutQuintic = 2,
		OutInQuartic = 17,
		InOutSine = 3,
		InBack = 12,
		OutQuartic = 14,
		OutElastic = 18,
		InQuintic = 4,
		OutSine = 21,
		OutBackQuartic = 24,
		InElastic = 8,
	};
}
