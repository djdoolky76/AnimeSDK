#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/OldPayPlat.h"
#include "unitysdk/MiHoYo/SDK/PayDialogType.h"
#include "unitysdk/MiHoYo/SDK/PayVendor.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::Win { class OverseaPayManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x195E8110)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKORDER_OFFSET UNITYSDK_OFFSET(0x195E16B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x195E26A0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLICKPAYBUTTON_OFFSET UNITYSDK_OFFSET(0x195DFBF0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEADYENACTION_OFFSET UNITYSDK_OFFSET(0x195E8030)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x195E2580)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x195E0240)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATORDER_OFFSET UNITYSDK_OFFSET(0x195E0680)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x195E8100)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETADYENPAYURL_OFFSET UNITYSDK_OFFSET(0x195E5350)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETCREATEORDERMODEL_OFFSET UNITYSDK_OFFSET(0x195E2BB0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETOLDPAYURL_OFFSET UNITYSDK_OFFSET(0x195E4850)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETPAYVENDOR_OFFSET UNITYSDK_OFFSET(0x195DB810)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTDIC_OFFSET UNITYSDK_OFFSET(0x195DB8C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x195DBA30)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEADYENPAY_OFFSET UNITYSDK_OFFSET(0x195DF7C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x195DF220)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_LISTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x195DD850)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x195E71E0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x195E6E70)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x195E71F0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCHECKORDER_OFFSET UNITYSDK_OFFSET(0x195E1BC0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCLICKESCAPE_OFFSET UNITYSDK_OFFSET(0x195E80B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETPAYPLAT_OFFSET UNITYSDK_OFFSET(0x195DDE20)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x195E25B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYAGELIMITWEBMESSAGE_OFFSET UNITYSDK_OFFSET(0x195E15C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x195DF270)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x195DCFA0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x195E0400)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONREDIRECTWEBBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x195E7E40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_OPENAGELIMITWEBPASSPORT_OFFSET UNITYSDK_OFFSET(0x195E0F60)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAYDIALOGSUCCESS_OFFSET UNITYSDK_OFFSET(0x195E2540)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x195DBA80)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTADYENCREATEORDER_OFFSET UNITYSDK_OFFSET(0x195DD4C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTCREATEORDER_OFFSET UNITYSDK_OFFSET(0x195E0120)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x195DD7D0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTQUERYORDERSTATUS_OFFSET UNITYSDK_OFFSET(0x195E1630)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SAVEPAYVENDOR_OFFSET UNITYSDK_OFFSET(0x195DB730)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOULDCLOSEPAYAGELIMITNEWFLOW_OFFSET UNITYSDK_OFFSET(0x195E1490)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENACTION_OFFSET UNITYSDK_OFFSET(0x195E79E0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENERROR_OFFSET UNITYSDK_OFFSET(0x195E6FC0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENPAY_OFFSET UNITYSDK_OFFSET(0x195E6620)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWLOGININVALIDDIALOG_OFFSET UNITYSDK_OFFSET(0x195E13C0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITLEGACY_OFFSET UNITYSDK_OFFSET(0x195E0B60)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITNEWFLOW_OFFSET UNITYSDK_OFFSET(0x195E0980)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMIT_OFFSET UNITYSDK_OFFSET(0x195E0840)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYDIALOG_OFFSET UNITYSDK_OFFSET(0x195DF040)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__ONCHECKORDER_B__48_0_OFFSET UNITYSDK_OFFSET(0x195E8160)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_0_OFFSET UNITYSDK_OFFSET(0x195E81B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_1_OFFSET UNITYSDK_OFFSET(0x195E8580)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager_TypeDefinitionIndex = 9347;

	class OverseaPayManager : public ::System::Object
	{
	public:
		::System::String* adyenJwtToken; // 0x10
		::MiHoYo::SDK::Web* redirectWeb; // 0x18
		::System::String* cluster; // 0x20
		::MiHoYo::SDK::Web* payWeb; // 0x28
		::MiHoYo::SDK::JSONObject* payVendors; // 0x30
		::MiHoYo::SDK::JSONObject* reportExtra; // 0x38
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x40
		::UnityEngine::Coroutine* payWebCoroutine; // 0x48
		::System::String* payLifecycleId; // 0x50
		::System::Action_1<::System::String*>* payCallback; // 0x58
		::System::String* adyenPayUrl; // 0x60
		::System::String* orderNumber; // 0x68
		::MiHoYo::SDK::OldPayPlat nativePayPlat; // 0x70
		::MiHoYo::SDK::PayDialogType payDialogType; // 0x74
		static ::MiHoYo::SDK::Win::OverseaPayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaPayManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "OverseaPayManager")->GetStaticField(0x1E6D0);
		}

		// static const ::System::String* PayVendorInfo; // 0x0
		// static const ::System::Object CreateOrderTimeoutSeconds; // 0x0
		// static const ::System::String* EVT_KEY_LIFECYCLEID; // 0x0
		// static const ::System::String* EVT_KEY_ORDERID; // 0x0
		// static const ::System::String* EVT_KEY_GOODSID; // 0x0
		// static const ::System::String* EVT_KEY_CURRENCY; // 0x0
		// static const ::System::String* EVT_KEY_AMOUNT; // 0x0
		// static const ::System::String* EVT_KEY_CREATEORDER_RETCODE; // 0x0
		// static const ::System::String* EVT_KEY_CREATEORDER_MESSAGE; // 0x0
		// static const ::System::String* EVT_KEY_CHECKORDER_RETCODE; // 0x0
		// static const ::System::String* EVT_KEY_CHECKORDER_MESSAGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CCTOR_OFFSET))();
		}

		::System::Void SavePayVendor(::MiHoYo::SDK::PayVendor a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayVendor))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SAVEPAYVENDOR_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::PayVendor GetPayVendor()
		{
			return ((::MiHoYo::SDK::PayVendor(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETPAYVENDOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* GetReportDic()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTDIC_OFFSET))(this);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETREPORTTYPE_OFFSET))(this);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void RequestPayPlat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTPAYPLAT_OFFSET))(this);
		}

		::System::Void OnGetPayPlat(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETPAYPLAT_OFFSET))(this, a1);
		}

		::System::Void ShowPayDialog(::MiHoYo::SDK::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYDIALOG_OFFSET))(this, a1);
		}

		::System::Void HidePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEPAYDIALOG_OFFSET))(this);
		}

		::System::Void ClickPayButton(::MiHoYo::SDK::PayVendor a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PayVendor))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLICKPAYBUTTON_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void RequestCreateOrder(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTCREATEORDER_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPayAgeLimit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMIT_OFFSET))(this, a1);
		}

		::System::Void ShowPayAgeLimitLegacy(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITLEGACY_OFFSET))(this, a1);
		}

		::System::Void ShowPayAgeLimitNewFlow(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWPAYAGELIMITNEWFLOW_OFFSET))(this, a1);
		}

		::System::Void OpenAgeLimitWebPassport(::System::String* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_OPENAGELIMITWEBPASSPORT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowLoginInvalidDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWLOGININVALIDDIALOG_OFFSET))(this);
		}

		::System::Boolean ShouldClosePayAgeLimitNewFlow(::MiHoYo::SDK::UniWebViewMessage a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOULDCLOSEPAYAGELIMITNEWFLOW_OFFSET))(this, a1);
		}

		::System::Void OnPayAgeLimitWebMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONPAYAGELIMITWEBMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RequestQueryOrderStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTQUERYORDERSTATUS_OFFSET))(this);
		}

		::System::Void OnCheckOrder(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCHECKORDER_OFFSET))(this, a1);
		}

		::System::Void PayDialogSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_PAYDIALOGSUCCESS_OFFSET))(this);
		}

		::System::Void ClosePayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEPAYDIALOG_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckParameters(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ListPayPlat(::MiHoYo::SDK::JSONNode* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_LISTPAYPLAT_OFFSET))(this, a1, a2);
		}

		::System::Void CreatOrder(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3, ::MiHoYo::SDK::JSONNode* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CREATORDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CheckOrder(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CHECKORDER_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONObject* GetCreateOrderModel(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETCREATEORDERMODEL_OFFSET))(this, a1, a2);
		}

		::System::String* GetOldPayURL(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETOLDPAYURL_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetAdyenPayURL(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_GETADYENPAYURL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowAdyenPay(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENPAY_OFFSET))(this, a1);
		}

		::System::Void HideAdyenPay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_HIDEADYENPAY_OFFSET))(this);
		}

		::System::Void OnAdyenPayTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAYTIMEOUT_OFFSET))(this);
		}

		::System::Void ShowAdyenError(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENERROR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnAdyenPageClose(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnAdyenUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONADYENUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RequestAdyenCreateOrder(::MiHoYo::SDK::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_REQUESTADYENCREATEORDER_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAdyenAction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_SHOWADYENACTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnRedirectWebBeforeNavigationMessage(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONREDIRECTWEBBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void CloseAdyenAction(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_CLOSEADYENACTION_OFFSET))(this, a1);
		}

		::System::Void OnClickEscape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER_ONCLICKESCAPE_OFFSET))(this);
		}

		::System::Void _OnCheckOrder_b__48_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__ONCHECKORDER_B__48_0_OFFSET))(this);
		}

		::System::Void _ShowAdyenAction_b__67_0(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAdyenAction_b__67_1(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::Web* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER__SHOWADYENACTION_B__67_1_OFFSET))(this, a1, a2);
		}

	};
}
