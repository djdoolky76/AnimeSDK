#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_BASKETCONFIGENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13E8B0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int BasketConfigEntry_TypeDefinitionIndex = 80096;

	class BasketConfigEntry : public ::System::Object
	{
	public:
		::System::UInt32 DeviceID; // 0x10
		::System::Int32 Capacity; // 0x14
		::System::Int32 FullNoTipMin; // 0x18
		::System::Int32 FullTipMin; // 0x1C
		::System::Int32 ConsumeCount; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* RestockPrefab; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_BASKETCONFIGENTRY_CTOR_OFFSET))(this);
		}

	};
}
