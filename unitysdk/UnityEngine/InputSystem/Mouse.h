#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Pointer.h"
#include "unitysdk/AA8B3CE8DA68E5DC.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DeltaControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }

#define UNITYENGINE_INPUTSYSTEM_MOUSE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F555E0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_BACKBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55AC0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E07880)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F55AD0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_FORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x27BAC70)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_LEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_MIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_RIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F557F0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONADDED_OFFSET UNITYSDK_OFFSET(0x3F55850)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x3F558D0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F55960)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x3F559F0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_BACKBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55B20)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x3F55B40)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F55B60)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_FORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55BB0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_LEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_MIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_RIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_SCROLL_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x3F558D0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x3F559F0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_WARPCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x3F55A50)
#define UNITYENGINE_INPUTSYSTEM_MOUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Mouse_TypeDefinitionIndex = 14154;

	class Mouse : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		static ::UnityEngine::InputSystem::Mouse** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Mouse**)Il2CppClass::FromTypeDefinitionIndex(Mouse_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::InputSystem::Mouse** StaticGet_s_PlatformMouseDevice()
		{
			return (::UnityEngine::InputSystem::Mouse**)Il2CppClass::FromTypeDefinitionIndex(Mouse_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::UnityEngine::InputSystem::Controls::DeltaControl* _scroll_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftButton_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _middleButton_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightButton_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::ButtonControl* _backButton_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _forwardButton_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::IntegerControl* _clickCount_k__BackingField; // 0x1F0

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_forwardButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_FORWARDBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnStateEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONSTATEEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}

		::System::Void set_leftButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_LEFTBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_RIGHTBUTTON_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_clickCount()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CLICKCOUNT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_forwardButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_FORWARDBUTTON_OFFSET))(this);
		}

		::System::Void set_clickCount(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CLICKCOUNT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_LEFTBUTTON_OFFSET))(this);
		}

		::System::Void set_rightButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_RIGHTBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE__CTOR_OFFSET))(this);
		}

		::System::Void set_middleButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_MIDDLEBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONNEXTUPDATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* get_scroll()
		{
			return ((::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_SCROLL_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_middleButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_MIDDLEBUTTON_OFFSET))(this);
		}

		::System::Void set_backButton(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_BACKBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_backButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_BACKBUTTON_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Mouse* get_current()
		{
			return ((::UnityEngine::InputSystem::Mouse*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CURRENT_OFFSET))();
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONREMOVED_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONADDED_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Mouse* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Mouse*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void WarpCursorPosition(::UnityEngine::Vector2 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_WARPCURSORPOSITION_OFFSET))(this, EB211B01816ACA79);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}

		::System::Void set_scroll(::UnityEngine::InputSystem::Controls::DeltaControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::DeltaControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_SCROLL_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_MAKECURRENT_OFFSET))(this);
		}
	};
}
