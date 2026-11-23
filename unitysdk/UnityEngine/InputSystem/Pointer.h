#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/AA8B3CE8DA68E5DC.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DeltaControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_POINTER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6AEB0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F6B230)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESS_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_POINTER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F6B070)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x3F6B0C0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F6B150)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x3F6B1D0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F6B270)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESS_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x3F6B0C0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x3F6B1D0)
#define UNITYENGINE_INPUTSYSTEM_POINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F64F30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Pointer_TypeDefinitionIndex = 14270;

	class Pointer : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Pointer** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Pointer**)Il2CppClass::FromTypeDefinitionIndex(Pointer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::DeltaControl* _delta_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _press_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::IntegerControl* _displayIndex_k__BackingField; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER__CTOR_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONREMOVED_OFFSET))(this);
		}

		::System::Void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_RADIUS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void set_press(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESSURE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_press()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESS_OFFSET))(this);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* get_delta()
		{
			return ((::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::DeltaControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_DELTA_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_POSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* B35325D9541AD934, ::AA8B3CE8DA68E5DC AE3D61BA8B59B50D, ::System::UInt32& BE9B161B3F3C2937)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::AA8B3CE8DA68E5DC, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET))(this, B35325D9541AD934, AE3D61BA8B59B50D, BE9B161B3F3C2937);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_pressure()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESSURE_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Pointer* get_current()
		{
			return ((::UnityEngine::InputSystem::Pointer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Pointer* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Pointer*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_MAKECURRENT_OFFSET))(this);
		}

		::System::Void set_displayIndex(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_DISPLAYINDEX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_displayIndex()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_DISPLAYINDEX_OFFSET))(this);
		}

		::System::Void OnStateEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONSTATEEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_radius()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_RADIUS_OFFSET))(this);
		}
	};
}
