#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AgeGateInfoType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AuthTicketLoginType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_EventId.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_LoginType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_Region.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ThirdpartyLoginMethod.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_TokenType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_EventHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_GetTokenResultHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_KibanaReportHandlerDelegate; }
namespace MiHoYo::SDK::HoYoPass { class HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D371F80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1D371A80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTRISKCHECK_OFFSET UNITYSDK_OFFSET(0x1D371730)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1D3718D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYLOGIN_OFFSET UNITYSDK_OFFSET(0x1D370C60)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1D370A90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1D371C30)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_AUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x1D370580)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D371EB0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1D3719A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUERISKCHECK_OFFSET UNITYSDK_OFFSET(0x1D371650)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1D371800)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1D371B50)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D371490)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEALLACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1D373EC0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0x1D374380)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_FROMUTF8_OFFSET UNITYSDK_OFFSET(0x1D374730)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D370EF0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D370FE0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1D3710D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1D373460)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATESTAUTS_OFFSET UNITYSDK_OFFSET(0x1D371D00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATEVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1D373060)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1D374600)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETEMAILBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1D373860)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETFORGOTPASSWORDURL_OFFSET UNITYSDK_OFFSET(0x1D3724F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGISTERACCOUNTURL_OFFSET UNITYSDK_OFFSET(0x1D372130)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETSECURITYVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1D372CA0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1D3728B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETUSERCENTERURL_OFFSET UNITYSDK_OFFSET(0x1D373F90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D36ED80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1D36EA70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTRISKCHECK_OFFSET UNITYSDK_OFFSET(0x1D36E870)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1D36E970)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYLOGIN_OFFSET UNITYSDK_OFFSET(0x1D36E320)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1D36E210)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1D36EB70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_AUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x1D36DFB0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1D36ED00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEREACTIVATION_OFFSET UNITYSDK_OFFSET(0x1D36E9F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUERISKCHECK_OFFSET UNITYSDK_OFFSET(0x1D36E7F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1D36E8F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1D36EAF0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D36E6F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEALLACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1D36F530)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_EXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0x1D36F720)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D36E530)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D36E5B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1D36E630)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1D36F330)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATESTATUS_OFFSET UNITYSDK_OFFSET(0x1D36EBF0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATEVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1D36F180)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1D36F7F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETEMAILBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1D36F270)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETFORGOTPASSWORDURL_OFFSET UNITYSDK_OFFSET(0x1D36EF40)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETREGISTERACCOUNTURL_OFFSET UNITYSDK_OFFSET(0x1D36EE80)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETSECURITYVERIFICATIONURL_OFFSET UNITYSDK_OFFSET(0x1D36F0C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET UNITYSDK_OFFSET(0x1D36F000)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETUSERCENTERURL_OFFSET UNITYSDK_OFFSET(0x1D36F640)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D36DE10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1D36E430)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D36E030)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x1D36E0E0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x1D36E3A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1D36E290)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1D36EE00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_MIGRATEACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1D36F4B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_REFRESHCURRENTACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1D36F890)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D36E4B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D36F920)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36F9B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETKIBANAREPORTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36F420)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETLIFECYCLEID_OFFSET UNITYSDK_OFFSET(0x1D36E770)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_STARTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1D36E180)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D36DEB0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATEAGEGATEUSERDATA_OFFSET UNITYSDK_OFFSET(0x1D36EC70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x1D36DF30)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTREGION_OFFSET UNITYSDK_OFFSET(0x1D36FA40)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTTOKEN_OFFSET UNITYSDK_OFFSET(0x1D36F5B0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D36FF60)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1D370D30)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D370650)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYAUTHTICKET_OFFSET UNITYSDK_OFFSET(0x1D370760)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x1D370860)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1D370B70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1D372050)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_MIGRATEACCOUNTS_OFFSET UNITYSDK_OFFSET(0x1D373DE0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36D800)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEXCHANGETOKENRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36DBA0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETCROSSTOKENURLBYSTOKENRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36DD40)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36D970)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEKIBANAREPORTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36D8C0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEREFRESHACCOUNTINFORESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36DC70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVETHIRDPARTYOAUTHRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36DAD0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHCURRENTACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1D3744F0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETACCOUNTLISTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D370E10)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36FAC0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36FD40)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETH5LOGREPORTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D36FB20)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETLIFECYCLEID_OFFSET UNITYSDK_OFFSET(0x1D371570)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_STARTTHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1D370980)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_TOUTF8_OFFSET UNITYSDK_OFFSET(0x1D370190)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D3703D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATEAGEGATEUSERDATA_OFFSET UNITYSDK_OFFSET(0x1D371DD0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x1D3704A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTREGION_OFFSET UNITYSDK_OFFSET(0x1D373D00)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTTOKEN_OFFSET UNITYSDK_OFFSET(0x1D373C20)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D374940)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D374930)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_TypeDefinitionIndex = 19538;

	class HoYoPassSDK : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Object*, ::System::String*>** StaticGet_ThirdpartyOAuthResultHandler()
		{
			return (::System::Action_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA10);
		}
		static ::System::Action_2<::System::Object*, ::System::String*>** StaticGet_ExchangeTokenResultHandler()
		{
			return (::System::Action_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA18);
		}
		static ::System::Action_2<::System::Object*, ::System::String*>** StaticGet_EventHandler()
		{
			return (::System::Action_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA20);
		}
		static ::System::Action_1<::System::String*>** StaticGet_KibanaReportHandler()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA28);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_GetRegionSwitchStatusHandler()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA30);
		}
		static ::System::Action_2<::System::Object*, ::System::String*>** StaticGet_RefreshAccountInfoResultHandler()
		{
			return (::System::Action_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA38);
		}
		static ::System::Action_2<::System::Object*, ::System::String*>** StaticGet_GetCrossTokenUrlBySTokenResultHandler()
		{
			return (::System::Action_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA40);
		}
		static ::System::String** StaticGet_MODULE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HoYoPassSDK_TypeDefinitionIndex)->GetStaticField(0xAA48);
		}
		// static const ::System::String* dllName; // 0x0
		// static const ::System::String* AIGIS; // 0x0
		// static const ::System::String* VERIFY; // 0x0
		// static const ::System::String* REACTIVATE_ACTION_TICKET; // 0x0
		// static const ::System::String* BIND_EMAIL_ACTION_TICKET; // 0x0
		// static const ::System::String* AGE_GATE_TIME; // 0x0
		// static const ::System::String* AGE_GATE_REGION; // 0x0
		// static const ::System::String* AGE_GATE_TICKET_TYPE; // 0x0
		// static const ::System::String* AGE_GATE_PAYLOAD; // 0x0
		// static const ::System::String* AGE_GATE_STAGE; // 0x0
		// static const ::System::String* AGE_GATE_TICKET; // 0x0
		// static const ::System::String* AID; // 0x0
		// static const ::System::String* MID; // 0x0
		// static const ::System::String* EMAIL; // 0x0
		// static const ::System::String* ACCOUNT_NAME; // 0x0
		// static const ::System::String* LOGIN_TIMESTAMP; // 0x0
		// static const ::System::String* LOGIN_TYPE; // 0x0
		// static const ::System::String* REPORT_ACTION_ID; // 0x0
		// static const ::System::String* REPORT_TYPE; // 0x0
		// static const ::System::String* REPORT_STAGE; // 0x0
		// static const ::System::String* REPORT_DATA; // 0x0
		// static const ::System::String* USER_AGREED_SAVE_ACCOUNT; // 0x0
		// static const ::System::String* STOKEN; // 0x0
		// static const ::System::String* ACCOUNT_INFO; // 0x0
		// static const ::System::String* IS_EMAIL_VERIFY; // 0x0
		// static const ::System::String* AREA_CODE; // 0x0
		// static const ::System::String* MOBILE; // 0x0
		// static const ::System::String* ACCESS_TOKEN; // 0x0
		// static const ::System::String* IS_LOGGED_IN; // 0x0
		// static const ::System::String* EXTRA_DATA; // 0x0
		// static const ::System::String* GAME_TOKEN; // 0x0
		// static const ::System::String* COUNTRY; // 0x0
		// static const ::System::String* REAL_NAME; // 0x0
		// static const ::System::String* IDENTITY_CARD; // 0x0
		// static const ::System::String* LOG_STRATEGY; // 0x0
		// static const ::System::String* BIND_THIRDPARTY_ACTION_TICKET; // 0x0
		// static const ::System::String* FORCE_THIRDPARTY_BIND_EMAIL; // 0x0
		// static const ::System::String* REGION; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_UID; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_MID; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_ACCOUNT; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_IS_LOGIN; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_LOGIN_TYPE; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_STOKEN; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_AGREE_PERSISTENT_LOGIN_DATA; // 0x0
		// static const ::System::String* EXTERNAL_WEB_LOGIN_LRSAG; // 0x0
		// static const ::System::Int32 ACCOUNT_LIST_DEFAULT_LEN = 0x400; // 0x0
		// static const ::System::Int32 WEBPAGE_URL_DEFAULT_LEN = 0x400; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_Initialize(::Il2CppArray<::System::Byte>* config, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventHandlerDelegate* event_handler, ::System::IntPtr context)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventHandlerDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_INITIALIZE_OFFSET))(config, event_handler, context);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_Uninitialize()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UNINITIALIZE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateConfig(::Il2CppArray<::System::Byte>* config)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECONFIG_OFFSET))(config);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AutoLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_AUTOLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByAccount(::Il2CppArray<::System::Byte>* account, ::Il2CppArray<::System::Byte>* psw, ::System::Boolean is_encrypted, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType login_type)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNT_OFFSET))(account, psw, is_encrypted, login_type);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByAuthTicket(::Il2CppArray<::System::Byte>* auth_ticket, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType account_login_type, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType auth_ticket_login_type, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region region)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYAUTHTICKET_OFFSET))(auth_ticket, account_login_type, auth_ticket_login_type, region);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_StartThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate* handler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_STARTTHIRDPARTYOAUTH_OFFSET))(method, handler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYOAUTH_OFFSET))(method);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByThirdparty(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method, ::Il2CppArray<::System::Byte>* third_token, ::System::Boolean auto_register)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYTHIRDPARTY_OFFSET))(method, third_token, auto_register);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortThirdpartyLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByGameToken(::System::UInt64 aid, ::Il2CppArray<::System::Byte>* game_token, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType login_type)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt64, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYGAMETOKEN_OFFSET))(aid, game_token, login_type);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_LoginByAccountList(::Il2CppArray<::System::Byte>* aid)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGINBYACCOUNTLIST_OFFSET))(aid);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetAccountListCapacity(::System::UInt32 capacity)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETACCOUNTLISTCAPACITY_OFFSET))(capacity);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAccountListCapacity(::System::UInt32& capacity)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCAPACITY_OFFSET))(capacity);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAccountListCount(::System::UInt32& count)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLISTCOUNT_OFFSET))(count);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAccountList(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETACCOUNTLIST_OFFSET))(buffer, buffer_size, out_size);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_DeleteAccount(::Il2CppArray<::System::Byte>* aid)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEACCOUNT_OFFSET))(aid);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetLifecycleId(::Il2CppArray<::System::Byte>* id)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETLIFECYCLEID_OFFSET))(id);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueRiskCheck(::Il2CppArray<::System::Byte>* data)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUERISKCHECK_OFFSET))(data);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortRiskCheck()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTRISKCHECK_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueReactivation(::Il2CppArray<::System::Byte>* reactivate_ticket)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEREACTIVATION_OFFSET))(reactivate_ticket);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortReactivation()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTREACTIVATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueVerification(::Il2CppArray<::System::Byte>* data)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEVERIFICATION_OFFSET))(data);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortVerification()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTVERIFICATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAgeGateStatus()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATESTATUS_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateAgeGateUserData(::Il2CppArray<::System::Byte>* update_data, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType update_type)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATEAGEGATEUSERDATA_OFFSET))(update_data, update_type);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ContinueAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_CONTINUEAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_AbortAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_ABORTAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_Logout(::System::Boolean delete_account, ::System::Boolean send_save_account_email)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_LOGOUT_OFFSET))(delete_account, send_save_account_email);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetRegisterAccountUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETREGISTERACCOUNTURL_OFFSET))(buffer, buffer_size, out_size);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetForgotPasswordUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETFORGOTPASSWORDURL_OFFSET))(buffer, buffer_size, out_size);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetThirdpartyAccountBindingUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size, ::System::Boolean force_binding)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET))(buffer, buffer_size, out_size, force_binding);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetSecurityVerificationUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETSECURITYVERIFICATIONURL_OFFSET))(buffer, buffer_size, out_size);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAgeGateVerificationUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size, ::Il2CppArray<::System::Byte>* age_gate_payload, ::Il2CppArray<::System::Byte>* age_gate_region)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEGATEVERIFICATIONURL_OFFSET))(buffer, buffer_size, out_size, age_gate_payload, age_gate_region);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetEmailBindingUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETEMAILBINDINGURL_OFFSET))(buffer, buffer_size, out_size);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetAgeAppealUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size, ::Il2CppArray<::System::Byte>* age_gate_payload, ::Il2CppArray<::System::Byte>* age_gate_region)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETAGEAPPEALURL_OFFSET))(buffer, buffer_size, out_size, age_gate_payload, age_gate_region);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetKibanaReportHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_KibanaReportHandlerDelegate* handler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_KibanaReportHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETKIBANAREPORTHANDLER_OFFSET))(handler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_MigrateAccounts(::Il2CppArray<::System::Byte>* account_list_str)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_MIGRATEACCOUNTS_OFFSET))(account_list_str);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_DeleteAllAccounts()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_DELETEALLACCOUNTS_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateCurrentAccountToken(::Il2CppArray<::System::Byte>* token, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType token_type)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTTOKEN_OFFSET))(token, token_type);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetUserCenterUrl(::System::Text::StringBuilder* buffer, ::System::UInt64 buffer_size, ::System::UInt64& out_size, ::System::Boolean is_guest, ::Il2CppArray<::System::Byte>* bind_plat_list)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Text::StringBuilder*, ::System::UInt64, ::System::UInt64&, ::System::Boolean, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETUSERCENTERURL_OFFSET))(buffer, buffer_size, out_size, is_guest, bind_plat_list);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_ExchangeToken(::Il2CppArray<::System::Byte>* token, ::Il2CppArray<::System::Byte>* id, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType src_token_type, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType target_token_type, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate* result_handler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetTokenResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_EXCHANGETOKEN_OFFSET))(token, id, src_token_type, target_token_type, result_handler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_GetCrossTokenUrlBySToken(::Il2CppArray<::System::Byte>* dest_url, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate* result_handler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetCrossTokenUrlBySTokenResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_GETCROSSTOKENURLBYSTOKEN_OFFSET))(dest_url, result_handler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_RefreshCurrentAccountInfo(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate* handler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_RefreshAccountInfoResultHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_REFRESHCURRENTACCOUNTINFO_OFFSET))(handler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetCurrentAccount(::Il2CppArray<::System::Byte>* buffer, ::System::UInt64 buffer_size)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETCURRENTACCOUNT_OFFSET))(buffer, buffer_size);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_SetGetRegionSwitchStatusHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate* handler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET))(handler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode HoYoPass_UpdateCurrentAccountRegion(::Il2CppArray<::System::Byte>* region)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_HOYOPASS_UPDATECURRENTACCOUNTREGION_OFFSET))(region);
		}

		static ::System::Void SetEventHandler(::System::Action_2<::System::Object*, ::System::String*>* eventHandler)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETEVENTHANDLER_OFFSET))(eventHandler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetH5logReportHandler(::System::Action_1<::System::String*>* h5logReportHandler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETH5LOGREPORTHANDLER_OFFSET))(h5logReportHandler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetGetRegionSwitchStatusHandler(::System::Func_1<::System::Boolean>* getRegionSwitchStatusHandler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETGETREGIONSWITCHSTATUSHANDLER_OFFSET))(getRegionSwitchStatusHandler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode Initialize(::System::String* config)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_INITIALIZE_OFFSET))(config);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode Uninitialize()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UNINITIALIZE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateConfig(::System::String* configStr)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECONFIG_OFFSET))(configStr);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AutoLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_AUTOLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByAccount(::System::String* account, ::System::String* pwd, ::System::Boolean isEncrypted, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType loginType)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::String*, ::System::Boolean, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNT_OFFSET))(account, pwd, isEncrypted, loginType);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByAuthTicket(::System::String* authTicket, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType accountLoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType authTicketLoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region region)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AuthTicketLoginType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_Region))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYAUTHTICKET_OFFSET))(authTicket, accountLoginType, authTicketLoginType, region);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByGameToken(::System::String* aid, ::System::String* gameToken, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType loginType)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_LoginType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYGAMETOKEN_OFFSET))(aid, gameToken, loginType);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode StartThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method, ::System::Action_2<::System::Object*, ::System::String*>* onOAuthCompleted)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::System::Action_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_STARTTHIRDPARTYOAUTH_OFFSET))(method, onOAuthCompleted);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortThirdpartyOAuth(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYOAUTH_OFFSET))(method);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByThirdparty(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method, ::System::String* accessToken, ::System::Boolean autoRegister)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYTHIRDPARTY_OFFSET))(method, accessToken, autoRegister);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortThirdpartyLogin()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYLOGIN_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode LoginByAccountList(::System::String* aid)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGINBYACCOUNTLIST_OFFSET))(aid);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetAccountListCapacity(::System::UInt32 capacity)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETACCOUNTLISTCAPACITY_OFFSET))(capacity);
		}

		static ::System::UInt32 GetAccountListCapacity()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCAPACITY_OFFSET))();
		}

		static ::System::UInt32 GetAccountListCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLISTCOUNT_OFFSET))();
		}

		static ::System::String* GetAccountList()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETACCOUNTLIST_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode DeleteAccount(::System::String* accountId)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEACCOUNT_OFFSET))(accountId);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode SetLifecycleId(::System::String* lifecycleId)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_SETLIFECYCLEID_OFFSET))(lifecycleId);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueRiskCheck(::System::String* aigisData)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUERISKCHECK_OFFSET))(aigisData);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortRiskCheck()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTRISKCHECK_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUETHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortThirdpartyAccountBinding()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTTHIRDPARTYACCOUNTBINDING_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueReactivation(::System::String* reactivateTicket)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEREACTIVATION_OFFSET))(reactivateTicket);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortReactivation()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTREACTIVATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueVerification(::System::String* verificationData)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEVERIFICATION_OFFSET))(verificationData);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortVerification()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTVERIFICATION_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode GetAgeGateStauts()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATESTAUTS_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateAgeGateUserData(::System::String* userData, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType dataType)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATEAGEGATEUSERDATA_OFFSET))(userData, dataType);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ContinueAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_CONTINUEAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode AbortAgeGate()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_ABORTAGEGATE_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode Logout(::System::Boolean deleteAccount, ::System::Boolean sendEmailNotification)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_LOGOUT_OFFSET))(deleteAccount, sendEmailNotification);
		}

		static ::System::String* GetRegisterAccountUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGISTERACCOUNTURL_OFFSET))();
		}

		static ::System::String* GetForgotPasswordUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETFORGOTPASSWORDURL_OFFSET))();
		}

		static ::System::String* GetThirdpartyAccountBindingUrl(::System::Boolean forceBinding)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETTHIRDPARTYACCOUNTBINDINGURL_OFFSET))(forceBinding);
		}

		static ::System::String* GetSecurityVerificationUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETSECURITYVERIFICATIONURL_OFFSET))();
		}

		static ::System::String* GetAgeGateVerificationUrl(::System::String* payload, ::System::String* region)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEGATEVERIFICATIONURL_OFFSET))(payload, region);
		}

		static ::System::String* GetAgeAppealUrl(::System::String* payload, ::System::String* region)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETAGEAPPEALURL_OFFSET))(payload, region);
		}

		static ::System::String* GetEmailBindingUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETEMAILBINDINGURL_OFFSET))();
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateCurrentAccountToken(::System::String* token, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType tokenType)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTTOKEN_OFFSET))(token, tokenType);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode UpdateCurrentAccountRegion(::System::String* region)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_UPDATECURRENTACCOUNTREGION_OFFSET))(region);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode MigrateAccounts(::System::String* accountList)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_MIGRATEACCOUNTS_OFFSET))(accountList);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode DeleteAllAccounts()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_DELETEALLACCOUNTS_OFFSET))();
		}

		static ::System::String* GetUserCenterUrl(::System::Boolean isGuest, ::System::String* thirdPartyTypeArray)
		{
			return ((::System::String*(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETUSERCENTERURL_OFFSET))(isGuest, thirdPartyTypeArray);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ExchangeToken(::System::String* token, ::System::String* id, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType srcTokenType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType targetTokenType, ::System::Action_2<::System::Object*, ::System::String*>* resultHandler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_TokenType, ::System::Action_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EXCHANGETOKEN_OFFSET))(token, id, srcTokenType, targetTokenType, resultHandler);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode RefreshCurrentAccountInfo(::System::Action_2<::System::Object*, ::System::String*>* onRefreshAccountInfo)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::Action_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_REFRESHCURRENTACCOUNTINFO_OFFSET))(onRefreshAccountInfo);
		}

		static ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode GetCrossTokenUrlBySToken(::System::String* destUrl, ::System::Action_2<::System::Object*, ::System::String*>* resultHandler)
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode(*)(::System::String*, ::System::Action_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETCROSSTOKENURLBYSTOKEN_OFFSET))(destUrl, resultHandler);
		}

		static ::System::Boolean NativeEventHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId id, ::Il2CppArray<::System::Byte>* data, ::System::UInt64 len, ::System::IntPtr context)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEVENTHANDLER_OFFSET))(id, data, len, context);
		}

		static ::System::Boolean NativeKibanaReportHandler(::Il2CppArray<::System::Byte>* data, ::System::UInt64 len)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEKIBANAREPORTHANDLER_OFFSET))(data, len);
		}

		static ::System::Boolean NativeGetRegionSwitchStatusHandler()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETREGIONSWITCHSTATUSHANDLER_OFFSET))();
		}

		static ::System::Void NativeThirdpartyOAuthResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret, ::Il2CppArray<::System::Byte>* data, ::System::UInt64 len)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVETHIRDPARTYOAUTHRESULTHANDLER_OFFSET))(ret, data, len);
		}

		static ::System::Void NativeExchangeTokenResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret, ::Il2CppArray<::System::Byte>* data, ::System::UInt64 len)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEEXCHANGETOKENRESULTHANDLER_OFFSET))(ret, data, len);
		}

		static ::System::Void NativeRefreshAccountInfoResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret, ::Il2CppArray<::System::Byte>* data, ::System::UInt64 len)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEREFRESHACCOUNTINFORESULTHANDLER_OFFSET))(ret, data, len);
		}

		static ::System::Void NativeGetCrossTokenUrlBySTokenResultHandler(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret, ::Il2CppArray<::System::Byte>* data, ::System::UInt64 len)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_NATIVEGETCROSSTOKENURLBYSTOKENRESULTHANDLER_OFFSET))(ret, data, len);
		}

		static ::Il2CppArray<::System::Byte>* ToUtf8(::System::String* source)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_TOUTF8_OFFSET))(source);
		}

		static ::System::String* FromUtf8(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_FROMUTF8_OFFSET))(data);
		}
	};
}
