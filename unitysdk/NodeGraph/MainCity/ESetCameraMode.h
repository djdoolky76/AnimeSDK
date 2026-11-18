#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ESetCameraMode_TypeDefinitionIndex = 59746;

	enum class ESetCameraMode : ::System::Int32
	{
		FixPos = 100,
		SetMainCity = 400,
		TwoEntityMiddle = 200,
		FocusAround = 300,
		FocusCamera = 500,
		None = 0,
	};
}
