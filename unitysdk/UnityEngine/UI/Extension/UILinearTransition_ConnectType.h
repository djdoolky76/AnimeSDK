#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearTransition_ConnectType_TypeDefinitionIndex = 77280;

	enum class UILinearTransition_ConnectType : ::System::Int32
	{
		OneToTwo = 1,
		TwoToTwo = 3,
		TwoToOne = 2,
		OneToOne = 0,
	};
}
