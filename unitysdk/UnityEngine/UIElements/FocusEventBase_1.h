#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class Focusable; }

namespace UnityEngine::UIElements
{
	template <typename T>
	class FocusEventBase_1
	{
	public:
		::UnityEngine::UIElements::Focusable* _relatedTarget_k__BackingField; // 0x0
		::UnityEngine::UIElements::FocusChangeDirection* _direction_k__BackingField; // 0x0
		::UnityEngine::UIElements::FocusController* _focusController_k__BackingField; // 0x0
	};
}
