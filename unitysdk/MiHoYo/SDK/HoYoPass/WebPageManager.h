#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/WebPageManager_WebPageType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class WebPageManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE7CAF0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CLOSEWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1BE78AC0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7CAE0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_GETURL_OFFSET UNITYSDK_OFFSET(0x1BE7B0F0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BE7C3F0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONPAGECLOSED_OFFSET UNITYSDK_OFFSET(0x1BE7BAC0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BE7BBA0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_OPENWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1BE4A490)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1BE7CB40)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1BE7CB60)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1BE7CB70)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_4_OFFSET UNITYSDK_OFFSET(0x1BE7CB80)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager_TypeDefinitionIndex = 8342;

	class WebPageManager : public ::System::Object
	{
	public:
		::System::Action* OnWebpageFinish; // 0x10
		::System::Action* onGetResultCallback; // 0x18
		::MiHoYo::SDK::Web* webview; // 0x20
		static ::MiHoYo::SDK::HoYoPass::WebPageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::WebPageManager**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "WebPageManager")->GetStaticField(0xD610);
		}

		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CCTOR_OFFSET))();
		}

		::System::Void OpenWebPage(::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType a1, ::System::Action* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_OPENWEBPAGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CloseWebPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CLOSEWEBPAGE_OFFSET))(this);
		}

		::System::String* GetUrl(::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_GETURL_OFFSET))(this, a1);
		}

		::System::Void onPageClosed(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONPAGECLOSED_OFFSET))(this, a1);
		}

		::System::Void onResultCallback(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONRESULTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void onErrorCallback(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONERRORCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenWebPage_b__7_0(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_0_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenWebPage_b__7_2(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_2_OFFSET))(this, a1);
		}

		::System::Void _OpenWebPage_b__7_3(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_3_OFFSET))(this, a1);
		}

		::System::Boolean _OpenWebPage_b__7_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_4_OFFSET))(this);
		}

	};
}
