#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_FramePressState.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_InputButton.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class PointerInputModule_ButtonState; }

#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_GETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1F738D50)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1F738E70)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F738EF0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerInputModule_MouseState_TypeDefinitionIndex = 18549;

	class PointerInputModule_MouseState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_TrackedButtons; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE__CTOR_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerInputModule_ButtonState* GetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_ButtonState*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_GETBUTTONSTATE_OFFSET))(this, button);
		}

		::System::Void SetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button, ::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton, ::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton, ::UnityEngine::EventSystems::PointerEventData_FramePressState, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_SETBUTTONSTATE_OFFSET))(this, button, stateForMouseButton, data);
		}
	};
}
