#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A5F7BD813DE60ED2.h"
#include "unitysdk/UnityEngine/InputSystem/Pointer.h"
#include "unitysdk/AA8B3CE8DA68E5DC.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class TouchControl; }

#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6C3F0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F6DFE0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x3F6E020)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F6C980)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x3F6CA10)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x3F6CB30)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F6CED0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x3F6CFC0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F6E030)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET UNITYSDK_OFFSET(0x3F6E080)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x3F6E0F0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET UNITYSDK_OFFSET(0x3F6D760)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET UNITYSDK_OFFSET(0x3F6D820)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x3F6DBE0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x3F6DD10)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x3F6DFC0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x3F6DFD0)
#define UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x3F64F30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Touchscreen_TypeDefinitionIndex = 14254;

	class Touchscreen : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		static ::UnityEngine::InputSystem::Touchscreen** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Touchscreen**)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Single* StaticGet_s_TapTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Single* StaticGet_s_TapDelayTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0xC);
		}
		static ::System::Single* StaticGet_s_TapRadiusSquared()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Touchscreen_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::UnityEngine::InputSystem::Controls::TouchControl* _primaryTouch_k__BackingField; // 0x1C0
		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Controls::TouchControl*> _touches_k__BackingField; // 0x1C8

		static ::System::Void set_current(::UnityEngine::InputSystem::Touchscreen* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>* get_touchControlArray()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHCONTROLARRAY_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MAKECURRENT_OFFSET))(this);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::AA8B3CE8DA68E5DC A9FA63E66C8A4099, ::AA8B3CE8DA68E5DC E9A4DBAAD66DB52D)
		{
			return ((::System::Boolean(*)(::PVOID, ::AA8B3CE8DA68E5DC, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET))(this, A9FA63E66C8A4099, E9A4DBAAD66DB52D);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Controls::TouchControl*> get_touches()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Controls::TouchControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_TOUCHES_OFFSET))(this);
		}

		::System::Void set_touches(::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Controls::TouchControl*> E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Controls::TouchControl*>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHES_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONNEXTUPDATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::TouchControl* get_primaryTouch()
		{
			return ((::UnityEngine::InputSystem::Controls::TouchControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_PRIMARYTOUCH_OFFSET))(this);
		}

		::System::Void OnStateEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONSTATEEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* B35325D9541AD934, ::AA8B3CE8DA68E5DC AE3D61BA8B59B50D, ::System::UInt32& BE9B161B3F3C2937)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::AA8B3CE8DA68E5DC, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET))(this, B35325D9541AD934, AE3D61BA8B59B50D, BE9B161B3F3C2937);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_ONREMOVED_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_FINISHSETUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN__CTOR_OFFSET))(this);
		}

		static ::System::Boolean MergeForward(::AA8B3CE8DA68E5DC A9FA63E66C8A4099, ::AA8B3CE8DA68E5DC E9A4DBAAD66DB52D)
		{
			return ((::System::Boolean(*)(::AA8B3CE8DA68E5DC, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_MERGEFORWARD_OFFSET))(A9FA63E66C8A4099, E9A4DBAAD66DB52D);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Touchscreen* get_current()
		{
			return ((::UnityEngine::InputSystem::Touchscreen*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_GET_CURRENT_OFFSET))();
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::PVOID, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, AE3D61BA8B59B50D);
		}

		::System::Void set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::TouchControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_PRIMARYTOUCH_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* B35325D9541AD934, ::UnityEngine::InputSystem::LowLevel::TouchState& E5EB06E4FD2C32F7, ::AA8B3CE8DA68E5DC AE3D61BA8B59B50D)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Controls::TouchControl*, ::UnityEngine::InputSystem::LowLevel::TouchState&, ::AA8B3CE8DA68E5DC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_TRIGGERTAP_OFFSET))(B35325D9541AD934, E5EB06E4FD2C32F7, AE3D61BA8B59B50D);
		}

		::System::Void set_touchControlArray(::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::Controls::TouchControl*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TOUCHSCREEN_SET_TOUCHCONTROLARRAY_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
