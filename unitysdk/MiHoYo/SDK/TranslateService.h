#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BabelfishClient; }
namespace MiHoYo::SDK { class ChatMessage; }
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATESERVICE_ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0EF900)
#define MIHOYO_SDK_TRANSLATESERVICE_BUILDCONTEXTMESSAGES_OFFSET UNITYSDK_OFFSET(0x1F0EFED0)
#define MIHOYO_SDK_TRANSLATESERVICE_CALLBACKTRANSLATERESULT_OFFSET UNITYSDK_OFFSET(0x1F0F0500)
#define MIHOYO_SDK_TRANSLATESERVICE_CHECKINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F0EF420)
#define MIHOYO_SDK_TRANSLATESERVICE_CLEARCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F0F03A0)
#define MIHOYO_SDK_TRANSLATESERVICE_GETCONFIGURL_OFFSET UNITYSDK_OFFSET(0x1F0EECB0)
#define MIHOYO_SDK_TRANSLATESERVICE_GETGAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1F0EEBB0)
#define MIHOYO_SDK_TRANSLATESERVICE_GETREGION_OFFSET UNITYSDK_OFFSET(0x1F0EEC30)
#define MIHOYO_SDK_TRANSLATESERVICE_GETTRANSLATEURL_OFFSET UNITYSDK_OFFSET(0x1F0EED90)
#define MIHOYO_SDK_TRANSLATESERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x1F0EEE70)
#define MIHOYO_SDK_TRANSLATESERVICE_PARSECHATMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0EF480)
#define MIHOYO_SDK_TRANSLATESERVICE_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F0EF0F0)
#define MIHOYO_SDK_TRANSLATESERVICE_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1F0EFAB0)
#define MIHOYO_SDK_TRANSLATESERVICE_VALIDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0EF840)
#define MIHOYO_SDK_TRANSLATESERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F1330)
#define MIHOYO_SDK_TRANSLATESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F12F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateService_TypeDefinitionIndex = 35606;

	class TranslateService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::TranslateService** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::TranslateService**)Il2CppClass::FromTypeDefinitionIndex(TranslateService_TypeDefinitionIndex)->GetStaticField(0x2A890);
		}
		// static const ::System::String* DEFAULT_CONFIG_URL; // 0x0
		// static const ::System::String* DEFAULT_TRANSLATE_URL; // 0x0
		// static const ::System::String* LOG_TAG; // 0x0
		// static const ::System::String* K_SCENE_ID; // 0x0
		// static const ::System::String* K_MESSAGES; // 0x0
		// static const ::System::String* K_UID; // 0x0
		// static const ::System::String* K_TIME; // 0x0
		// static const ::System::String* K_UID_TIME_MD5; // 0x0
		// static const ::System::String* K_SPEAKER_NAME; // 0x0
		// static const ::System::String* K_IS_NPC; // 0x0
		// static const ::System::String* K_CONTENT; // 0x0
		// static const ::System::String* K_LANGUAGE; // 0x0
		// static const ::System::String* K_TARGET_LANGUAGE; // 0x0
		// static const ::System::String* K_AUTH_KEY; // 0x0
		// static const ::System::String* K_AUTH_KEY_VER; // 0x0
		// static const ::System::String* K_RESULT; // 0x0
		// static const ::System::String* K_MAX_CONTEXT_SIZE; // 0x0
		// static const ::System::String* K_TIMEOUT; // 0x0
		// static const ::System::String* K_ITEM_ID; // 0x0
		// static const ::System::String* K_TEXT; // 0x0
		// static const ::System::String* K_TRANSLATION; // 0x0
		// static const ::System::String* K_DETECTED_SOURCE_LANGUAGE; // 0x0
		// static const ::System::String* K_ORIGINAL; // 0x0
		// static const ::System::String* K_TRANSLATED; // 0x0
		// static const ::System::String* K_SOURCE_LANG; // 0x0
		// static const ::System::String* K_TARGET_LANG; // 0x0
		// static const ::System::String* K_MESSAGE_ID; // 0x0
		// static const ::System::String* K_SENDER_ID; // 0x0
		// static const ::System::String* K_SOURCE_TEXT; // 0x0
		// static const ::System::String* K_CONTEXT_MESSAGES; // 0x0
		// static const ::System::String* K_FROM_CACHE; // 0x0
		// static const ::System::String* K_SHIELD_TYPE; // 0x0
		::MiHoYo::SDK::BabelfishClient* _client; // 0x10
		::System::Boolean _initialized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE__CCTOR_OFFSET))();
		}

		::System::String* GetGameBiz()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETGAMEBIZ_OFFSET))(this);
		}

		::System::String* GetRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETREGION_OFFSET))(this);
		}

		::System::String* GetConfigUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETCONFIGURL_OFFSET))(this);
		}

		::System::String* GetTranslateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_GETTRANSLATEURL_OFFSET))(this);
		}

		::System::Void Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_INIT_OFFSET))(this, callback);
		}

		::System::Void SetContext(::System::String* sceneId, ::MiHoYo::SDK::JSONArray* messagesJson, ::System::Int32 maxContextSize, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONArray*, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_SETCONTEXT_OFFSET))(this, sceneId, messagesJson, maxContextSize, callback);
		}

		::System::Void AddMessage(::System::String* sceneId, ::MiHoYo::SDK::JSONObject* msgJson, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_ADDMESSAGE_OFFSET))(this, sceneId, msgJson, callback);
		}

		::System::Void Translate(::System::String* sceneId, ::System::String* uid, ::System::String* time, ::System::String* uidTimeMd5, ::System::String* targetLanguage, ::System::String* authKey, ::System::String* authKeyVer, ::System::Int32 timeoutMs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_TRANSLATE_OFFSET))(this, sceneId, uid, time, uidTimeMd5, targetLanguage, authKey, authKeyVer, timeoutMs, callback);
		}

		::System::Void ClearContext(::System::String* sceneId, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_CLEARCONTEXT_OFFSET))(this, sceneId, callback);
		}

		::MiHoYo::SDK::ChatMessage* ParseChatMessage(::MiHoYo::SDK::JSONNode* msgJson)
		{
			return ((::MiHoYo::SDK::ChatMessage*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_PARSECHATMESSAGE_OFFSET))(this, msgJson);
		}

		::System::Void CallbackTranslateResult(::System::Action_1<::System::String*>* callback, ::MiHoYo::SDK::JSONNode* data, ::MiHoYo::SDK::ChatMessage* msg, ::System::String* targetLanguage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::ChatMessage*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_CALLBACKTRANSLATERESULT_OFFSET))(this, callback, data, msg, targetLanguage);
		}

		::MiHoYo::SDK::JSONArray* BuildContextMessages(::System::String* sceneId, ::System::String* excludeUidTimeMd5)
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_BUILDCONTEXTMESSAGES_OFFSET))(this, sceneId, excludeUidTimeMd5);
		}

		::System::String* ValidateMessage(::MiHoYo::SDK::ChatMessage* msg, ::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::ChatMessage*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_VALIDATEMESSAGE_OFFSET))(this, msg, index);
		}

		::System::Boolean CheckInitialized(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE_CHECKINITIALIZED_OFFSET))(this, callback);
		}
	};
}
