#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class BabelfishConfig; }
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_BABELFISHCLIENT_CTOR_OFFSET UNITYSDK_OFFSET(0xAF5C410)
#define MIHOYO_SDK_BABELFISHCLIENT_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xAF5BC20)
#define MIHOYO_SDK_BABELFISHCLIENT_SETCONFIGURL_OFFSET UNITYSDK_OFFSET(0xAF5BC00)
#define MIHOYO_SDK_BABELFISHCLIENT_SETTRANSLATEURL_OFFSET UNITYSDK_OFFSET(0xAF5BC10)
#define MIHOYO_SDK_BABELFISHCLIENT_TRANSLATE_OFFSET UNITYSDK_OFFSET(0xAF5BEE0)

namespace MiHoYo::SDK
{
	class BabelfishClient : public ::System::Object
	{
	public:
		::System::String* _configUrl; // 0x10
		::System::String* _translateUrl; // 0x18
		// static const ::System::Object DEFAULT_TIMEOUT_SEC; // 0x0
		// static const ::System::Object MIN_TIMEOUT_SEC; // 0x0
		// static const ::System::Object NO_RETRY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_CTOR_OFFSET))(this);
		}

		::System::Void SetConfigUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_SETCONFIGURL_OFFSET))(this, a1);
		}

		::System::Void SetTranslateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_SETTRANSLATEURL_OFFSET))(this, a1);
		}

		::System::Void GetConfig(::System::String* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_GETCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Translate(::MiHoYo::SDK::JSONArray* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Action* a7, ::System::Action* a8, ::System::Single a9)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT_TRANSLATE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

	};
}
