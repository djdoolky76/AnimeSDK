#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"
namespace MiHoYo::SDK::PluginUI { class IPluginUIService_ShowPluginUITask; }
namespace MiHoYo::SDK::PluginUI { class PluginUIDispatcher; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF8ABD0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF89D80)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF89E10)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_MANUALLYSHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BF8A000)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1BF8A0E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONREGISTERTASK_OFFSET UNITYSDK_OFFSET(0x1BF8AB40)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIDispatcher_TypeDefinitionIndex = 9149;

	class PluginUIDispatcher : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* m_dicPluginUIName2ShowTask; // 0x18
		static ::MiHoYo::SDK::PluginUI::PluginUIDispatcher** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIDispatcher**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "PluginUIDispatcher")->GetStaticField(0x19A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIDispatcher* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIDispatcher*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_GETINSTANCE_OFFSET))();
		}

		::System::Void ManuallyShowPluginUI(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_MANUALLYSHOWPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void OnRegisterTask(::System::String* a1, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::IPluginUIService_ShowPluginUITask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIDISPATCHER_ONREGISTERTASK_OFFSET))(this, a1, a2);
		}

	};
}
