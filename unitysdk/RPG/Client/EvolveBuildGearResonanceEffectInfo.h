#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildGearResonanceEffectType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EVOLVEBUILDGEARRESONANCEEFFECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCE24990)

namespace RPG::Client
{
	class EvolveBuildGearResonanceEffectInfo : public ::System::Object
	{
	public:
		::System::Boolean NeedHighlight; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::EvolveBuildGearResonanceEffectType ResonanceEffectType; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARRESONANCEEFFECTINFO_CTOR_OFFSET))(this);
		}

	};
}
