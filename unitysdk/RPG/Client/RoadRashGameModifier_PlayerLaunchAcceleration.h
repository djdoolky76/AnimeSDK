#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_PlayerLaunchAcceleration; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D332670)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D332680)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D332640)

namespace RPG::Client
{
	class RoadRashGameModifier_PlayerLaunchAcceleration : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint AdditiveSpeed; // 0x18
		::RPG::GameCore::FixPoint AdditiveSpeedDuration; // 0x20
		::RPG::GameCore::FixPoint AdditiveEffectDuration; // 0x28
		::RPG::GameCore::FixPoint FOV; // 0x30
		::RPG::GameCore::FixPoint FOVDuration; // 0x38
		::System::String* FOVBlendInCurveName; // 0x40
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0x48
		::System::String* FOVBlendOutCurveName; // 0x50
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0x58
		::RPG::GameCore::FixPoint BlurRadius; // 0x60
		::RPG::GameCore::FixPoint BlurStart; // 0x68
		::RPG::GameCore::FixPoint BlurFeather; // 0x70
		::RPG::GameCore::FixPoint BlurDuration; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
