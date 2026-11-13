#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PluginUI { class JoypadManagerInternal; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF74500)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF65510)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_ISTOP_OFFSET UNITYSDK_OFFSET(0x1BF6AC10)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_POPUI_OFFSET UNITYSDK_OFFSET(0x1BF658C0)
#define MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_PUSHUI_OFFSET UNITYSDK_OFFSET(0x1BF655B0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int JoypadManagerInternal_TypeDefinitionIndex = 47809;

	class JoypadManagerInternal : public ::System::Object
	{
	public:
		::System::String* m_strTopUI; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_lstUIStack; // 0x18
		static ::MiHoYo::SDK::PluginUI::JoypadManagerInternal** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::JoypadManagerInternal**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "JoypadManagerInternal")->GetStaticField(0x28D40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::JoypadManagerInternal* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::JoypadManagerInternal*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_INSTANCE_OFFSET))();
		}

		::System::Void PushUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_PUSHUI_OFFSET))(this, a1);
		}

		::System::Void PopUI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_POPUI_OFFSET))(this, a1);
		}

		::System::Boolean IsTop(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_JOYPADMANAGERINTERNAL_ISTOP_OFFSET))(this, a1);
		}

	};
}
