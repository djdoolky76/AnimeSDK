#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureRuntimeSwitchMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_APPLYOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1C686BF0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C686BA0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_GET_DISABLEDRUNTIMEFEATURES_OFFSET UNITYSDK_OFFSET(0x1C686AF0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_GET_ENABLEDRUNTIMEFEATURES_OFFSET UNITYSDK_OFFSET(0x1C6869C0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_ONRUNTIMEFEATURESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C686F20)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SETDISABLEDRUNTIMEFEATURES_OFFSET UNITYSDK_OFFSET(0x1C686E80)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SETENABLEDRUNTIMEFEATURES_OFFSET UNITYSDK_OFFSET(0x1C686DE0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SETRUNTIMEFEATURES_OFFSET UNITYSDK_OFFSET(0x1C686A70)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SET_DISABLEDRUNTIMEFEATURES_OFFSET UNITYSDK_OFFSET(0x1C686B00)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SET_ENABLEDRUNTIMEFEATURES_OFFSET UNITYSDK_OFFSET(0x1C6869D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C686F80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationTextSwitchOverride_TypeDefinitionIndex = 55364;

	class UILocalizationTextSwitchOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask _enabledRuntimeFeatures; // 0x18
		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask _disabledRuntimeFeatures; // 0x1C
		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask _appliedEnabledRuntimeFeatures; // 0x20
		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask _appliedDisabledRuntimeFeatures; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask get_EnabledRuntimeFeatures()
		{
			return ((::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_GET_ENABLEDRUNTIMEFEATURES_OFFSET))(this);
		}

		::System::Void set_EnabledRuntimeFeatures(::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SET_ENABLEDRUNTIMEFEATURES_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask get_DisabledRuntimeFeatures()
		{
			return ((::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_GET_DISABLEDRUNTIMEFEATURES_OFFSET))(this);
		}

		::System::Void set_DisabledRuntimeFeatures(::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SET_DISABLEDRUNTIMEFEATURES_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_AWAKE_OFFSET))(this);
		}

		::System::Void SetEnabledRuntimeFeatures(::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask enabledRuntimeFeatures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SETENABLEDRUNTIMEFEATURES_OFFSET))(this, enabledRuntimeFeatures);
		}

		::System::Void SetDisabledRuntimeFeatures(::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask disabledRuntimeFeatures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SETDISABLEDRUNTIMEFEATURES_OFFSET))(this, disabledRuntimeFeatures);
		}

		::System::Void SetRuntimeFeatures(::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask enabledRuntimeFeatures, ::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask disabledRuntimeFeatures)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask, ::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_SETRUNTIMEFEATURES_OFFSET))(this, enabledRuntimeFeatures, disabledRuntimeFeatures);
		}

		::System::Void OnRuntimeFeaturesChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_ONRUNTIMEFEATURESCHANGED_OFFSET))(this);
		}

		::System::Void ApplyOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXTSWITCHOVERRIDE_APPLYOVERRIDE_OFFSET))(this);
		}
	};
}
