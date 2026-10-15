#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

namespace UnityEngine::UIElements
{
	struct alignas(8) EventDispatcher_EventRecord
	{
		::UnityEngine::UIElements::EventBase* m_Event; // 0x10
		::UnityEngine::UIElements::IPanel* m_Panel; // 0x18
	};
}
