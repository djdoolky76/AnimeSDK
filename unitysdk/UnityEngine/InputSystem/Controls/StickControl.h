#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/Vector2Control.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F58CE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1EC4220)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x17F0F40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1CF7080)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x18265C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x26C5430)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x197AD80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D1A130)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x1D1A170)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F58E00)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int StickControl_TypeDefinitionIndex = 14175;

	class StickControl : public ::UnityEngine::InputSystem::Controls::Vector2Control
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField; // 0x138

		::System::Void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_UP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_right()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_RIGHT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_down()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_DOWN_OFFSET))(this);
		}

		::System::Void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_LEFT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_DOWN_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_up()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_UP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_left()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_RIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
