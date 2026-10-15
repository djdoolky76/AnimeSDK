#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class IEventHandler; }

namespace UnityEngine::UIElements
{
	template <typename T>
	class PointerCaptureEventBase_1
	{
	public:
		::UnityEngine::UIElements::IEventHandler* _relatedTarget_k__BackingField; // 0x0
		::System::Int32 _pointerId_k__BackingField; // 0x0
	};
}
