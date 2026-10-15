#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdSkillActionGainRandomProp; }

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81D0E0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81D0F0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81D030)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGainRandomProp_TypeDefinitionIndex = 24932;

	class BirdSkillActionGainRandomProp : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
