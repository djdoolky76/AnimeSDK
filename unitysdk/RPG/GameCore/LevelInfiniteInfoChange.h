#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FA97330)
#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA97380)
#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA97290)
#define RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA972E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteInfoChange_TypeDefinitionIndex = 57958;

	class LevelInfiniteInfoChange : public ::CMPGEAFHHDC
	{
	public:
		::System::Int32 CurrentWaveIndex; // 0x18
		::System::Int32 TotalSummonCount; // 0x1C
		::System::Int32 TotalMonsterCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEINFOCHANGE_CLEAR_OFFSET))(this);
		}

	};
}
