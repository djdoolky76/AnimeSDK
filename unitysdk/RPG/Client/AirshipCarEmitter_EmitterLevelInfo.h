#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AIRSHIPCAREMITTER_EMITTERLEVELINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC6525C0)

namespace RPG::Client
{
	class AirshipCarEmitter_EmitterLevelInfo : public ::System::Object
	{
	public:
		::System::Single maxAliveCount; // 0x10
		::System::Single emitInterval; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_EMITTERLEVELINFO_CTOR_OFFSET))(this);
		}

	};
}
