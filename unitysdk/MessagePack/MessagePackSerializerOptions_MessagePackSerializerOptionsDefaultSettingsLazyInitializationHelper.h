#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_MESSAGEPACKSERIALIZEROPTIONSDEFAULTSETTINGSLAZYINITIALIZATIONHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF5FA00)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper_TypeDefinitionIndex = 7242;

	class MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Standard()
		{
			return (::MessagePack::MessagePackSerializerOptions**)UnitySDK::FromName("MessagePack", "MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper")->GetStaticField(0xCEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_MESSAGEPACKSERIALIZEROPTIONSDEFAULTSETTINGSLAZYINITIALIZATIONHELPER_CCTOR_OFFSET))();
		}

	};
}
