#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_DEVICESERVECONFIGENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xDE91910)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int DeviceServeConfigEntry_TypeDefinitionIndex = 80098;

	class DeviceServeConfigEntry : public ::System::Object
	{
	public:
		::System::UInt32 DeviceID; // 0x10
		::System::UInt32 DishID; // 0x14
		::System::String* ProxyPrefab; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_DEVICESERVECONFIGENTRY_CTOR_OFFSET))(this);
		}

	};
}
