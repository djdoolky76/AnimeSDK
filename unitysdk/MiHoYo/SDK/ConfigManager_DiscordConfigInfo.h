#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_DISCORDCONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE280E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_DiscordConfigInfo_TypeDefinitionIndex = 19463;

	class ConfigManager_DiscordConfigInfo : public ::System::Object
	{
	public:
		::System::String* discord_parent_client_id; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x18
		::System::Boolean enable_rich_presence; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_DISCORDCONFIGINFO__CTOR_OFFSET))(this);
		}
	};
}
