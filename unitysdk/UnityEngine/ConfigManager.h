#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_CONFIGMANAGER_ADD_ONAFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1F3DB9E0)
#define UNITYENGINE_CONFIGMANAGER_AFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1F3DB9B0)
#define UNITYENGINE_CONFIGMANAGER_MATCHCONDITION_OFFSET UNITYSDK_OFFSET(0x1F3DB9A0)
#define UNITYENGINE_CONFIGMANAGER_REGISTERCUSTOMCONDITION_OFFSET UNITYSDK_OFFSET(0x1F3DB990)
#define UNITYENGINE_CONFIGMANAGER_RELOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1F3DB980)
#define UNITYENGINE_CONFIGMANAGER_RELOADBYMANAGEDREADER_OFFSET UNITYSDK_OFFSET(0x1F3DB970)
#define UNITYENGINE_CONFIGMANAGER_REMOVE_ONAFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1F3DBA90)

namespace UnityEngine
{
	inline static constexpr unsigned int ConfigManager_TypeDefinitionIndex = 4054;

	class ConfigManager : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OnAfterReloadConfig()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine", "ConfigManager")->GetStaticField(0xF9E0);
		}

		static ::System::Void ReloadByManagedReader()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_RELOADBYMANAGEDREADER_OFFSET))();
		}

		static ::System::Void ReloadAllConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_RELOADALLCONFIG_OFFSET))(a1);
		}

		static ::System::Void RegisterCustomCondition(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_REGISTERCUSTOMCONDITION_OFFSET))(a1, a2);
		}

		static ::System::Boolean MatchCondition(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_MATCHCONDITION_OFFSET))(a1, a2);
		}

		static ::System::Void AfterReloadConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_AFTERRELOADCONFIG_OFFSET))(a1);
		}

		static ::System::Void add_OnAfterReloadConfig(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_ADD_ONAFTERRELOADCONFIG_OFFSET))(a1);
		}

		static ::System::Void remove_OnAfterReloadConfig(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGMANAGER_REMOVE_ONAFTERRELOADCONFIG_OFFSET))(a1);
		}

	};
}
