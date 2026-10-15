#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineAddTrialPlayer; }

#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB277E0)
#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB277F0)
#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB277A0)

namespace RPG::GameCore
{
	class StoryLineAddTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineAddTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineAddTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineAddTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineAddTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
