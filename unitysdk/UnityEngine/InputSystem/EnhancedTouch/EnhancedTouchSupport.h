#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputSettings_UpdateMode.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_CHECKENABLED_OFFSET UNITYSDK_OFFSET(0x1EE26F50)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_DISABLE_OFFSET UNITYSDK_OFFSET(0x1EE26840)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ENABLE_OFFSET UNITYSDK_OFFSET(0x1EE26370)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1EE26360)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1EE26D60)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x1EE26E40)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_RESET_OFFSET UNITYSDK_OFFSET(0x1EE26CB0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0x1EE26520)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_TEARDOWNSTATE_OFFSET UNITYSDK_OFFSET(0x1EE26A00)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int EnhancedTouchSupport_TypeDefinitionIndex = 31877;

	class EnhancedTouchSupport : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputSettings_UpdateMode* StaticGet_s_UpdateMode()
		{
			return (::UnityEngine::InputSystem::InputSettings_UpdateMode*)Il2CppClass::FromTypeDefinitionIndex(EnhancedTouchSupport_TypeDefinitionIndex)->GetStaticField(0x8100);
		}
		static ::System::Int32* StaticGet_s_Enabled()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnhancedTouchSupport_TypeDefinitionIndex)->GetStaticField(0x8104);
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_GET_ENABLED_OFFSET))();
		}

		static ::System::Void Enable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ENABLE_OFFSET))();
		}

		static ::System::Void Disable()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_DISABLE_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_RESET_OFFSET))();
		}

		static ::System::Void SetUpState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_SETUPSTATE_OFFSET))();
		}

		static ::System::Void TearDownState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_TEARDOWNSTATE_OFFSET))();
		}

		static ::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONDEVICECHANGE_OFFSET))(device, change);
		}

		static ::System::Void OnSettingsChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_ONSETTINGSCHANGE_OFFSET))();
		}

		static ::System::Void CheckEnabled()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_ENHANCEDTOUCHSUPPORT_CHECKENABLED_OFFSET))();
		}
	};
}
