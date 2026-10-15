#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_CTOR_OFFSET UNITYSDK_OFFSET(0xE458D00)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xE458A30)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xE458780)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERUP_OFFSET UNITYSDK_OFFSET(0xE458910)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTESUBMIT_OFFSET UNITYSDK_OFFSET(0xE458AD0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xE458C00)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xE458C80)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xE4586E0)
#define RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xE458730)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorSimulateTouchActionWrapper_TypeDefinitionIndex = 73231;

	class VirtualCursorSimulateTouchActionWrapper : public ::System::Object
	{
	public:
		::System::Action* _OnPointerPress; // 0x10
		::System::Action* _OnPointerUp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_CTOR_OFFSET))(this);
		}

		::System::Void SetOnPointerPress(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERPRESS_OFFSET))(this, a1);
		}

		::System::Void SetOnPointerUp(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_SETONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void ExecutePointerPress(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERPRESS_OFFSET))(this, a1, a2);
		}

		::System::Void ExecutePointerUp(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERUP_OFFSET))(this, a1, a2);
		}

		::System::Void ExecutePointerClick(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTEPOINTERCLICK_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteSubmit(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_EXECUTESUBMIT_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerPress(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerUp(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORSIMULATETOUCHACTIONWRAPPER_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET))(this, a1, a2);
		}

	};
}
