#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x20768AA0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTDISPATCHINGSTRATEGY_CTOR_OFFSET UNITYSDK_OFFSET(0x20762EF0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x20768B00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyboardEventDispatchingStrategy_TypeDefinitionIndex = 5957;

	class KeyboardEventDispatchingStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTDISPATCHINGSTRATEGY_CTOR_OFFSET))(this);
		}

		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(this, a1);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::IPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(this, a1, a2);
		}

	};
}
