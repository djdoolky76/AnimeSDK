#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace MiHoYo::SDK { class MiHoYoSDKBrowser; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class CanvasGroup; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define MIHOYO_SDK_MIHOYOSDKBROWSER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB629B30)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_CTOR_OFFSET UNITYSDK_OFFSET(0xB62AB70)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0xB629FE0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOBACK_OFFSET UNITYSDK_OFFSET(0xB62A030)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOFORWARD_OFFSET UNITYSDK_OFFSET(0xB62A060)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GOBACK_OFFSET UNITYSDK_OFFSET(0xB62A9A0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GOFORWARD_OFFSET UNITYSDK_OFFSET(0xB62AA30)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_INITCANVASGROUP_OFFSET UNITYSDK_OFFSET(0xB629EA0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_LOADURL_OFFSET UNITYSDK_OFFSET(0xB62AB50)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB629F90)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONFETCHERROR_OFFSET UNITYSDK_OFFSET(0xB62A3D0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0xB62A670)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADSTARTS_OFFSET UNITYSDK_OFFSET(0xB62A660)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0xB62A8B0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_RELOAD_OFFSET UNITYSDK_OFFSET(0xB62AAC0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_SETFULLSCREEN_OFFSET UNITYSDK_OFFSET(0xB62A090)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0xB62A000)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKBrowser_TypeDefinitionIndex = 47489;

	class MiHoYoSDKBrowser : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_2<::MiHoYo::SDK::MiHoYoSDKBrowser*, ::System::String*>* OnPageFinished; // 0x18
		::System::Action_2<::MiHoYo::SDK::MiHoYoSDKBrowser*, ::System::String*>* OnMessageReceived; // 0x20
		::System::Action_3<::MiHoYo::SDK::MiHoYoSDKBrowser*, ::System::Int32, ::System::String*>* OnPageErrorReceived; // 0x28
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x30
		::ZenFulcrum::EmbeddedBrowser::Browser* _browser; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONDESTROY_OFFSET))(this);
		}

		::System::Single get_Alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GET_ALPHA_OFFSET))(this);
		}

		::System::Void set_Alpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_SET_ALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_CanGoBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOBACK_OFFSET))(this);
		}

		::System::Boolean get_CanGoForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOFORWARD_OFFSET))(this);
		}

		::System::Void InitCanvasGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_INITCANVASGROUP_OFFSET))(this);
		}

		::System::Void SetFullScreen(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_SETFULLSCREEN_OFFSET))(this, a1, a2);
		}

		::System::Void OnFetchError(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONFETCHERROR_OFFSET))(this, a1);
		}

		::System::Void OnLoadStarts(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADSTARTS_OFFSET))(this, a1);
		}

		::System::Void OnLoadFinished(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADFINISHED_OFFSET))(this, a1);
		}

		::System::Void OnUniWebViewMsgReceive(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONUNIWEBVIEWMSGRECEIVE_OFFSET))(this, a1);
		}

		::System::Void GoBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GOBACK_OFFSET))(this);
		}

		::System::Void GoForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GOFORWARD_OFFSET))(this);
		}

		::System::Void Reload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_RELOAD_OFFSET))(this);
		}

		::System::Void LoadURL(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_LOADURL_OFFSET))(this, a1, a2);
		}

	};
}
