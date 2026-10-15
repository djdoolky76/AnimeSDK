#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventModifiers.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace UnityEngine::UIElements
{
	template <typename T>
	class KeyboardEventBase_1
	{
	public:
		::UnityEngine::EventModifiers _modifiers_k__BackingField; // 0x0
		::System::Char _character_k__BackingField; // 0x0
		::UnityEngine::KeyCode _keyCode_k__BackingField; // 0x0
	};
}
