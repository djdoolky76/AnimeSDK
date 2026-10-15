#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IdleLiveUIType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_IDLELIVEUIVISIBLEDATA_CONTAINSFLAG_OFFSET UNITYSDK_OFFSET(0xE6D6D50)
#define RPG_GAMECORE_IDLELIVEUIVISIBLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE6D6DA0)

namespace RPG::GameCore
{
	class IdleLiveUiVisibleData : public ::System::Object
	{
	public:
		::System::Boolean IsVisible; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::IdleLiveUIType UiTypesToSet; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEUIVISIBLEDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean ContainsFlag(::RPG::Client::IdleLiveUIType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IdleLiveUIType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEUIVISIBLEDATA_CONTAINSFLAG_OFFSET))(this, a1);
		}

	};
}
