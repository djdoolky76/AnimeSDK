#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/Vector2Control.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F476F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1EC4220)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x17F0F40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1CF7080)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x18265C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_1_OFFSET UNITYSDK_OFFSET(0x3F47810)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET UNITYSDK_OFFSET(0x3F47830)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3F478B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x26C5430)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x197AD80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D1A130)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x1D1A170)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3F47A90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F47C80)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DpadControl_TypeDefinitionIndex = 14187;

	class DpadControl : public ::UnityEngine::InputSystem::Controls::Vector2Control
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField; // 0x138

		::System::Void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_DOWN_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_left()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_LEFT_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_LEFT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_UP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_RIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Vector2 ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}

		static ::UnityEngine::Vector2 MakeDpadVector(::System::Boolean BE38C169EB1E684C, ::System::Boolean EC6B72B5D968BDBE, ::System::Boolean A11D4EC92205DAEE, ::System::Boolean F38046B0C91E49B1, ::System::Boolean B0940F8191E862E7)
		{
			return ((::UnityEngine::Vector2(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET))(BE38C169EB1E684C, EC6B72B5D968BDBE, A11D4EC92205DAEE, F38046B0C91E49B1, B0940F8191E862E7);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_right()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_RIGHT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_down()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_DOWN_OFFSET))(this);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector2 E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_up()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_UP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 MakeDpadVector_1(::System::Single BE38C169EB1E684C, ::System::Single EC6B72B5D968BDBE, ::System::Single A11D4EC92205DAEE, ::System::Single F38046B0C91E49B1)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_1_OFFSET))(BE38C169EB1E684C, EC6B72B5D968BDBE, A11D4EC92205DAEE, F38046B0C91E49B1);
		}
	};
}
