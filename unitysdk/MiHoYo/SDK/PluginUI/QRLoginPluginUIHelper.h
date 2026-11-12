#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PluginUI { class QRLoginPluginUIHelper; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12F130)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12D800)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D12D810)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_HIDE_OFFSET UNITYSDK_OFFSET(0x1D12DAE0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_ISUSINGPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D12D900)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12DB90)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADINGELEMENETS_OFFSET UNITYSDK_OFFSET(0x1D12E6D0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADSUCCESSELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12E9A0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGININGELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12EE60)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D12E6C0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERRORELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12E780)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0x1D12E600)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWOVERDUEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12EA50)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODELOADING_OFFSET UNITYSDK_OFFSET(0x1D12DB80)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODEOVERDUE_OFFSET UNITYSDK_OFFSET(0x1D12E6A0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x1D12E610)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12EC00)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSSWITCHACCOUNTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12EDB0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D12E6B0)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSUPPORTSCANELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D12EF10)
#define MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOW_OFFSET UNITYSDK_OFFSET(0x1D12D980)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int QRLoginPluginUIHelper_TypeDefinitionIndex = 9150;

	class QRLoginPluginUIHelper : public ::System::Object
	{
	public:
		::System::String* m_strUIName; // 0x10
		static ::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "QRLoginPluginUIHelper")->GetStaticField(0x19920);
		}

		// static const ::System::Object LOADING_PLACEHOLDER; // 0x0
		// static const ::System::Object NETWORK_ERROR_PLACEHOLDER; // 0x0
		// static const ::System::Object LOAD_SUCCESS_PLACEHOLDER; // 0x0
		// static const ::System::Object OVERDUE_PLACEHOLDER; // 0x0
		// static const ::System::Object SCAN_SUCCESS_PLACEHOLDER; // 0x0
		// static const ::System::Object SCAN_SUCCESS_SWITCH_PLACEHOLDER; // 0x0
		// static const ::System::Object LOGINING_PLACEHOLDER; // 0x0
		// static const ::System::Object SUPPORT_SCAN_PLACEHOLDER; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::QRLoginPluginUIHelper*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_GETINSTANCE_OFFSET))();
		}

		::System::Boolean IsUsingPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_ISUSINGPLUGINUI_OFFSET))(this);
		}

		::System::Void Show(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_HIDE_OFFSET))(this);
		}

		::System::Void ShowQRCodeLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODELOADING_OFFSET))(this);
		}

		::System::Void ShowNetworkError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERROR_OFFSET))(this);
		}

		::System::Void ShowQRCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODE_OFFSET))(this, a1);
		}

		::System::Void ShowQRCodeOverdue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWQRCODEOVERDUE_OFFSET))(this);
		}

		::System::Void ShowScanSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESS_OFFSET))(this);
		}

		::System::Void ShowLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void ShowElements(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWELEMENTS_OFFSET))(this, a1);
		}

		::System::Void ShowLoadingElemenets(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADINGELEMENETS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowNetworkErrorElements(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWNETWORKERRORELEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowLoadSuccessElements(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOADSUCCESSELEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowOverdueElements(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWOVERDUEELEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowScanSuccessElements(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSELEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowScanSuccessSwitchAccountElements(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSCANSUCCESSSWITCHACCOUNTELEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowLoginingElements(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWLOGININGELEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowSupportScanElements(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_QRLOGINPLUGINUIHELPER_SHOWSUPPORTSCANELEMENTS_OFFSET))(this, a1, a2, a3);
		}

	};
}
