#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Animation
{
	inline static constexpr unsigned int EaseType_TypeDefinitionIndex = 30338;

	enum class EaseType : ::System::Int32
	{
		QuarticInOut = 6,
		QuadraticInOut = 3,
		CircularInOut = 18,
		BackInOut = 30,
		ElasticOut = 23,
		CubicIn = 10,
		ElasticIn = 22,
		SinusoidalIn = 19,
		QuarticOut = 5,
		CircularOut = 17,
		QuadraticIn = 1,
		BounceIn = 25,
		CircularIn = 16,
		QuarticIn = 4,
		ElasticInOut = 24,
		BackIn = 28,
		SinusoidalOut = 20,
		ExponentialInOut = 15,
		Linear = 0,
		BounceOut = 26,
		CubicOut = 11,
		BackOut = 29,
		QuinticInOut = 9,
		CubicInOut = 12,
		BounceInOut = 27,
		SinusoidalInOut = 21,
		ExponentialIn = 13,
		QuinticOut = 8,
		QuadraticOut = 2,
		QuinticIn = 7,
		ExponentialOut = 14,
	};
}
