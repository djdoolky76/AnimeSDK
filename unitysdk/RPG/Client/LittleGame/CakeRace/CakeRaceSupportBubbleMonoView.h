#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD3FCE60)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_GETANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD3FBCC0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xD3FCE10)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceSupportBubbleMonoView_TypeDefinitionIndex = 78142;

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
