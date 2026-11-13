#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceImageBubbleMonoView.h"

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDEB70)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1CBDEB10)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1CBDEB20)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatBubbleMonoView_TypeDefinitionIndex = 80871;

	class CakeRaceCatBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceImageBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType JBIOGKPHKKC()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECATBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET))(this);
		}

	};
}
