#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x1E4509F0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x1E451300)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E4514A0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E451490)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENTDEFAULTVALUETOCONTROL_OFFSET UNITYSDK_OFFSET(0x1E451310)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SETUPINPUTCONTROL_OFFSET UNITYSDK_OFFSET(0x1E450A40)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x1E450A00)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E451770)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenControl_TypeDefinitionIndex = 31852;

	class OnScreenControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Object*>* StaticGet_s_OnScreenDevices()
		{
			return (::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(OnScreenControl_TypeDefinitionIndex)->GetStaticField(0x28E30);
		}
		::UnityEngine::InputSystem::InputControl* m_Control; // 0x18
		::UnityEngine::InputSystem::OnScreen::OnScreenControl* m_NextControlOnDevice; // 0x20
		::UnityEngine::InputSystem::LowLevel::InputEventPtr m_InputEventPtr; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL__CTOR_OFFSET))(this);
		}

		::System::String* get_controlPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATH_OFFSET))(this);
		}

		::System::Void set_controlPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATH_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROL_OFFSET))(this);
		}

		::System::Void SetupInputControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SETUPINPUTCONTROL_OFFSET))(this);
		}

		::System::Void SentDefaultValueToControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENTDEFAULTVALUETOCONTROL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONDISABLE_OFFSET))(this);
		}
	};
}
