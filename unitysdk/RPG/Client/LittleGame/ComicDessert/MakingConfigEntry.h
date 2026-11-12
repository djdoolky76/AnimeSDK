#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_MAKINGCONFIGENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xDE91E90)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int MakingConfigEntry_TypeDefinitionIndex = 80099;

	class MakingConfigEntry : public ::System::Object
	{
	public:
		::System::UInt32 DeviceID; // 0x10
		::System::Single MakingSeconds; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_MAKINGCONFIGENTRY_CTOR_OFFSET))(this);
		}

	};
}
