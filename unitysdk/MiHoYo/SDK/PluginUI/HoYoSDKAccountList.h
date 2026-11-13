#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKAccountList; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5FF80)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF607E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOSHOW_OFFSET UNITYSDK_OFFSET(0x1BF600C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF5FED0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BF60690)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCOLLAPSELIST_OFFSET UNITYSDK_OFFSET(0x1BF61230)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x1BF615A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1BF61020)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x1BF61320)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1BF60000)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_REGISTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BF60C00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_SHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x1BF61330)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_UNREGISTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BF60F10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1BF615B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1BF615F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1BF61630)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1BF61670)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_4_OFFSET UNITYSDK_OFFSET(0x1BF616F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_5_OFFSET UNITYSDK_OFFSET(0x1BF617F0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountList_TypeDefinitionIndex = 47765;

	class HoYoSDKAccountList : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		::System::Boolean m_bIsAccountListExpand; // 0x18
		::System::Boolean m_bIsIgonreFoldAndUnfoldEvent; // 0x19
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountList** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountList**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKAccountList")->GetStaticField(0x23940);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountList* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKAccountList*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCLOSE_OFFSET))(this);
		}

		::System::Void DoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOSHOW_OFFSET))(this);
		}

		::System::Void RegisterDelegate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_REGISTERDELEGATE_OFFSET))(this);
		}

		::System::Void UnRegisterDelegate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_UNREGISTERDELEGATE_OFFSET))(this);
		}

		::System::Void DoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOCLOSE_OFFSET))(this);
		}

		::System::Void OnNoticeExpandDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET))(this);
		}

		::System::Void OnCollapseList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCOLLAPSELIST_OFFSET))(this);
		}

		::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOWELEMENT_OFFSET))(this, a1);
		}

		::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONHIDEELEMENT_OFFSET))(this, a1);
		}

		::System::Void ShowElement(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_SHOWELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterDelegate_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_0_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_1_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_2_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__7_3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_3_OFFSET))(this, a1);
		}

		::System::Void _RegisterDelegate_b__7_4(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_4_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterDelegate_b__7_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_5_OFFSET))(this);
		}

	};
}
