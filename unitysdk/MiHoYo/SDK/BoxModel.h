#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace MiHoYo::SDK { class H5logFilterConfig; }
namespace MiHoYo::SDK { class HttpDnsBoxConfig; }
namespace MiHoYo::SDK { class KibanaNetBoxConfig; }
namespace MiHoYo::SDK { class KibanaPCBoxConfig; }
namespace MiHoYo::SDK { class LoginFlowNotificationBoxConfig; }
namespace MiHoYo::SDK { class LoginRecordBoxConfig; }
namespace MiHoYo::SDK { class PaymentCNBoxConfig; }
namespace MiHoYo::SDK { class TelemetryBoxConfig; }
namespace MiHoYo::SDK { class WebViewAPMBoxConfig; }
namespace MiHoYo::SDK { class WebViewRenderMethodBoxConfig; }
namespace MiHoYo::SDK { class WebViewReportBoxConfig; }
namespace System { class String; }

#define MIHOYO_SDK_BOXMODEL_CHECKDIVISORENABLE_OFFSET UNITYSDK_OFFSET(0x3A5EC30)
#define MIHOYO_SDK_BOXMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x3A5ED40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BoxModel_TypeDefinitionIndex = 13030;

	class BoxModel : public ::System::Object
	{
	public:
		::System::Int32 emailBindRemindInterval; // 0x10
		::System::Boolean emailBindRemind; // 0x14
		::System::Boolean disableEmailBindSkip; // 0x15
		::System::Boolean noticePreloadDisable; // 0x16
		::System::Byte _padding0[0x1];
		::System::Int32 reportLocalMaxCount; // 0x18
		::System::Int32 reportLocalDeletePercentage; // 0x1C
		::System::Boolean kcpEnable; // 0x20
		::System::Boolean modifyRealNameOtherVerify; // 0x21
		::System::Byte _padding1[0x6];
		::System::String* pay_payco_centered_host; // 0x28
		::MiHoYo::SDK::KibanaNetBoxConfig* network_report_config; // 0x30
		::MiHoYo::SDK::KibanaPCBoxConfig* kibana_pc_config; // 0x38
		::MiHoYo::SDK::H5logFilterConfig* h5log_filter_config; // 0x40
		::System::Boolean webviewTrackEnable; // 0x48
		::System::Boolean enablelistPriceTierV2; // 0x49
		::System::Byte _padding2[0x6];
		::System::String* defaultOSPayDialogType; // 0x50
		::MiHoYo::SDK::PaymentCNBoxConfig* payment_cn_config; // 0x58
		::MiHoYo::SDK::TelemetryBoxConfig* telemetry_config; // 0x60
		::System::Boolean enable_web_dpi; // 0x68
		::System::Byte _padding3[0x7];
		::MiHoYo::SDK::HttpDnsBoxConfig* httpdns_config; // 0x70
		::System::String* hoyoplay_auth_login_ignore; // 0x78
		::MiHoYo::SDK::WebViewAPMBoxConfig* webview_apm_config; // 0x80
		::MiHoYo::SDK::WebViewReportBoxConfig* webview_report_config; // 0x88
		::System::Int32 list_goods_work_mode; // 0x90
		::System::Int32 kibana_ps_log_method; // 0x94
		::System::Int32 console_login_method; // 0x98
		::System::Byte _padding4[0x4];
		::MiHoYo::SDK::WebViewRenderMethodBoxConfig* webview_rendermethod_config; // 0xA0
		::System::String* webview_async_init; // 0xA8
		::System::Boolean enable_webview_joypad; // 0xB0
		::System::Byte _padding5[0x7];
		::MiHoYo::SDK::LoginFlowNotificationBoxConfig* login_flow_notification; // 0xB8
		::System::Boolean enable_register_autologin; // 0xC0
		::System::Boolean enable_user_center_v2; // 0xC1
		::System::Boolean enable_logout_ann_redpoint; // 0xC2
		::System::Byte _padding6[0x5];
		::MiHoYo::SDK::LoginRecordBoxConfig* login_record_config; // 0xC8
		::System::Int32 launch_user_agreement_timeout; // 0xD0
		::System::Int32 console_collectionsid_timeout; // 0xD4
		::System::String* block_unsupported_region; // 0xD8
		::System::Boolean enable_spint_prodqa_realname; // 0xE0

		::System::Void _ctor(::FF1237522147A967* F1DA3CEDFEA65142)
		{
			return ((::System::Void(*)(::PVOID, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BOXMODEL__CTOR_OFFSET))(this, F1DA3CEDFEA65142);
		}

		static ::System::Boolean CheckDivisorEnable(::System::Int32 FB130B43C8FB79EB)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BOXMODEL_CHECKDIVISORENABLE_OFFSET))(FB130B43C8FB79EB);
		}
	};
}
