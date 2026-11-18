#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyClamping_TypeDefinitionIndex = 37685;

	enum class CurvyClamping : ::System::Int32
	{
		PingPong = 2,
		Clamp = 0,
		Loop = 1,
	};
}
