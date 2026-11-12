#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/IPluginUIService.h"
namespace MiHoYo::SDK::PluginUI { class PluginUILoginService; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1238C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D114020)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D111270)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ISSHOWGUEST_OFFSET UNITYSDK_OFFSET(0x1D11C980)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ONCREATESERVICE_OFFSET UNITYSDK_OFFSET(0x1D114030)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D121440)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D11FAA0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D11CC50)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWFLASHLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D115DB0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D121430)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D11FA90)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D11CC40)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWMIYOUSHELOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D114B20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTCONFIRMPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D122060)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D121420)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D11F510)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEMESSAGEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D11A970)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEREGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D122ED0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWQRLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D117C00)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWREACTIVATIONPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D11F520)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWSCANCONFIRMLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D119C80)
#define MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D122070)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUILoginService_TypeDefinitionIndex = 9157;

	class PluginUILoginService : public ::MiHoYo::SDK::PluginUI::IPluginUIService
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUILoginService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUILoginService**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "PluginUILoginService")->GetStaticField(0x18BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUILoginService* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUILoginService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_GETINSTANCE_OFFSET))();
		}

		::System::Void OnCreateService()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ONCREATESERVICE_OFFSET))(this);
		}

		::System::Void ShowMiYouSheLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWMIYOUSHELOGINPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowFlashLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWFLASHLOGINPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowQRLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWQRLOGINPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowScanConfirmLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWSCANCONFIRMLOGINPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPhoneMessagePluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEMESSAGEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowInternalAccountLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLOGINPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaAccountLoginPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLOGINPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAccountLoginPluginUI(::System::Boolean a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLOGINPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowReactivationPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWREACTIVATIONPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowInternalAccountListPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaAccountListPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAccountListPluginUI(::System::Boolean a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowInternalAccountListConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWINTERNALACCOUNTLISTCONFIRMPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowOverseaAccountListConfirmPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWOVERSEAACCOUNTLISTCONFIRMPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAccountListConfirmPluginUI(::System::Boolean a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWACCOUNTLISTCONFIRMPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowThirdPartyOAuthPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPhoneRegisterPluginUI(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_SHOWPHONEREGISTERPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsShowGuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUILOGINSERVICE_ISSHOWGUEST_OFFSET))(this);
		}

	};
}
