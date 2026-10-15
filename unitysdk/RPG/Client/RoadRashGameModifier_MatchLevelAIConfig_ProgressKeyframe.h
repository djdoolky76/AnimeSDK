#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D332410)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D332260)

namespace RPG::Client
{
	class RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint PlayerProgress; // 0x10
		::RPG::GameCore::FixPoint TargetDistance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_MatchLevelAIConfig_ProgressKeyframe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_MATCHLEVELAICONFIG_PROGRESSKEYFRAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
