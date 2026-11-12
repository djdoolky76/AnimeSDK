#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/AbstractEventData.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseInputModule; }
namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x2077E540)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_CURRENTINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x2077E550)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x2077E570)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_SET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x2077E590)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseEventData_TypeDefinitionIndex = 6916;

	class BaseEventData : public ::UnityEngine::EventSystems::AbstractEventData
	{
	public:
		::UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x18
		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule()
		{
			return ((::UnityEngine::EventSystems::BaseInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_CURRENTINPUTMODULE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_selectedObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_SELECTEDOBJECT_OFFSET))(this);
		}

		::System::Void set_selectedObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_SET_SELECTEDOBJECT_OFFSET))(this, a1);
		}

	};
}
