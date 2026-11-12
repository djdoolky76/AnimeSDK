#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define SHADERWARMUPCONFIGS_CCTOR_OFFSET UNITYSDK_OFFSET(0xF4880A0)
#define SHADERWARMUPCONFIGS_GET_ISPSOWARMUP_OFFSET UNITYSDK_OFFSET(0xF488040)
#define SHADERWARMUPCONFIGS_GET_SUPPORTPSOWARMUP_OFFSET UNITYSDK_OFFSET(0xF488030)

inline static constexpr unsigned int ShaderWarmupConfigs_TypeDefinitionIndex = 48462;

	class ShaderWarmupConfigs : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_PreferPSOWarmupCVar()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "ShaderWarmupConfigs")->GetStaticField(0x11B80);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EnableWarmupCVar()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "ShaderWarmupConfigs")->GetStaticField(0x11B90);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_PSOWarmupCountPerTickCVar()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "ShaderWarmupConfigs")->GetStaticField(0x11BA0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ForcePSOIgnoreUserSettingsCVar()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "ShaderWarmupConfigs")->GetStaticField(0x11BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHADERWARMUPCONFIGS_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_SupportPSOWarmup()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SHADERWARMUPCONFIGS_GET_SUPPORTPSOWARMUP_OFFSET))();
		}

		static ::System::Boolean get_IsPSOWarmup()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SHADERWARMUPCONFIGS_GET_ISPSOWARMUP_OFFSET))();
		}

	};
