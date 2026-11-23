#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/A5F7BD813DE60ED2.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class StickControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x4024D90)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_ALL_OFFSET UNITYSDK_OFFSET(0x40250A0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4025110)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_HATSWITCH_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_STICK_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x4024EC0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONADDED_OFFSET UNITYSDK_OFFSET(0x4024F20)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x4024F90)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4025150)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_HATSWITCH_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_STICK_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Joystick_TypeDefinitionIndex = 14609;

	class Joystick : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Joystick** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Joystick**)Il2CppClass::FromTypeDefinitionIndex(Joystick_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_s_JoystickCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Joystick_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::UnityEngine::InputSystem::Joystick*>** StaticGet_s_Joysticks()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::Joystick*>**)Il2CppClass::FromTypeDefinitionIndex(Joystick_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _trigger_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::StickControl* _stick_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::Vector2Control* _hatswitch_k__BackingField; // 0x1A8

		::UnityEngine::InputSystem::Controls::StickControl* get_stick()
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_STICK_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Joystick* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Joystick*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		static ::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Joystick*> get_all()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Joystick*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_ALL_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONREMOVED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_hatswitch()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_HATSWITCH_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONADDED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_twist()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TWIST_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_FINISHSETUP_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Joystick* get_current()
		{
			return ((::UnityEngine::InputSystem::Joystick*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_CURRENT_OFFSET))();
		}

		::System::Void set_hatswitch(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_HATSWITCH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_stick(::UnityEngine::InputSystem::Controls::StickControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::StickControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_STICK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_MAKECURRENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TRIGGER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TWIST_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
