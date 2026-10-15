#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingAIDangerConfig; }

#define RPG_GAMECORE_CHENLINGAIDANGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57D9D0)
#define RPG_GAMECORE_CHENLINGAIDANGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57D7F0)

namespace RPG::GameCore
{
	class ChenLingAIDangerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BlockingObstacleDetectionRange; // 0x10
		::System::Single BlockingPathMargin; // 0x14
		::System::Single StaticObstacleDangerMultiplier; // 0x18
		::System::Single CollisionAheadFactor; // 0x1C
		::System::Single CollisionSafetyMargin; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIDANGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingAIDangerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingAIDangerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIDANGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
