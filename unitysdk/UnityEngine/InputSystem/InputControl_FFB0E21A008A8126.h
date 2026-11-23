#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControl_FFB0E21A008A8126_TypeDefinitionIndex = 14598;

	enum class InputControl_FFB0E21A008A8126 : ::System::Int32
	{
		ConfigUpToDate = 1,
		IsNoisy = 2,
		IsSynthetic = 4,
		IsButton = 8,
		DontReset = 16,
		SetupFinished = 32,
		UsesStateFromOtherControl = 64,
	};
}
