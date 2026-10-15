#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameLevelHeartDialPerformance; }

#define RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D716FC0)
#define RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D716D70)

namespace RPG::GameCore
{
	class GameLevelHeartDialPerformance : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameLevelHeartDialPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameLevelHeartDialPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
