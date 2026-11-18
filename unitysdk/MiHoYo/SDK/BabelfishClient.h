#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BabelfishConfig; }
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_BABELFISHCLIENT_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1FA72660)
#define MIHOYO_SDK_BABELFISHCLIENT_SETCONFIGURL_OFFSET UNITYSDK_OFFSET(0x1FA72640)
#define MIHOYO_SDK_BABELFISHCLIENT_SETTRANSLATEURL_OFFSET UNITYSDK_OFFSET(0x1FA72650)
#define MIHOYO_SDK_BABELFISHCLIENT_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1FA728E0)
#define MIHOYO_SDK_BABELFISHCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA732C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BabelfishClient_TypeDefinitionIndex = 35598;

	class BabelfishClient : public ::System::Object
	{
	public:
		// static const ::System::Single DEFAULT_TIMEOUT_SEC; // 0x0
		// static const ::System::Single MIN_TIMEOUT_SEC; // 0x0
		// static const ::System::Int32 NO_RETRY = 0x0; // 0x0
		::System::String* _translateUrl; // 0x10
		::System::String* _configUrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void SetConfigUrl(::System::String* configUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_SETCONFIGURL_OFFSET))(this, configUrl);
		}

		::System::Void SetTranslateUrl(::System::String* translateUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_SETTRANSLATEURL_OFFSET))(this, translateUrl);
		}

		::System::Void GetConfig(::System::String* gameBiz, ::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>* onSuccess, ::System::Action_2<::System::Int32, ::System::String*>* onError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_GETCONFIG_OFFSET))(this, gameBiz, onSuccess, onError);
		}

		::System::Void Translate(::System::String* sceneId, ::System::String* messageId, ::System::String* text, ::System::String* targetLanguage, ::System::String* senderId, ::System::String* roleId, ::MiHoYo::SDK::JSONArray* contextMessages, ::System::String* authKey, ::System::String* authKeyVer, ::System::String* gameBiz, ::System::String* region, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* onSuccess, ::System::Action_2<::System::Int32, ::System::String*>* onError, ::System::Single timeoutSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::JSONArray*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_TRANSLATE_OFFSET))(this, sceneId, messageId, text, targetLanguage, senderId, roleId, contextMessages, authKey, authKeyVer, gameBiz, region, onSuccess, onError, timeoutSec);
		}
	};
}
