#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class VisualElement; }

namespace UnityEngine::UIElements
{
	struct alignas(8) FocusController_FocusedElement
	{
		::UnityEngine::UIElements::VisualElement* m_SubTreeRoot; // 0x10
		::UnityEngine::UIElements::Focusable* m_FocusedElement; // 0x18
	};
}
