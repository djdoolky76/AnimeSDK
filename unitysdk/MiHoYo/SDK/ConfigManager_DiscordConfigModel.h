#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_DISCORDCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC18320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_DiscordConfigModel_TypeDefinitionIndex = 19462;

	class ConfigManager_DiscordConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_DISCORDCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
