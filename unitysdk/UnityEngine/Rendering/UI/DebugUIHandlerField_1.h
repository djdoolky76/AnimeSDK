#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/UI/DebugUIHandlerWidget.h"

namespace UnityEngine::UI { class Text; }

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerField_1_TypeDefinitionIndex = 20407;

	template <typename T>
	class DebugUIHandlerField_1 : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
	public:
		::UnityEngine::UI::Text* nextButtonText; // 0x0
		::UnityEngine::UI::Text* previousButtonText; // 0x0
		::UnityEngine::UI::Text* nameLabel; // 0x0
		::UnityEngine::UI::Text* valueLabel; // 0x0
		T FAD1253D83FED266; // 0x0
	};
}
