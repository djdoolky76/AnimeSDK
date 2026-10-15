#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4059B0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_GETANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD404810)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xD405960)

namespace RPG::Client::LittleGame::CakeRace
{
	class CakeRaceSupportBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType JBIOGKPHKKC()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAnchorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_GETANCHORTRANSFORM_OFFSET))(this);
		}

	};
}
