#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/CallbackPhase.h"

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1F4B2000)

namespace UnityEngine::UIElements
{
	class EventCallbackFunctorBase : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::CallbackPhase _phase_k__BackingField; // 0x10
		::UnityEngine::UIElements::CallbackPhase get_phase()
		{
			return ((::UnityEngine::UIElements::CallbackPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_PHASE_OFFSET))(this);
		}

	};
}
