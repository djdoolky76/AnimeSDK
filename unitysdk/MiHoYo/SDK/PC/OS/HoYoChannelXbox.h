#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannel.h"
#include "unitysdk/MiHoYo/SDK/ReportStage.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/System/DateTime.h"
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF8D840)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKCOLLECTIONSIDVALIDITY_OFFSET UNITYSDK_OFFSET(0x1BF8CE30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1BF8B250)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKREGION_OFFSET UNITYSDK_OFFSET(0x1BF890D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKTOKENVALIDITY_OFFSET UNITYSDK_OFFSET(0x1BF8C500)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF8D7B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSUREAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x1BF8B440)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSURECOLLECTIONSID_OFFSET UNITYSDK_OFFSET(0x1BF8CC70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BF89840)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETACCOUNTCOUNTRY_OFFSET UNITYSDK_OFFSET(0x1BF8B710)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BF88E50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETDEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1BF8A010)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BF89990)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETRETRIEVETOKENKEY_OFFSET UNITYSDK_OFFSET(0x1BF8B950)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETSANDBOXID_OFFSET UNITYSDK_OFFSET(0x1BF8B660)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1BF8B5C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1BF8B520)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_HANDLECOLLECTIONSIDERROR_OFFSET UNITYSDK_OFFSET(0x1BF8CF00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_INIT_OFFSET UNITYSDK_OFFSET(0x1BF88E70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ISHANDHELD_OFFSET UNITYSDK_OFFSET(0x1BF896E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOADSTORAGETOKEN_OFFSET UNITYSDK_OFFSET(0x1BF892B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_1_OFFSET UNITYSDK_OFFSET(0x1BF89980)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BF896F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_1_OFFSET UNITYSDK_OFFSET(0x1BF8A120)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BF8A300)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BF8C130)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BF8AD80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BF8C320)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_OPENXBOXCHECKOUT_OFFSET UNITYSDK_OFFSET(0x1BF8B9C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_PAY_OFFSET UNITYSDK_OFFSET(0x1BF8A550)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_QUERYPRODUCTANDPAY_OFFSET UNITYSDK_OFFSET(0x1BF8AFB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTDETECTPAY_OFFSET UNITYSDK_OFFSET(0x1BF8D520)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTRETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1BF8C5B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_RESET_OFFSET UNITYSDK_OFFSET(0x1BF8B7C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SAVETOKENTOSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BF8D1B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SCHEDULEDETECTPAYPOLLING_OFFSET UNITYSDK_OFFSET(0x1BF8BBB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SDKREPORTPAY_OFFSET UNITYSDK_OFFSET(0x1BF8BF60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_STARTPAYMENTFLOW_OFFSET UNITYSDK_OFFSET(0x1BF8B0F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BF88E60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_0_OFFSET UNITYSDK_OFFSET(0x1BF8DDB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_1_OFFSET UNITYSDK_OFFSET(0x1BF8DE70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__INIT_B__24_0_OFFSET UNITYSDK_OFFSET(0x1BF8D8E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_0_OFFSET UNITYSDK_OFFSET(0x1BF8DEF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_1_OFFSET UNITYSDK_OFFSET(0x1BF8DF00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_2_OFFSET UNITYSDK_OFFSET(0x1BF8DF10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox_TypeDefinitionIndex = 8655;

	class HoYoChannelXbox : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		::System::String* _xuid; // 0x10
		::System::String* _sandboxId; // 0x18
		::System::String* _collectionsId; // 0x20
		::System::String* _countryCode; // 0x28
		::MiHoYo::SDK::PC::OS::XboxPayInfo* _currentPayInfo; // 0x30
		::System::String* _gamertag; // 0x38
		::System::String* _authToken; // 0x40
		::System::Action_1<::System::String*>* _payCallback; // 0x48
		::System::DateTime _authTokenGenerateTime; // 0x50
		::System::Int32 _collectionsIdRetryTimes; // 0x58
		::System::Boolean _isChannelDllAvailable; // 0x5C
		::System::Boolean _isCollectionsIdRetry; // 0x5D
		::System::Byte _padding0[0x2];
		::System::DateTime _collectionsIdGenerateTime; // 0x60
		::System::Boolean _isPaying; // 0x68
		::System::Boolean _isRegionPurchaseSupported; // 0x69
		::System::Boolean _isXboxHandheld; // 0x6A
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelXbox")->GetStaticField(0x14560);
		}

		// static const ::System::Object AUTH_TOKEN_EXPIRED_DAYS; // 0x0
		// static const ::System::String* RETRIEVE_TOKEN_KEY; // 0x0
		// static const ::System::Object MAX_RETRY_TIMES; // 0x0
		// static const ::System::Object RETRY_INTERVAL_SECONDS; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::SubChannelType GetChannel()
		{
			return ((::MiHoYo::SDK::SubChannelType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETCHANNEL_OFFSET))(this);
		}

		::System::Boolean UseHoYoChannel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_USEHOYOCHANNEL_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_INIT_OFFSET))(this);
		}

		::System::Boolean IsHandheld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ISHANDHELD_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_OFFSET))(this, a1, a2);
		}

		::System::Void Login_1(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOGIN_1_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERNAME_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETUSERID_OFFSET))(this);
		}

		::System::String* GetSandboxId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETSANDBOXID_OFFSET))(this);
		}

		::System::String* GetAccountCountry()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETACCOUNTCOUNTRY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_RESET_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError_1(::System::Action_1<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONGETPRODUCTLISTERROR_1_OFFSET))(this, a1, a2);
		}

		::System::Void QueryProductAndPay(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_QUERYPRODUCTANDPAY_OFFSET))(this, a1);
		}

		::System::Void StartPaymentFlow(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_STARTPAYMENTFLOW_OFFSET))(this, a1);
		}

		::System::Void OpenXboxCheckout(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_OPENXBOXCHECKOUT_OFFSET))(this, a1);
		}

		::System::Void ScheduleDetectPayPolling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SCHEDULEDETECTPAYPOLLING_OFFSET))(this);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::MiHoYo::SDK::PC::OS::XboxPayInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackCancel(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKCANCEL_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackSuccess(::MiHoYo::SDK::PC::OS::XboxPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ONPAYCALLBACKSUCCESS_OFFSET))(this, a1);
		}

		::System::Void EnsureAuthToken(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSUREAUTHTOKEN_OFFSET))(this, a1);
		}

		::System::Void RequestRetrieveToken(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTRETRIEVETOKEN_OFFSET))(this, a1);
		}

		::System::Void EnsureCollectionsId(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_ENSURECOLLECTIONSID_OFFSET))(this, a1, a2);
		}

		::System::Void HandleCollectionsIdError(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_HANDLECOLLECTIONSIDERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetRetrieveTokenKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETRETRIEVETOKENKEY_OFFSET))(this);
		}

		::System::Void LoadStorageToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_LOADSTORAGETOKEN_OFFSET))(this);
		}

		::System::Void SaveTokenToStorage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SAVETOKENTOSTORAGE_OFFSET))(this, a1);
		}

		::System::Boolean CheckTokenValidity(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKTOKENVALIDITY_OFFSET))(this, a1);
		}

		::System::Boolean CheckCollectionsIdValidity(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKCOLLECTIONSIDVALIDITY_OFFSET))(this, a1);
		}

		::System::Void CheckRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_CHECKREGION_OFFSET))(this);
		}

		::System::Void RequestDetectPay(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_REQUESTDETECTPAY_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::JSONObject* GetDefaultBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_GETDEFAULTBODY_OFFSET))();
		}

		::System::Void SDKReportPay(::MiHoYo::SDK::ReportStage a1, ::MiHoYo::SDK::PC::OS::XboxPayInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::PC::OS::XboxPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX_SDKREPORTPAY_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__24_0(::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__INIT_B__24_0_OFFSET))(this, a1);
		}

		::System::Void _CheckEntitlements_b__30_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_0_OFFSET))(this, a1);
		}

		::System::Void _CheckEntitlements_b__30_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__CHECKENTITLEMENTS_B__30_1_OFFSET))(this, a1);
		}

		::System::Void _ScheduleDetectPayPolling_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_0_OFFSET))(this);
		}

		::System::Void _ScheduleDetectPayPolling_b__42_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_1_OFFSET))(this);
		}

		::System::Void _ScheduleDetectPayPolling_b__42_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX__SCHEDULEDETECTPAYPOLLING_B__42_2_OFFSET))(this);
		}

	};
}
