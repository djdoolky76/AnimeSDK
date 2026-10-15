#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceImageBubbleMonoView.h"

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD403D80)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xD403D20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xD403D30)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceFoodBubbleMonoView_TypeDefinitionIndex = 78138;

	class CakeRaceFoodBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceImageBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType JBIOGKPHKKC()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFOODBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET))(this);
		}

	};
}
