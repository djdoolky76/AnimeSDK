#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Gamepad.h"
#include "unitysdk/AA8B3CE8DA68E5DC.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_CAPTUREBUTTON_OFFSET UNITYSDK_OFFSET(0x384EF20)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_HOMEBUTTON_OFFSET UNITYSDK_OFFSET(0x3F56310)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKERESTART_OFFSET UNITYSDK_OFFSET(0x3FEFB50)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKETICK_OFFSET UNITYSDK_OFFSET(0x3FEFBD0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONADDED_OFFSET UNITYSDK_OFFSET(0x3FEFF30)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x3FF0040)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x3FF0050)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_PREPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x3FF01C0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_CAPTUREBUTTON_OFFSET UNITYSDK_OFFSET(0x3F563C0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_HOMEBUTTON_OFFSET UNITYSDK_OFFSET(0x3F56420)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FF0FE0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchProControllerHID_TypeDefinitionIndex = 14492;

	class SwitchProControllerHID : public ::UnityEngine::InputSystem::Gamepad
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_s_HandshakeSequence()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchProControllerHID_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Byte JitterMaskLow = 0x78; // 0x0
		// static const ::System::Byte JitterMaskHigh = 0x87; // 0x0
		::UnityEngine::InputSystem::Controls::ButtonControl* _captureButton_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::ButtonControl* _homeButton_k__BackingField; // 0x218
		::System::Int32 m_HandshakeStepIndex; // 0x220
		::System::Byte _padding0[0x4];
		::System::Double m_HandshakeTimer; // 0x228

		::UnityEngine::InputSystem::Controls::ButtonControl* get_homeButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_HOMEBUTTON_OFFSET))(this);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONNEXTUPDATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_captureButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_CAPTUREBUTTON_OFFSET))(this);
		}

		::System::Void HandshakeTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKETICK_OFFSET))(this);
		}

		::System::Void set_homeButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_HOMEBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* B35325D9541AD934, ::AA8B3CE8DA68E5DC AE3D61BA8B59B50D, ::System::UInt32& BE9B161B3F3C2937)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::AA8B3CE8DA68E5DC, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GETSTATEOFFSETFOREVENT_OFFSET))(this, B35325D9541AD934, AE3D61BA8B59B50D, BE9B161B3F3C2937);
		}

		::System::Void OnStateEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONSTATEEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID__CTOR_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONADDED_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID__CCTOR_OFFSET))();
		}

		::System::Void set_captureButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_CAPTUREBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void HandshakeRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKERESTART_OFFSET))(this);
		}

		::System::Boolean PreProcessEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Boolean(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_PREPROCESSEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}
	};
}
