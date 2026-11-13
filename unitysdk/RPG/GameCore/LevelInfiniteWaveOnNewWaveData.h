#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA974E0)
#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA97440)
#define RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA97490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteWaveOnNewWaveData_TypeDefinitionIndex = 57955;

	class LevelInfiniteWaveOnNewWaveData : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEWAVEONNEWWAVEDATA_GETSOURCERUNTIMEID_OFFSET))(this);
		}

	};
}
