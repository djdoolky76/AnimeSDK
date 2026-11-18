#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ABTestInfo; }
namespace MiHoYo::SDK { class AbTestConfig_7911CDDE5D92E7D1; }
namespace MiHoYo::SDK { class AccountPlatConfig; }
namespace MiHoYo::SDK { class BilibiliConfigModel; }
namespace MiHoYo::SDK { class ConfigManager_WebViewABTestModel; }
namespace MiHoYo::SDK { class ConfigUrlModel; }
namespace MiHoYo::SDK { class EOSParametersModel; }
namespace MiHoYo::SDK { class GooglePlayAbTestConfig; }
namespace MiHoYo::SDK { class SteamParametersModel; }
namespace MiHoYo::SDK { class WatermarkInfo; }
namespace System { class String; }

#define MIHOYO_SDK_LOCALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9F30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LocalConfig_TypeDefinitionIndex = 19161;

	class LocalConfig : public ::System::Object
	{
	public:
		::System::String* area; // 0x10
		::System::Int32 env; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* app_id; // 0x20
		::System::String* app_key; // 0x28
		::System::String* channel_id; // 0x30
		::System::String* cp_app_id; // 0x38
		::System::String* cp_app_key; // 0x40
		::System::String* taptap_client_id; // 0x48
		::System::String* apple_client_id; // 0x50
		::System::String* google_client_id; // 0x58
		::System::String* facebook_client_id; // 0x60
		::System::String* twitter_client_id; // 0x68
		::System::String* discord_parent_client_id; // 0x70
		::System::Boolean enable_rich_presence; // 0x78
		::System::Byte _padding1[0x7];
		::System::String* domain_prefix; // 0x80
		::System::Boolean enable_apm_sdk; // 0x88
		::System::Boolean enable_red_point_text; // 0x89
		::System::Boolean hoyopass_default_config; // 0x8A
		::System::Boolean use_hoyopass_default_config; // 0x8B
		::System::Boolean console_passport_config; // 0x8C
		::System::Byte _padding2[0x3];
		::System::String* theme; // 0x90
		::System::Int32 passport_env; // 0x98
		::System::Byte _padding3[0x4];
		::System::String* passport_app_id; // 0xA0
		::MiHoYo::SDK::EOSParametersModel* eos_parameters; // 0xA8
		::MiHoYo::SDK::ConfigUrlModel* url; // 0xB0
		::MiHoYo::SDK::BilibiliConfigModel* bilibili_sdk; // 0xB8
		::MiHoYo::SDK::WatermarkInfo* watermark; // 0xC0
		::MiHoYo::SDK::AbTestConfig_7911CDDE5D92E7D1* abtestOS; // 0xC8
		::MiHoYo::SDK::AbTestConfig_7911CDDE5D92E7D1* compliance_abtest; // 0xD0
		::MiHoYo::SDK::ABTestInfo* abtestCN; // 0xD8
		::MiHoYo::SDK::ConfigManager_WebViewABTestModel* webview; // 0xE0
		::MiHoYo::SDK::AccountPlatConfig* account_platform; // 0xE8
		::System::Boolean ps4_bind_email_can_skip; // 0xF0
		::System::Boolean console_detect_pay_xsts_enable; // 0xF1
		::System::Boolean enable_color_text_fix; // 0xF2
		::System::Boolean enable_googleplaypc_v2; // 0xF3
		::System::Byte _padding4[0x4];
		::MiHoYo::SDK::GooglePlayAbTestConfig* googleplay_abtest; // 0xF8
		::MiHoYo::SDK::SteamParametersModel* steam_parameters; // 0x100
		::System::Boolean enable_device_limit; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOCALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
