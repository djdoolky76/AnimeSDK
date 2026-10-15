#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineReplaceTrialPlayer; }

#define RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB27D30)
#define RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB27D40)
#define RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB27CF0)

namespace RPG::GameCore
{
	class StoryLineReplaceTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineReplaceTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineReplaceTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineReplaceTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineReplaceTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
