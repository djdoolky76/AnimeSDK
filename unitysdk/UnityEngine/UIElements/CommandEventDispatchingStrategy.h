#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x2075CE80)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CTOR_OFFSET UNITYSDK_OFFSET(0x2075E860)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x2075CEE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CommandEventDispatchingStrategy_TypeDefinitionIndex = 5924;

	class CommandEventDispatchingStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CTOR_OFFSET))(this);
		}

		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(this, a1);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::IPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(this, a1, a2);
		}

	};
}
