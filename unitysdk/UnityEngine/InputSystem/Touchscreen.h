#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Pointer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class TouchControl; }

#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DC74DC0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC74D40)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x1DC74CB0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x1DC74CF0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1DC74CD0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1DC74D60)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1DC75E30)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1DC751D0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1DC74D80)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1DC75550)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC74D50)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x1DC74CC0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x1DC74D00)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1DC74CE0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET UNITYSDK_OFFSET(0x1DC75BC0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET UNITYSDK_OFFSET(0x1DC63DF0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x1DC75EB0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x1DC75C40)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1DC75C20)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1DC75C30)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC75F30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Touchscreen_TypeDefinitionIndex = 31747;

	class Touchscreen : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		static ::UnityEngine::InputSystem::Touchscreen** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Touchscreen**)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x28670);
		}
		static ::System::Single* StaticGet_s_TapTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x80B0);
		}
		static ::System::Single* StaticGet_s_TapRadiusSquared()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x80B4);
		}
		static ::System::Single* StaticGet_s_TapDelayTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x80B8);
		}
		::UnityEngine::InputSystem::Controls::TouchControl* _primaryTouch_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> _touches_k__BackingField; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::TouchControl* get_primaryTouch()
		{
			return ((::UnityEngine::InputSystem::Controls::TouchControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET))(this);
		}

		::System::Void set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::TouchControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> get_touches()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET))(this);
		}

		::System::Void set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>* get_touchControlArray()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET))(this);
		}

		::System::Void set_touchControlArray(::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Touchscreen* get_current()
		{
			return ((::UnityEngine::InputSystem::Touchscreen*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Touchscreen* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET))(this);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::UInt32& offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET))(this, control, eventPtr, offset);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET))(this);
		}

		static ::System::Boolean MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET))(currentEventPtr, nextEventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET))(this, currentEventPtr, nextEventPtr);
		}

		static ::System::Void TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* control, ::UnityEngine::InputSystem::LowLevel::TouchState& state, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Controls::TouchControl*, ::UnityEngine::InputSystem::LowLevel::TouchState&, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET))(control, state, eventPtr);
		}
	};
}
