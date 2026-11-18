#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTypewriterObjectTarget_TypeDefinitionIndex = 67932;

	struct alignas(8) UITextTypewriterObjectTarget
	{
		::UnityEngine::RectTransform* target; // 0x10
		::System::Int32 stepIndex; // 0x18
		::UnityEngine::Vector3 visibleScale; // 0x1C
	};
}
