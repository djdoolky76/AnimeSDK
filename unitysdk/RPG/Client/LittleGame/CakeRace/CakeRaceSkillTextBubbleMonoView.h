#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceTextBubbleMonoView.h"

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE1A50)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1CBE19F0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1CBE1A00)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceSkillTextBubbleMonoView_TypeDefinitionIndex = 80876;

	class CakeRaceSkillTextBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceTextBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType JBIOGKPHKKC()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESKILLTEXTBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET))(this);
		}

	};
}
