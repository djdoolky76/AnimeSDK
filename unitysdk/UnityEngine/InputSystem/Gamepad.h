#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B674647C65E34CD1.h"
#include "unitysdk/E7F9C9491EE9F059/F6D04AB81DB7440B.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/A5F7BD813DE60ED2.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DpadControl; }
namespace UnityEngine::InputSystem::Controls { class StickControl; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FCE430)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ABUTTON_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ALL_OFFSET UNITYSDK_OFFSET(0x3FCEC60)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BBUTTON_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONEAST_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONNORTH_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONSOUTH_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONWEST_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CIRCLEBUTTON_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CROSSBUTTON_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FCECD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_DPAD_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3FCEA40)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x3F562E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x3859F20)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SQUAREBUTTON_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_TRIANGLEBUTTON_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_XBUTTON_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_YBUTTON_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3FCE7D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONADDED_OFFSET UNITYSDK_OFFSET(0x3FCE830)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3FCE8A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x3FCE9B0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x3FCE9D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x3FCE9F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x3FCEA10)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONEAST_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONNORTH_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONSOUTH_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONWEST_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FCED10)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_DPAD_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSHOULDER_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICK_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x3F56380)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSHOULDER_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICK_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1EC5E40)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_SELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_INPUTSYSTEM_GAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Gamepad_TypeDefinitionIndex = 14419;

	class Gamepad : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Gamepad** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Gamepad**)Il2CppClass::FromTypeDefinitionIndex(Gamepad_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_s_GamepadCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Gamepad_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::UnityEngine::InputSystem::Gamepad*>** StaticGet_s_Gamepads()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::Gamepad*>**)Il2CppClass::FromTypeDefinitionIndex(Gamepad_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonWest_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonNorth_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonSouth_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _buttonEast_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftStickButton_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightStickButton_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _startButton_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _selectButton_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::DpadControl* _dpad_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftShoulder_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightShoulder_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::StickControl* _leftStick_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::StickControl* _rightStick_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTrigger_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTrigger_k__BackingField; // 0x200
		::B674647C65E34CD1 m_Rumble; // 0x208

		::UnityEngine::InputSystem::Controls::StickControl* get_leftStick()
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICK_OFFSET))(this);
		}

		::System::Void set_leftStick(::UnityEngine::InputSystem::Controls::StickControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::StickControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_selectButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_SELECTBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Gamepad* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Gamepad*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void ResumeHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESUMEHAPTICS_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Gamepad* get_current()
		{
			return ((::UnityEngine::InputSystem::Gamepad*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CURRENT_OFFSET))();
		}

		::System::Void set_dpad(::UnityEngine::InputSystem::Controls::DpadControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::DpadControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_DPAD_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void ResetHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_RESETHAPTICS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftStickButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSTICKBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_yButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_YBUTTON_OFFSET))(this);
		}

		::System::Void set_rightStick(::UnityEngine::InputSystem::Controls::StickControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::StickControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_buttonEast(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONEAST_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_selectButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SELECTBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_xButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_XBUTTON_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_MAKECURRENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::E7F9C9491EE9F059::F6D04AB81DB7440B A59E604D1E9B8ED2)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::E7F9C9491EE9F059::F6D04AB81DB7440B))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ITEM_OFFSET))(this, A59E604D1E9B8ED2);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTrigger()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTTRIGGER_OFFSET))(this);
		}

		static ::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Gamepad*> get_all()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Gamepad*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ALL_OFFSET))();
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonWest()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONWEST_OFFSET))(this);
		}

		::System::Void SetMotorSpeeds(::System::Single BD0EE80578031617, ::System::Single E04965254B72757D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SETMOTORSPEEDS_OFFSET))(this, BD0EE80578031617, E04965254B72757D);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_bButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_startButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_STARTBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_squareButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_SQUAREBUTTON_OFFSET))(this);
		}

		::System::Void set_leftShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSHOULDER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD__CTOR_OFFSET))(this);
		}

		::System::Void PauseHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_PAUSEHAPTICS_OFFSET))(this);
		}

		::System::Void set_rightStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSTICKBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightStickButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICKBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonSouth()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONSOUTH_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::DpadControl* get_dpad()
		{
			return ((::UnityEngine::InputSystem::Controls::DpadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_DPAD_OFFSET))(this);
		}

		::System::Void set_buttonSouth(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONSOUTH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonNorth()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONNORTH_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTrigger()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTTRIGGER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightShoulder()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSHOULDER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftShoulder()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_LEFTSHOULDER_OFFSET))(this);
		}

		::System::Void set_rightShoulder(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTSHOULDER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_leftTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTTRIGGER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONADDED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_buttonWest(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONWEST_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_leftStickButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_LEFTSTICKBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::StickControl* get_rightStick()
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_RIGHTSTICK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_aButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_ABUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_buttonEast()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_BUTTONEAST_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_crossButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CROSSBUTTON_OFFSET))(this);
		}

		::System::Void set_startButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_STARTBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_buttonNorth(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_BUTTONNORTH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_circleButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_CIRCLEBUTTON_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_ONREMOVED_OFFSET))(this);
		}

		::System::Void set_rightTrigger(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_SET_RIGHTTRIGGER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triangleButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPAD_GET_TRIANGLEBUTTON_OFFSET))(this);
		}
	};
}
