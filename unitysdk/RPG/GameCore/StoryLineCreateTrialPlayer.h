#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineCreateTrialPlayer; }

#define RPG_GAMECORE_STORYLINECREATETRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB27AE0)
#define RPG_GAMECORE_STORYLINECREATETRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB27AF0)
#define RPG_GAMECORE_STORYLINECREATETRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB27AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineCreateTrialPlayer_TypeDefinitionIndex = 21671;

	class StoryLineCreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECREATETRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineCreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECREATETRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineCreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECREATETRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
