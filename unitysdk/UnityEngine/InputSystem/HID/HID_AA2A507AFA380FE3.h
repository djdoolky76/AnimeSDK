#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_AA2A507AFA380FE3_TypeDefinitionIndex = 14576;

	enum class HID_AA2A507AFA380FE3 : ::System::Int32
	{
		Constant = 1,
		Variable = 2,
		Relative = 4,
		Wrap = 8,
		NonLinear = 16,
		NoPreferred = 32,
		NullState = 64,
		Volatile = 128,
		BufferedBytes = 256,
	};
}
